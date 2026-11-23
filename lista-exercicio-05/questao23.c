#include <stdio.h>

#define DOBRO(x) x*2

int dobro(int x);

int main(void) {
    // Sem parenteses: DOBRO(2+3) vira 2+3*2, resultando em 8.
    printf("Macro original: %d\n", DOBRO(2+3));
    // Na funcao, 2+3 e avaliado antes da chamada, resultando em 10.
    printf("Funcao: %d\n", dobro(2+3));

    #undef DOBRO
    #define DOBRO(x) ((x) * 2)
    // Com parenteses: ((2+3)*2) resulta em 10.
    printf("Macro corrigida: %d\n", DOBRO(2+3));
    return 0;
}

int dobro(int x) {
    return x * 2;
}
