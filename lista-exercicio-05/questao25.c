#include <stdio.h>

int mdc(int a, int b);
void simplifica(int num, int den);

int main(void) {
    int num, den;
    printf("Digite dois inteiros positivos (numerador e denominador): ");
    if (scanf("%d %d", &num, &den) != 2 || num <= 0 || den <= 0) {
        printf("Valores invalidos.\n");
        return 1;
    }
    printf("MDC: %d\n", mdc(num, den));
    simplifica(num, den);
    return 0;
}

int mdc(int a, int b) {
    if (b == 0) return a;
    return mdc(b, a % b);
}

void simplifica(int num, int den) {
    int divisor = mdc(num, den);
    printf("Fracao simplificada: %d/%d\n", num / divisor, den / divisor);
}
