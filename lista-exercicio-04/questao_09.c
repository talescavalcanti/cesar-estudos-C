#include <stdio.h>

int main(void) {
    float laboratorio, semestral, final, media;
    printf("Nota do laboratório: ");
    scanf("%f", &laboratorio);
    printf("Nota da avaliação semestral: ");
    scanf("%f", &semestral);
    printf("Nota do exame final: ");
    scanf("%f", &final);

    media = (laboratorio * 2 + semestral * 3 + final * 5) / 10;
    printf("Média: %.2f\n", media);

    if (media < 0 || media > 10) {
        printf("Notas inválidas.\n");
    } else if (media < 3) {
        printf("Reprovado\n");
    } else if (media < 5) {
        printf("Em Recuperação\n");
    } else {
        printf("Aprovado\n");
    }
    return 0;
}
