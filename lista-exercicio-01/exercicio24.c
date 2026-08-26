/*Questao 24 - Tabela de notas escolares alinhada*/

#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    printf("%-10s%s\n", "ALUNO(A)", "NOTA");
    printf("%-10s%s\n", "=========", "=====");
    printf("%-10s%s\n", "ALINE", "9.0");
    printf("%-11s%s\n", "MÁRIO", "DEZ");
    printf("%-11s%s\n", "SÉRGIO", "4.5");
    printf("%-10s%s\n", "SHIRLEY", "7.0");

    system("PAUSE");
    return 0;
}
