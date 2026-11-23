#include <stdio.h>

int ehPrimo(int n);

int main(void) {
    int numero;
    printf("Digite um inteiro: ");
    if (scanf("%d", &numero) != 1) return 1;
    if (ehPrimo(numero)) printf("%d e primo.\n", numero);
    else printf("%d nao e primo.\n", numero);

    printf("Primos de 1 ate 50:\n");
    for (int i = 1; i <= 50; i++) {
        if (ehPrimo(i)) printf("%d ", i);
    }
    printf("\n");
    return 0;
}

int ehPrimo(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= n / i; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}
