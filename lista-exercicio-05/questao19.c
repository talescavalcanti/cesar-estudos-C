#include <stdio.h>

void contagem(int n);
void contagemCrescente(int n);

int main(void) {
    int n;
    printf("Digite um inteiro positivo: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Numero invalido.\n");
        return 1;
    }
    printf("Regressiva:\n");
    contagem(n);
    printf("Crescente:\n");
    contagemCrescente(n);
    return 0;
}

void contagem(int n) {
    if (n == 0) {
        printf("Fogo!\n");
        return;
    }
    // Imprime antes da recursao: n, n-1, ..., 1.
    printf("%d\n", n);
    contagem(n - 1);
}

void contagemCrescente(int n) {
    if (n == 0) return;
    // Imprime depois da recursao: 1, 2, ..., n.
    contagemCrescente(n - 1);
    printf("%d\n", n);
}
