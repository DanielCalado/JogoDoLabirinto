/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
#pragma GCC diagnostic ignored "-Wc++11-extensions"
 */

#include "Jogador.h"
#include "Tabuleiro.h"
#include "mbed.h"
#include <atomic>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>

#define PLAYER_1_FLAG (1UL << 0)
#define PLAYER_2_FLAG (1UL << 1)

EventFlags player_flags;

Tabuleiro tab;

Jogador player01(PA_0, PA_1, "\033[91m■ \033[97m");
Jogador player02(PC_1, PC_0, "\033[32m■ \033[97m");

Tabuleiro *tabe = &tab;

void thread_mover_jogador1() {
  while (true) {
    player_flags.wait_any(PLAYER_1_FLAG);
    player01.mover_jogador(tabe);
    ThisThread::sleep_for(500ms);
    player_flags.set(PLAYER_2_FLAG);
  }
}

void thread_mover_jogador2() {
  while (true) {
    player_flags.wait_any(PLAYER_2_FLAG);
    player02.mover_jogador(tabe);
    ThisThread::sleep_for(500ms);
    player_flags.set(PLAYER_1_FLAG);
  }
}

void iniciarObjetos() {
  tab.montarTabuleiro();

  player01.criarCasasAleatorias(tabe);
  player02.criarCasasAleatorias(tabe);
}

int main() {
  BufferedSerial pc(USBTX, USBRX, 460800);

  iniciarObjetos();

  Thread th_jogador1, th_jogador2;
  th_jogador1.start(callback(thread_mover_jogador1));
  th_jogador2.start(callback(thread_mover_jogador2));

  while (true) {
    if(tab.status == false){
        iniciarObjetos();
        tab.status = true;
    }
    tab.imprimirTabuleiro();
    printf("\033[2J\033[H");
    ThisThread::sleep_for(500ms);
    player_flags.set(PLAYER_1_FLAG);
    player_flags.set(PLAYER_2_FLAG);
  }
}