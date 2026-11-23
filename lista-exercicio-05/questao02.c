#include <stdio.h>

float calcular(int a, int b, int c);
int soma(int a, int b, int c);

int main(void) {
    int a, b, c;
    printf("Digite tres inteiros: ");
    if (scanf("%d %d %d", &a, &b, &c) != 3) return 1;
    printf("Soma: %d\n", soma(a, b, c));
    printf("Media: %.2f\n", calcular(a, b, c));
    return 0;
}

float calcular(int a, int b, int c) {
    return (a + b + c) / 3.0f;
}

int soma(int a, int b, int c) {
    return a + b + c;
}
