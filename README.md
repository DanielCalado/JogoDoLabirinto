# JogoDoLabirinto
Estrutura do Código:
O código está estruturado em três classes principais:

Tabuleiro (Tabuleiro.h e Tabuleiro.cpp):

Responsável por criar e gerenciar o tabuleiro do jogo.
Possui métodos para montar o tabuleiro, imprimir e verificar o vencedor.
Jogador (Jogador.h e Jogador.cpp):

Representa um jogador no jogo.
Tem métodos para mover o jogador no tabuleiro e criar casas aleatórias para os jogadores.
Main (código principal):

Inicializa o jogo, cria os objetos do jogador, gerencia threads para o movimento dos jogadores e controla o fluxo do jogo.
Funcionamento do Jogo:
Tabuleiro:

É um array bidimensional que representa o labirinto.
A função montarTabuleiro() preenche o tabuleiro com as paredes e áreas vazias.
imprimirTabuleiro() exibe o tabuleiro no console.
verificarVencedor() checa se um jogador atingiu uma posição específica e exibe uma mensagem de vitória.
Jogador:

É controlado por sensores analógicos (cord_x e cord_y).
mover_jogador() move o jogador no tabuleiro com base na leitura dos sensores.
criarCasasAleatorias() gera posições aleatórias para os jogadores no início do jogo.
Fluxo do Jogo:

O jogo é iniciado com a configuração do tabuleiro e a criação dos jogadores.
Threads são usadas para movimentar os jogadores de forma assíncrona.
O tabuleiro é continuamente atualizado e exibido no console.
Quando um jogador atinge uma posição específica, uma mensagem de vitória é exibida e o jogo reinicia.
Tecnologias Utilizadas:
O código parece estar baseado na plataforma mbed para microcontroladores, utilizando a linguagem C++ para programação. Ele faz uso de threads para controlar o movimento dos jogadores de forma assíncrona e manipula sensores analógicos para controlar o movimento dos jogadores no labirinto.

### Membros
[@isabel-pereira](https://github.com/Isabel-Pereira)

[@nayane-jacyara](https://github.com/Nayane-Jacyara)

[@danielcalado](https://github.com/DanielCalado)

### Imagem referências para criação do jogo.
<img align="center" style="margin-bottom:100px" width=100% src="https://github.com/DanielCalado/JogoDoLabirinto/blob/main/resources/Imagem2.png" />

### Video do jogo.
[Assista ao vídeo de demonstração](https://drive.google.com/file/d/1PvwO-uv3qiY_25cmIi5Kd6BbxRHZ8oih/view?usp=sharing)


