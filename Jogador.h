#ifndef JOGADORES_H
#define JOGADORES_H
#include "Tabuleiro.h"
#include "mbed.h"

class Jogador {
private:
  int coluna_inicial;
  int linha_inicial;
  AnalogIn cord_x;
  AnalogIn cord_y;
  int coordenadas_keys[8] = {12, 0, 0, 8, 33, 39, 39, 32};
  int coordenadas_values[8] = {0, 1, 34, 39, 39, 36, 2, 0};
  std::string tipo;

public:
  Jogador(AnalogIn cord_x, AnalogIn cord_y, std::string tipo);
  void mover_jogador(Tabuleiro *tab);
  void criarCasasAleatorias(Tabuleiro *tab);
  friend class Tabuleiro;
};
#endif // JOGADORES_H