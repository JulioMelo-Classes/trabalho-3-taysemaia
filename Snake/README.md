# LP1 Projeto 3 - Snaze

## Sobre o jogo

Snake é um jogo que ficou conhecido por diversas versões cuja versão inicial começou com o jogo Blockade de 1976, sendo feitas várias imitações em vídeo-games e computadores. No fim dos anos 90 foi popularizado em celulares da Nokia que vinham com o jogo já incluso.
O jogador controla uma longa e fina criatura que se arrasta pela tela, coletando comida (ou algum outro item), não podendo colidir com seu próprio corpo ou as "paredes" que cercam a área de jogo. Cada vez que a serpente come um pedaço de comida, sua cauda cresce, aumentando a dificuldade do jogo. O usuário controla a direção da cabeça da serpente (para cima, para baixo, esquerda e direita) e seu corpo segue.

Nesta versão do jogo, a cobra não é controlada pelo usuário, ela precisa achar por si só o caminho até a comida com um limite de 5 vidas e ela está dentro de um labirinto.

## Compilando e executando o exemplo

No linux você pode compilar usando Makefile. Apenas faça clone do projeto, vá até a pasta Snaze e faça:

```bash
make
./build/Snaze arquivo-de-texto.txt modo-de-jogo
```

lembrando que existem dois modos de jogo:

*1. Com rabo*
*2. Sem rabo*

Logo, caso queira executar o modo sem rabo, digite:

```bash
make
./build/Snaze arquivo-de-texto.txt sem-rabo
```
já para o modo com rabo:
s
```bash
make
./build/Snaze arquivo-de-texto.txt com-rabo
```

## Integrantes do grupo:

* Tayse de Oliveira Maia
* Karolayne Belo