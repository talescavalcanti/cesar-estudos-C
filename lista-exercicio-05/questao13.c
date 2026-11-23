#include <stdio.h>

float soma(float a, float b);
float subtrai(float a, float b);
float multiplica(float a, float b);
float divide(float a, float b);

int main(void) {
    int opcao;
    float a, b, resultado;

    printf("1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n");
    printf("Opcao: ");
    if (scanf("%d", &opcao) != 1) return 1;
    if (opcao < 1 || opcao > 4) {
        printf("Opcao invalida.\n");
        return 1;
    }

    printf("Digite dois numeros: ");
    if (scanf("%f %f", &a, &b) != 2) return 1;
    if (opcao == 4 && b == 0.0f) {
        printf("Nao e possivel dividir por zero.\n");
        return 1;
    }

    switch (opcao) {
        case 1: resultado = soma(a, b); break;
        case 2: resultado = subtrai(a, b); break;
        case 3: resultado = multiplica(a, b); break;
        default: resultado = divide(a, b); break;
    }
    printf("Resultado: %.2f\n", resultado);
    return 0;
}

float soma(float a, float b) { return a + b; }
float subtrai(float a, float b) { return a - b; }
float multiplica(float a, float b) { return a * b; }
float divide(float a, float b) { return a / b; }
