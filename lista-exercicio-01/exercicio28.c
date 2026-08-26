#include <stdio.h>
#include <stdlib.h>

int main(){

    int valor1, valor2, valor3;
    double media;

    printf("Digite tres valores inteiros:\n");
    scanf("%d", &valor1);
    scanf("%d", &valor2);
    scanf("%d", &valor3);

    media = (valor1 + valor2 + valor3) / 3.0;

    printf("A media aritmetica e: %.2f\n", media);

    system("PAUSE");
    return 0;
}
