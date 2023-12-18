#ifndef TABULEIRO_H
#define TABULEIRO_H
#include "mbed.h"
#include <string>

class Tabuleiro {
private:
  int coordenadas_keys[8] = {12, 0, 0, 8, 33, 39, 39, 32};
  int coordenadas_values[8] = {0, 1, 34, 39, 39, 36, 2, 0};

public:
  Tabuleiro();
  std::string tabuleiroJogo[40][40];
  void montarTabuleiro();
  void imprimirTabuleiro();
  void verificarVencedor();
  bool status = true;
  friend class Jogador;
};

#endif