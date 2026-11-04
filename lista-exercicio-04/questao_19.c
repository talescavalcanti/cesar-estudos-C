#include <stdio.h>

int main(void) {
    float a, b, c;
    printf("Digite os três lados: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0 ||
        a >= b + c || b >= a + c || c >= a + b) {
        printf("Erro: Os lados fornecidos não formam um triângulo!\n");
    } else if (a == b && b == c) {
        printf("Equilátero\n");
    } else if (a == b || a == c || b == c) {
        printf("Isósceles\n");
    } else {
        printf("Escaleno\n");
    }
    return 0;
}
