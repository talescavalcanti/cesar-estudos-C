#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    printf("=== Versao 1 (um unico printf) ===\n");
    printf("Treinamento em programação.\nLinguagem C.\n");

    printf("\n=== Versao 2 (dois printf) ===\n");
    printf("Treinamento em programação.\n");
    printf("Linguagem C.\n");

    printf("\n=== Versao 3 (moldura) ===\n");
    printf("┌─────────────────────────────┐\n");
    printf("│ Treinamento em programação.  │\n");
    printf("│ Linguagem C.                 │\n");
    printf("└─────────────────────────────┘\n");

    system("PAUSE");
    return 0;
}
