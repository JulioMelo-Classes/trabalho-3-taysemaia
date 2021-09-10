# LP1 Projeto 3 - Snaze

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

```bash
make
./build/Snaze arquivo-de-texto.txt com-rabo
```

## Avaliação CP1

### Snake/Pacman
O jogo deveria conter o modo snake/pacman. Em ambos os modos não é possível andar pra trás. No modo snake deve ser desenhado o corpo.

**Avaliação**

Vou considerar 10%, embora exista um parametro na linha de comando, não tem efeito visual no jogo uma vez que a parte básica de desenho não está feita.

### Render.ui
O jogo deveria desenhar a UI corretamente, mostrando ao menos as vidas, o nível e o score.

**Avaliação**

não implementado

### Render.mapa
O jogo deveria desenhar o mapa corretamente, com base no arquivo passado como argumento. Ok

**Avaliação**

ok

### Render.snake
O jogo deveria desenhar a snake corretamente.

**Avaliação**

não implementado

### Logic.colisão e Logic.comida
O jogo deve se comportar corretamente quando ocorre uma colisão com comida e com paredes.

**Avaliação**

não implementado

### Transição de mapas
O jogo deve ter transição de mapa uma vez que um mapa é terminado.

**Avaliação**

Não implementado.

### Interação com o usuário
O jogo deve perguntar ao usuário se quer continuar/reiniciar o nível/reiniciar o jogo a cada transição de mapa

**Avaliação**

Não implementado

### Classe Level ou similar
O software deve encapsular as funcionalidades do nível em uma classe.

**Avaliação**

Vou considerar 50% pois as outras estão todas com 0.

### Classe Player ou similar
O software deve encapsular as decisões do jogo em uma classe.

**Avaliação**

não implementado

### Classe Snake ou similar
O software deve encapsular as funcionalidades relacionadas à snake em uma classe. 

**Avaliação**

não implementado

## Comentários gerais CP1
- Acho que vocês podem focar em implementar o CP1 e as funcionalidades extra, que não tem a ver com a solução automática do labirinto do CP2.