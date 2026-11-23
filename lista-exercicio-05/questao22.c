#include <stdio.h>
#include "areas.h"

int main(void) {
    float raio, baseRet, altRet, baseTri, altTri;
    printf("Raio do circulo: ");
    if (scanf("%f", &raio) != 1 || raio < 0) return 1;

    printf("Base e altura do retangulo: ");
    if (scanf("%f %f", &baseRet, &altRet) != 2 || baseRet < 0 || altRet < 0) return 1;

    printf("Base e altura do triangulo: ");
    if (scanf("%f %f", &baseTri, &altTri) != 2 || baseTri < 0 || altTri < 0) return 1;

    printf("Area do circulo: %.2f\n", A_CIRC(raio));
    printf("Area do retangulo: %.2f\n", A_RET(baseRet, altRet));
    printf("Area do triangulo: %.2f\n", A_TRI(baseTri, altTri));
    return 0;
}
