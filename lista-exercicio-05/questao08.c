#include <stdio.h>

float celsius(float fahr);

int main(void) {
    float fahr;
    printf("Temperatura em Fahrenheit: ");
    if (scanf("%f", &fahr) != 1) return 1;
    printf("Celsius: %.2f\n", celsius(fahr));
    return 0;
}

float celsius(float fahr) {
    return (fahr - 32.0f) * 5.0f / 9.0f;
}
