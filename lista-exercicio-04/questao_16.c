#include <stdio.h>

int main(void) {
    float distancia, litros, consumo;
    printf("Distância percorrida (km): ");
    scanf("%f", &distancia);
    printf("Litros consumidos: ");
    scanf("%f", &litros);

    if (distancia < 0 || litros <= 0) {
        printf("Valores inválidos.\n");
        return 1;
    }

    consumo = distancia / litros;
    printf("Consumo: %.2f km/l\n", consumo);

    if (consumo < 8) {
        printf("Venda o carro!\n");
    } else if (consumo <= 14) {
        printf("Econômico!\n");
    } else {
        printf("Super econômico!\n");
    }
    return 0;
}
