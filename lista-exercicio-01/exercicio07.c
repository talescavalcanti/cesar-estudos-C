/*Questao 07 - Saida exata de instrucoes printf() independentes*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    /* a) Saida esperada: quebra de linha, tabulacao, "Bom dia! Shirley." */
    printf("=== a) ===\n");
    printf("\n\tBom dia! Shirley.");

    /* b) Saida esperada: "Você já tomou café? " seguido de quebra de linha */
    printf("\n=== b) ===\n");
    printf("Você já tomou café? \n");

    /* c) Saida esperada: duas linhas em branco, "A solução não existe!", quebra de linha, "Não insista." */
    printf("=== c) ===\n");
    printf("\n\nA solução não existe!\nNão insista.");

    /* d) Saida esperada: "Duas  linhas  de  saída" (tabulado), quebra de linha, "ou  uma?" */
    printf("\n=== d) ===\n");
    printf("Duas\tlinhas\tde\tsaída\nou\tuma?");

    /* e) Saida esperada: "um", quebra de linha, "dois", quebra de linha, "três", quebra de linha */
    printf("\n=== e) ===\n");
    printf("%s\n%s\n%s\n", "um", "dois", "três");

    system("PAUSE");
    return 0;
}
