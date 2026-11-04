#include <stdio.h>
#include <math.h>

int main(void) {
    char operacao;
    double a, b, resultado;

    printf("Operação (+, -, *, /, ^): ");
    scanf(" %c", &operacao);
    printf("Digite dois números: ");
    scanf("%lf %lf", &a, &b);

    switch (operacao) {
        case '+': resultado = a + b; break;
        case '-': resultado = a - b; break;
        case '*': resultado = a * b; break;
        case '/':
            if (b == 0) {
                printf("Erro: divisão por zero.\n");
                return 1;
            }
            resultado = a / b;
            break;
        case '^': resultado = pow(a, b); break;
        default:
            printf("Operação inválida.\n");
            return 1;
    }

    printf("Resultado: %.2f\n", resultado);
    return 0;
}
