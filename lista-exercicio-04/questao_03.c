#include <stdio.h>

int main(void) {
    double nota1 = 6.0, nota2 = 7.6, media;
    char situacao;

    media = (nota1 + nota2) / 2.0;

    if (media >= 7.0) {
        situacao = 'A';
    } else {
        situacao = 'R';
    }

    printf("Média: %.2f\nSituação: %c\n", media, situacao);
    return 0;
}
