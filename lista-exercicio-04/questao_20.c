#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, c, delta;
    printf("Digite a, b e c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("Erro: a deve ser diferente de zero.\n");
        return 1;
    }

    delta = b * b - 4 * a * c;

    if (delta < 0) {
        printf("A equação não possui raízes reais.\n");
    } else if (delta == 0) {
        printf("Raiz única: %.2f\n", -b / (2 * a));
    } else {
        printf("x1 = %.2f\n", (-b + sqrt(delta)) / (2 * a));
        printf("x2 = %.2f\n", (-b - sqrt(delta)) / (2 * a));
    }
    return 0;
}
