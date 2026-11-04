#include <stdio.h>

int main(void) {
    float total, valorFinal, comissao;
    int opcao;

    printf("Valor total da compra: ");
    scanf("%f", &total);
    printf("1 - À vista | 2 - Parcelado em 3x: ");
    scanf("%d", &opcao);

    if (total < 0) {
        printf("Valor inválido.\n");
    } else if (opcao == 1) {
        valorFinal = total * 0.90f;
        comissao = valorFinal * 0.05f;
        printf("Total com desconto: R$ %.2f\n", valorFinal);
        printf("Comissão: R$ %.2f\n", comissao);
    } else if (opcao == 2) {
        comissao = total * 0.05f;
        printf("3 parcelas de R$ %.2f\n", total / 3);
        printf("Comissão: R$ %.2f\n", comissao);
    } else {
        printf("Opção inválida.\n");
    }
    return 0;
}
