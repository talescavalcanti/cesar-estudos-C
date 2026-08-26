/*Questao 21 - Tres versoes independentes para a mesma saida*/

#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    /* Versao 1: uma unica chamada de printf() */
    printf("=== Versao 1 (um unico printf) ===\n");
    printf("Treinamento em programação.\nLinguagem C.\n");

    /* Versao 2: exatamente duas instrucoes de impressao independentes */
    printf("\n=== Versao 2 (dois printf) ===\n");
    printf("Treinamento em programação.\n");
    printf("Linguagem C.\n");

    /* Versao 3: frases emolduradas com caracteres graficos de caixa */
    printf("\n=== Versao 3 (moldura) ===\n");
    printf("┌─────────────────────────────┐\n");
    printf("│ Treinamento em programação.  │\n");
    printf("│ Linguagem C.                 │\n");
    printf("└─────────────────────────────┘\n");

    system("PAUSE");
    return 0;
}
