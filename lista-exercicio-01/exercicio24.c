/*Questao 24 - Tabela de notas escolares alinhada*/

#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    /* MÁRIO e SÉRGIO usam largura 11 (nao 10): cada um tem 1 letra acentuada,
       que ocupa 2 bytes em UTF-8 mas conta como 1 caractere visivel - sem o
       ajuste, %-10s (que conta bytes) desalinharia essas duas linhas. */
    printf("%-10s%s\n", "ALUNO(A)", "NOTA");
    printf("%-10s%s\n", "=========", "=====");
    printf("%-10s%s\n", "ALINE", "9.0");
    printf("%-11s%s\n", "MÁRIO", "DEZ");
    printf("%-11s%s\n", "SÉRGIO", "4.5");
    printf("%-10s%s\n", "SHIRLEY", "7.0");

    system("PAUSE");
    return 0;
}
