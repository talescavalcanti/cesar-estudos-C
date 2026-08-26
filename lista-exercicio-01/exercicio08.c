/*Questao 08 - Comportamento do programa e saida exata das sequencias de escape*/

/*
Saida esperada:
(uma linha em branco, gerada pelo primeiro \n)
    "Primeiro programa"   (com tabulacao antes das aspas, gerada pelo \t)
seguido do prompt gerado pelo system("PAUSE"): "Pressione uma tecla para continuar. . ."
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
printf("\n\t\"Primeiro programa\"");
system("PAUSE");
return 0;
}
