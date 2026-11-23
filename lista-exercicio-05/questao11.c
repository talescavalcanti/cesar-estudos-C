#include <stdio.h>

int ehPar(int n);

int main(void) {
    int numero;
    printf("Digite um inteiro: ");
    if (scanf("%d", &numero) != 1) return 1;
    if (ehPar(numero)) printf("O numero e par.\n");
    else printf("O numero e impar.\n");
    return 0;
}

int ehPar(int n) {
    return n % 2 == 0;
}
