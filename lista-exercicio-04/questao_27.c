#include <stdio.h>

int main(void) {
    int horas;
    float total;

    printf("Horas de permanência: ");
    scanf("%d", &horas);

    if (horas < 0) {
        printf("Tempo inválido.\n");
        return 1;
    }

    if (horas <= 2) {
        total = horas * 2.0f;
    } else if (horas <= 4) {
        total = 4.0f + (horas - 2) * 2.5f;
    } else {
        total = 9.0f + (horas - 4) * 3.0f;
    }

    printf("Tempo: %d hora(s)\n", horas);
    printf("Total: R$ %.2f\n", total);
    return 0;
}
