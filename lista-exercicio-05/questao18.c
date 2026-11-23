#include <stdio.h>

long potencia(int base, int expoente);

int main(void) {
    int base, expoente;
    printf("Digite a base e o expoente: ");
    if (scanf("%d %d", &base, &expoente) != 2) return 1;
    if (expoente < 0) {
        printf("O expoente deve ser nao negativo.\n");
        return 1;
    }
    printf("Resultado: %ld\n", potencia(base, expoente));
    return 0;
}

long potencia(int base, int expoente) {
    // Caso base: qualquer base elevada a zero vale 1.
    if (expoente == 0) return 1;
    // Passo recursivo: base vezes a potencia com expoente menor.
    return (long)base * potencia(base, expoente - 1);
}
