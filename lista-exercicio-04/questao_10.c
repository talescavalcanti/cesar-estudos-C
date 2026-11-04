#include <stdio.h>

int main(void) {
    int numero;
    printf("Digite um inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("Par\n");
    } else {
        printf("Ímpar\n");
    }

    if (numero > 0) {
        printf("Positivo\n");
    } else if (numero < 0) {
        printf("Negativo\n");
    } else {
        printf("Zero\n");
    }
    return 0;
}
