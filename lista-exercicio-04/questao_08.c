#include <stdio.h>

int main(void) {
    int ano;
    printf("Digite um ano: ");
    scanf("%d", &ano);

    if (ano <= 0) {
        printf("Ano inválido.\n");
    } else if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)) {
        printf("Ano bissexto.\n");
    } else {
        printf("Ano não bissexto.\n");
    }
    return 0;
}
