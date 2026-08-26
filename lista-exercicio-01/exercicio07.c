#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    
    printf("=== a) ===\n");
    printf("\n\tBom dia! Shirley.");

    
    printf("\n=== b) ===\n");
    printf("Você já tomou café? \n");

    
    printf("=== c) ===\n");
    printf("\n\nA solução não existe!\nNão insista.");

    
    printf("\n=== d) ===\n");
    printf("Duas\tlinhas\tde\tsaída\nou\tuma?");

    
    printf("\n=== e) ===\n");
    printf("%s\n%s\n%s\n", "um", "dois", "três");

    system("PAUSE");
    return 0;
}
