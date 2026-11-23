#include <stdio.h>

float calculaSubtotal(float preco, int quantidade);
float aplicaDesconto(float valor, int opcaoPagamento);
float calculaTroco(float total, float pago);

int main(void) {
    float preco, pago, subtotal, total, troco;
    int quantidade, pagamento;

    printf("Preco unitario: ");
    if (scanf("%f", &preco) != 1 || preco < 0.0f) return 1;
    printf("Quantidade: ");
    if (scanf("%d", &quantidade) != 1 || quantidade <= 0) return 1;
    printf("Pagamento (1 - A vista / 2 - Outro): ");
    if (scanf("%d", &pagamento) != 1 || (pagamento != 1 && pagamento != 2)) return 1;
    printf("Valor pago: ");
    if (scanf("%f", &pago) != 1 || pago < 0.0f) return 1;

    subtotal = calculaSubtotal(preco, quantidade);
    total = aplicaDesconto(subtotal, pagamento);
    troco = calculaTroco(total, pago);

    printf("Subtotal: R$ %.2f\n", subtotal);
    printf("Total a pagar: R$ %.2f\n", total);
    if (troco < 0.0f) {
        printf("Pagamento insuficiente. Faltam R$ %.2f\n", -troco);
    } else {
        printf("Troco: R$ %.2f\n", troco);
    }
    return 0;
}

float calculaSubtotal(float preco, int quantidade) {
    return preco * quantidade;
}

float aplicaDesconto(float valor, int opcaoPagamento) {
    return opcaoPagamento == 1 ? valor * 0.90f : valor;
}

float calculaTroco(float total, float pago) {
    return pago - total;
}
