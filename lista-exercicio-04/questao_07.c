#include <stdio.h>
#include <math.h>

int main(void) {
    double x;
    printf("Digite um número real: ");
    scanf("%lf", &x);

    if (x >= 0) {
        printf("Raiz quadrada: %.2f\n", sqrt(x));
    } else {
        printf("Quadrado: %.2f\n", x * x);
    }
    return 0;
}
