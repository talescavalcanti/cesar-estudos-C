#include <stdio.h>

long fibonacci(int n);

int main(void) {
    int quantidade;
    printf("Quantidade de termos (1 a 40): ");
    if (scanf("%d", &quantidade) != 1 || quantidade < 1 || quantidade > 40) {
        printf("Quantidade invalida.\n");
        return 1;
    }

    for (int i = 0; i < quantidade; i++) {
        printf("%ld ", fibonacci(i));
    }
    printf("\n");
    return 0;
}

long fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    // A recursao recalcula os mesmos termos muitas vezes;
    // por isso fica lenta para valores grandes de n.
    return fibonacci(n - 1) + fibonacci(n - 2);
}
