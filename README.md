# JogoDoLabirinto
 É um jogo de Labirinto criado em C++ utilizando a placa mbed e dois joysticks para controlar os movimentos dos jogadores. Possui dois jogadores que iniciam em posições aleatórias e o objetivo é alcançar o centro do labirinto para vencer.

## Membros
- [@isabel-pereira](https://github.com/Isabel-Pereira)
- [@nayane-jacyara](https://github.com/Nayane-Jacyara)
- [@danielcalado](https://github.com/DanielCalado)

## Estrutura do Código

### Tabuleiro (Tabuleiro.h e Tabuleiro.cpp)
- Responsável por criar e gerenciar o tabuleiro do jogo.
- Métodos para montar o tabuleiro, imprimir e verificar o vencedor.

### Jogador (Jogador.h e Jogador.cpp)
- Representa um jogador no jogo.
- Métodos para mover o jogador no tabuleiro e criar casas aleatórias para os jogadores.

### Main (código principal)
- Inicializa o jogo, cria os objetos do jogador, gerencia threads para o movimento dos jogadores e controla o fluxo do jogo.

## Funcionamento do Jogo
### Tabuleiro
- É um array bidimensional que representa o labirinto.
- montarTabuleiro() preenche o tabuleiro com as paredes e áreas vazias.
- imprimirTabuleiro() exibe o tabuleiro no console.
- verificarVencedor() checa se um jogador atingiu uma posição específica e exibe uma mensagem de vitória.

### Jogador
- Controlado por sensores analógicos (cord_x e cord_y).
- mover_jogador() move o jogador no tabuleiro com base na leitura dos sensores.
- criarCasasAleatorias() gera posições aleatórias para os jogadores no início do jogo.

### Fluxo do Jogo
- O jogo é iniciado com a configuração do tabuleiro e a criação dos jogadores.
- Threads são usadas para movimentar os jogadores de forma assíncrona.
- O tabuleiro é continuamente atualizado e exibido no console.
- Quando um jogador atinge uma posição específica, uma mensagem de vitória é exibida e o jogo reinicia.

## Tecnologias Utilizadas
Ultiliza microcontroladores, usando a linguagem C++ para programação. Ele faz uso de threads para controlar o movimento dos jogadores de forma assíncrona e manipula sensores joysticks para controlar o movimento dos jogadores no labirinto.

### Imagem referencial para criação do jogo
![Imagem](https://github.com/DanielCalado/JogoDoLabirinto/blob/main/resources/Imagem2.png)

### Vídeo do Jogo
[Assista ao vídeo de demonstração](https://drive.google.com/file/d/1PvwO-uv3qiY_25cmIi5Kd6BbxRHZ8oih/view?usp=sharing)

