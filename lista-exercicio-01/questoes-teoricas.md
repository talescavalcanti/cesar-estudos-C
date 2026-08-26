# Lista de Exercícios 01 — Questões Teóricas (10 a 17)

## Questão 10 — Case sensitive

**Resposta: b) Verdadeiro** (a linguagem C diferencia rigorosamente letras maiúsculas de minúsculas).

Na prática, isso significa que o compilador trata identificadores com grafia diferente como
nomes **diferentes**, mesmo que as letras sejam "as mesmas" visualmente. Logo, `peso`, `Peso`
e `PESO` são **3 identificadores distintos** e representam **3 variáveis diferentes** na
memória, cada uma com seu próprio endereço e valor — não há conflito nem sobrescrita entre elas.

## Questão 11 — Classificação de constantes

| Constante | Classificação | Tipo Base em C |
|---|---|---|
| `\r` | Sequência de escape (constante de caractere) | `char` |
| `2130` | Constante inteira decimal | `int` |
| `-123` | Constante inteira decimal (negativa) | `int` |
| `33.28` | Constante de ponto flutuante decimal | `double` |
| `0XFA` | Constante inteira hexadecimal | `int` |
| `0101` | Constante inteira octal | `int` |
| `2.0e30` | Constante de ponto flutuante (notação científica) | `double` |
| `\xDC` | Sequência de escape hexadecimal (constante de caractere) | `char` |
| `'\"'` | Constante de caractere | `char` |
| `'\\'` | Constante de caractere | `char` |
| `'F'` | Constante de caractere | `char` |
| `0` | Constante inteira decimal | `int` |
| `'\0'` | Constante de caractere (caractere nulo) | `char` |
| `"F"` | Constante string | `char[]` (array de char) |
| `-4567.89` | Constante de ponto flutuante decimal (negativa) | `double` |

## Questão 12 — Análise de declarações de variáveis

| Instrução | Status | Justificativa |
|---|---|---|
| a) `int a;` | Correto | Declaração válida de inteiro. |
| b) `float b;` | Correto | Declaração válida de ponto flutuante. |
| c) `double float c;` | **Incorreto** | `double` e `float` são especificadores de tipo base mutuamente exclusivos; não podem ser combinados na mesma declaração. |
| d) `unsigned char d;` | Correto | `unsigned` é um modificador válido para `char`. |
| e) `unsigned e;` | Correto | Equivale a `unsigned int e;` (o `int` fica implícito). |
| f) `long float f;` | **Incorreto** | `long` só modifica `int` ou `double` (`long int`, `long double`); a combinação `long float` não existe em C. |
| g) `long g;` | Correto | Equivale a `long int g;`. |
| h) `long double h;` | Correto | Declaração válida de ponto flutuante estendido. |

## Questão 13 — O que são arquivos de inclusão (.h)

**Resposta: c)** São arquivos de texto ASCII padrão contendo protótipos de funções,
definições de constantes, macros e tipos.

## Questão 14 — Papel do `#include <stdio.h>`

**Resposta: a)** Instruir o compilador a carregar as definições das funções da biblioteca
padrão antes de compilar o código-fonte.

## Questão 15 — Classificação da diretiva `#include`

**Resposta: c)** Uma diretiva especial para o pré-processador C, executada antes da compilação.

## Questão 16 — Quem interpreta as diretivas `#`

**Resposta: c)** Pré-processador (fase do compilador que altera o programa-fonte antes da
compilação propriamente dita).

## Questão 17 — Flexibilidade de espaçamento do compilador C

**a), b) e c) estão sintaticamente corretas.** O compilador C ignora espaços em branco extras
entre tokens (fora de literais de string), então variar o espaçamento ao redor dos parênteses
não muda o significado do programa — é isso que essas variações demonstram.

**d) `printf "Primeiro programa" ;` está incorreta.** Falta a chamada de função com parênteses:
`printf` precisa ser invocado como `printf(argumentos);`; sem os parênteses isso não é uma
chamada de função válida e gera erro de compilação.
