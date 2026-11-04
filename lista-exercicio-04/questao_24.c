#include <stdio.h>

int main(void) {
    int a, b, c;
    printf("Digite os três ângulos: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0 || a + b + c != 180) {
        printf("Triângulo inválido.\n");
    } else if (a == 90 || b == 90 || c == 90) {
        printf("Retângulo\n");
    } else if (a > 90 || b > 90 || c > 90) {
        printf("Obtusângulo\n");
    } else {
        printf("Acutângulo\n");
    }
    return 0;
}
