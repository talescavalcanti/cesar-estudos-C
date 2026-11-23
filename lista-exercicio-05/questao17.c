#include <stdio.h>
#include <limits.h>

long fatorialIterativo(int n);
long fatorialRecursivo(int n);

int main(void) {
    int n;
    long iterativo, recursivo, verificacao = 1;

    printf("Digite um inteiro nao negativo: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Valor invalido.\n");
        return 1;
    }

    // Evita resultados incorretos por estouro do tipo long.
    for (int i = 2; i <= n; i++) {
        if (verificacao > LONG_MAX / i) {
            printf("Fatorial excede o limite de long.\n");
            return 1;
        }
        verificacao *= i;
    }

    iterativo = fatorialIterativo(n);
    recursivo = fatorialRecursivo(n);
    printf("Iterativo: %ld\n", iterativo);
    printf("Recursivo: %ld\n", recursivo);
    printf("Coincidem: %s\n", iterativo == recursivo ? "Sim" : "Nao");
    return 0;
}

long fatorialIterativo(int n) {
    long resultado = 1;
    for (int i = 2; i <= n; i++) resultado *= i;
    return resultado;
}

long fatorialRecursivo(int n) {
    if (n == 0) return 1;
    return n * fatorialRecursivo(n - 1);
}
