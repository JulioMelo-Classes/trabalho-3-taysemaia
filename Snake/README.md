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

# Avaliação CP2

## FindSolution.pacman

O método find soluiton ou similar deve ser capaz de encontrar o conjunto de comandos que levam da posição atual da cobrinha até a posição da comida no modo pacman.

**Avaiação**

não implementado

## FindSolution.snake

O método find soluiton ou similar deve ser capaz de encontrar o conjunto de comandos que levam da posição atual da cobrinha até a posição da comida no modo snake.

**Avaliação**

não implementado

## Random start

Deveria ser implementado na execução do programa um comando que permita que a posição inicial seja sorteada aleatoriamente. A posição inicial precisa ser válida e não deve causar a cobrinha/pacman iniciar em uma posição encurralada.

**Avaliação**

70% não tem validação da posição!

## Level Loop

Deveria se implementado na execução do programa um comando que permite que os níveis fiquem se repetindo infinitamente, com a transição de mapas indo do primeiro nível até o último nível e voltando para o primeiro, de forma que seja mantida a contagem de pontos bem como a contagem de nível.

**Avaliação**

não implementado

## Organização / Compilação automatizada / Casos de Teste

Para a entrega final a organização do código em scr/data/include e compilação automatizada de alguma forma deve ser feita.

**Avaliação**

70% não foram feitos casos de teste

## Documentação do código / Readme / Documentação de Casos de Teste

**Avaliação**

70% não foram documentados os casos de teste
