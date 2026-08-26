/*Questao 09 - %c com constantes de caractere*/

/*
Explicacao:
'\n', '\t' e '\"' sao constantes de caractere: o compilador as converte para o codigo
ASCII correspondente (10, 9 e 34) e passa esse inteiro para o printf. O %c le esse
inteiro e imprime o caractere associado a ele. Por isso a 1a chamada imprime uma
quebra de linha, uma tabulacao e uma aspas, seguido de "Primeiro programa".

Saida esperada da 1a chamada:
(linha em branco)
    "Primeiro programa"

A 2a chamada, printf("%c", "\""), passa uma STRING ("\"" e um char* que aponta para
os bytes '"' e '\0') onde o %c espera um int/char. Isso e um erro de tipo: o compilador
emite warning (format '%c' expects type 'int', but argument 2 has type 'char *') e o
comportamento e indefinido/dependente de implementacao - normalmente imprime o byte
menos significativo do endereco do ponteiro, um caractere "lixo" sem relacao com a aspas.
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
printf("%c%c%cPrimeiro programa", '\n', '\t', '\"');
printf("%c", "\"");
system("PAUSE");
return 0;
}
