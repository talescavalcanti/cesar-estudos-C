#include <stdio.h>

float celsiusParaFahrenheit(float c);
float celsiusParaKelvin(float c);
float fahrenheitParaCelsius(float f);
float kelvinParaCelsius(float k);

int main(void) {
    int opcao;
    float temperatura, resultado;

    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Celsius para Kelvin\n");
    printf("3 - Fahrenheit para Celsius\n");
    printf("4 - Kelvin para Celsius\n");
    printf("Opcao: ");
    if (scanf("%d", &opcao) != 1 || opcao < 1 || opcao > 4) {
        printf("Opcao invalida.\n");
        return 1;
    }
    printf("Temperatura: ");
    if (scanf("%f", &temperatura) != 1) return 1;
    if (opcao == 4 && temperatura < 0.0f) {
        printf("Kelvin nao pode ser negativo.\n");
        return 1;
    }

    switch (opcao) {
        case 1: resultado = celsiusParaFahrenheit(temperatura); break;
        case 2: resultado = celsiusParaKelvin(temperatura); break;
        case 3: resultado = fahrenheitParaCelsius(temperatura); break;
        default: resultado = kelvinParaCelsius(temperatura); break;
    }
    printf("Temperatura convertida: %.2f\n", resultado);
    return 0;
}

float celsiusParaFahrenheit(float c) { return c * 9.0f / 5.0f + 32.0f; }
float celsiusParaKelvin(float c) { return c + 273.15f; }
float fahrenheitParaCelsius(float f) { return (f - 32.0f) * 5.0f / 9.0f; }
float kelvinParaCelsius(float k) { return k - 273.15f; }
