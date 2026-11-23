#include <stdio.h>

int somaDigitos(int n);

int main(void) {
    int numero;
    printf("Digite um inteiro positivo: ");
    if (scanf("%d", &numero) != 1 || numero <= 0) {
        printf("Numero invalido.\n");
        return 1;
    }
    printf("Soma dos digitos: %d\n", somaDigitos(numero));
    return 0;
}

int somaDigitos(int n) {
    // Caso base: um numero de um digito ja e a propria soma.
    if (n < 10) return n;
    // Passo recursivo: ultimo digito + soma dos anteriores.
    return n % 10 + somaDigitos(n / 10);
}
