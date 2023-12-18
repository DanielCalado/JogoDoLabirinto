#include "Jogador.h"
#include "Tabuleiro.h"
#include <iostream>
using namespace std;

Jogador::Jogador(AnalogIn cord_x, AnalogIn cord_y, string tipo)
    : cord_x(cord_x), cord_y(cord_y), tipo(tipo){};

void Jogador::mover_jogador(Tabuleiro *tab) {

  while (true) {
    int readX = cord_x.read_u16();
    int readY = cord_y.read_u16();
    if (readX <= 500) {
      if (tab->tabuleiroJogo[coluna_inicial - 1][linha_inicial] == "  " ||
          tab->tabuleiroJogo[coluna_inicial - 1][linha_inicial] == "\033[36m■ \033[97m") {
        tab->tabuleiroJogo[coluna_inicial - 1][linha_inicial] = tipo;
        tab->tabuleiroJogo[coluna_inicial][linha_inicial] = "  ";
        coluna_inicial = coluna_inicial - 1;
        ThisThread::sleep_for(500ms);
      }
    } else if (readX >= 61000) {
      if (tab->tabuleiroJogo[coluna_inicial + 1][linha_inicial] == "  " ||
          tab->tabuleiroJogo[coluna_inicial + 1][linha_inicial] == "\033[36m■ \033[97m") {
        tab->tabuleiroJogo[coluna_inicial + 1][linha_inicial] = tipo;
        tab->tabuleiroJogo[coluna_inicial][linha_inicial] = "  ";
        coluna_inicial = coluna_inicial + 1;
        ThisThread::sleep_for(500ms);
      }
    } else if (readY <= 500) {
      if (tab->tabuleiroJogo[coluna_inicial][linha_inicial + 1] == "  " ||
          tab->tabuleiroJogo[coluna_inicial][linha_inicial + 1] == "\033[36m■ \033[97m") {
        tab->tabuleiroJogo[coluna_inicial][linha_inicial + 1] = tipo;
        tab->tabuleiroJogo[coluna_inicial][linha_inicial] = "  ";
        linha_inicial = linha_inicial + 1;
        ThisThread::sleep_for(500ms);
      }
    } else if (readY >= 61000) {
      if (tab->tabuleiroJogo[coluna_inicial][linha_inicial - 1] == "  " ||
          tab->tabuleiroJogo[coluna_inicial][linha_inicial - 1] == "\033[36m■ \033[97m") {
        tab->tabuleiroJogo[coluna_inicial][linha_inicial - 1] = tipo;
        tab->tabuleiroJogo[coluna_inicial][linha_inicial] = "  ";
        linha_inicial = linha_inicial - 1;
        ThisThread::sleep_for(500ms);
      }
    }
  }
};

void Jogador::criarCasasAleatorias(Tabuleiro *tab) {
  srand(time(NULL));
  int randomNumber = rand() % 7;
  while (true) {

    if (tab->tabuleiroJogo[coordenadas_keys[randomNumber]]
                          [coordenadas_values[randomNumber]] == "  ") {
      tab->tabuleiroJogo[coordenadas_keys[randomNumber]]
                        [coordenadas_values[randomNumber]] = tipo;
      coluna_inicial = coordenadas_keys[randomNumber];
      linha_inicial = coordenadas_values[randomNumber];
      break;
    };
    randomNumber = rand() % 7;
  }
};