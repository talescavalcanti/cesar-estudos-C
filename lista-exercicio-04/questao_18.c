#include <stdio.h>

int main(void) {
    int opcao;
    float entrada, resultado;

    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Celsius para Kelvin\n");
    printf("3 - Fahrenheit para Celsius\n");
    printf("4 - Kelvin para Celsius\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    if (opcao < 1 || opcao > 4) {
        printf("Opção inválida.\n");
        return 1;
    }

    printf("Temperatura: ");
    scanf("%f", &entrada);

    switch (opcao) {
        case 1: resultado = entrada * 1.8f + 32; break;
        case 2: resultado = entrada + 273.15f; break;
        case 3: resultado = (entrada - 32) / 1.8f; break;
        case 4: resultado = entrada - 273.15f; break;
        default: return 1;
    }

    printf("Temperatura convertida: %.2f\n", resultado);
    return 0;
}
