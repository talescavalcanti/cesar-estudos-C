#include <stdio.h>

int main(void) {
    float preco, imposto;
    int estado;

    printf("Preço do produto: ");
    scanf("%f", &preco);
    printf("Estado (1-MG, 2-SP, 3-RJ, 4-MS): ");
    scanf("%d", &estado);

    if (preco < 0) {
        printf("Preço inválido.\n");
        return 1;
    }

    switch (estado) {
        case 1: imposto = 0.07f; break;
        case 2: imposto = 0.12f; break;
        case 3: imposto = 0.15f; break;
        case 4: imposto = 0.08f; break;
        default:
            printf("Código de estado inválido.\n");
            return 1;
    }

    printf("Preço final: R$ %.2f\n", preco * (1 + imposto));
    return 0;
}
