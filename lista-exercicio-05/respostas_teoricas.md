# Lista de Exercícios – Capítulo 5: Funções

## Parte I — Questões teóricas e analíticas

### Questão 01 — Anatomia de uma função

**a)** O protótipo é `float celsius(float);`, declarado antes de `main()`: informa o tipo de retorno e o parâmetro esperado. A chamada é `c = celsius(f);`, dentro de `main()`: executa a função passando `f` e guarda o resultado em `c`. A definição é `float celsius(float fahr) { ... }`, depois de `main()`: contém o cálculo realizado.

**b)** O protótipo permite ao compilador conferir o número e os tipos dos argumentos e conhecer o tipo de retorno antes da chamada. Sem ele, com a definição somente após `main()`, o compilador não conheceria a assinatura no momento da chamada. Em C moderno (C99 em diante), a chamada sem declaração prévia viola as regras da linguagem e deve gerar diagnóstico de compilação.

**c)** O tipo de `celsius()` é `float`, porque ela devolve um valor `float`. Os parâmetros indicam os dados recebidos; o tipo declarado antes do nome indica o tipo do resultado.

### Questão 02 — O comando `return`

**a)** Cada execução de `return` devolve um único valor. O programador tentou devolver a soma e a média. Porém, em `return soma, media;`, a vírgula funciona como operador vírgula: avalia as duas expressões e devolve apenas a última (`media`). Além disso, no trecho original, a divisão entre inteiros descarta a parte decimal.

**b)** O `return;` encerra antecipadamente a função `void` quando `erro < 0`, impedindo a mensagem de processamento normal. Ele não é obrigatório no final de uma função `void`, pois o término do corpo já encerra a execução.

**c)** As funções solicitadas foram implementadas em **`questao02.c`**: `calcular()` retorna somente a média e `soma()` retorna somente a soma. Um `return` só devolve um valor por chamada; para obter os dois resultados com retornos simples e separados, chamamos duas funções. Também existem outras técnicas em C, como estruturas e parâmetros por ponteiro.

### Questão 03 — Funções `void`, parâmetros e assinaturas

**a)**

- `exibe_mensagem(char* msg)`: recebe um parâmetro (`char*`) e não retorna valor (`void`).
- `obter_codigo(void)`: não recebe parâmetros e retorna um `int`.
- `limpar_tela(void)`: não recebe parâmetros e não retorna valor (`void`).

**b)** Uma função com retorno produz um resultado que pode ser usado em expressões, como uma função que calcula a média. Uma função `void` executa uma ação sem devolver valor, como exibir um menu.

**c)** Não. `limpar_tela()` tem retorno `void`, então não produz um valor que possa ser atribuído a `x`.

### Questão 04 — Recursão e pilha de execução

**a)** O caso base é `n == 0`, quando a função retorna `1`. O passo recursivo é multiplicar `n` por `fatorial(n - 1)`. Sem o caso base, as chamadas continuariam sem parada definida, podendo esgotar a pilha de execução.

**b)** Empilhamento de `fatorial(4)`:

1. `fatorial(4)` depende de `4 × fatorial(3)`.
2. `fatorial(3)` depende de `3 × fatorial(2)`.
3. `fatorial(2)` depende de `2 × fatorial(1)`.
4. `fatorial(1)` depende de `1 × fatorial(0)`.
5. `fatorial(0)` retorna `1` (caso base).

Desempilhamento:

1. `fatorial(0) = 1`.
2. `fatorial(1) = 1 × 1 = 1`.
3. `fatorial(2) = 2 × 1 = 2`.
4. `fatorial(3) = 3 × 2 = 6`.
5. `fatorial(4) = 4 × 6 = 24`.

**c)** Cada chamada ocupa um novo quadro na pilha, contendo seus parâmetros, informações de retorno e dados locais necessários. Ao terminar, esse quadro é retirado. Sem uma condição de parada, a pilha pode crescer até causar estouro de pilha (*stack overflow*).

### Questão 05 — `#define` e macros

**a)** A primeira impressão é **25**, pois `SQR(2+3)` se expande para `((2+3)*(2+3))`. A segunda é **8**, pois `DOBRO(2+3)` se expande para `2+3*2`, e a multiplicação é feita antes da adição. Os parênteses de proteção evitam esse erro de precedência.

**b)** `#define` é uma diretiva de pré-processamento terminada no fim da linha, e não uma instrução C terminada com ponto e vírgula. Identificadores de macros em maiúsculas são uma convenção para diferenciá-los de variáveis e funções.

**c)** Em `#define PRN (n) ...`, o espaço antes de `(n)` faz `PRN` ser uma macro sem parâmetros, em vez de uma macro com argumentos. A forma correta é `#define PRN(n) printf("%d", (n))`. Uma macro realiza substituição de texto no pré-processamento e pode avaliar um argumento mais de uma vez; uma função comum recebe argumentos tipados e executa a chamada em tempo de execução.

### Questão 06 — Diretivas de pré-processamento

**a)** `#include <stdio.h>` procura um cabeçalho da biblioteca nos diretórios configurados para cabeçalhos do sistema. `#include "areas.h"` procura um cabeçalho do projeto, normalmente começando pelo diretório do arquivo atual e depois pelos caminhos configurados.

**b)** `#undef SOMA` remove a definição da macro, impedindo sua expansão a partir desse ponto. A diretiva `#undef` recebe somente o nome da macro, sem lista de parâmetros; por isso `#undef SOMA(x,y)` está incorreta.

**c)** Se `DEBUG` não estiver definido, a mensagem selecionada será **“Modo normal”**. A escolha ocorre no pré-processamento, antes da execução: o ramo não selecionado e as próprias diretivas não chegam como instruções ao programa compilado. As chamadas `printf` mostradas no trecho precisam estar dentro de uma função para formar um programa C válido.
