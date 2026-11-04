#include <stdio.h>

int main(void) {
    int pagar, entregue, troco;
    int cedulas[] = {100, 50, 20, 10, 5, 2};

    printf("Valor a pagar: ");
    scanf("%d", &pagar);
    printf("Valor entregue: ");
    scanf("%d", &entregue);

    if (pagar <= 0 || entregue <= 0) {
        printf("Valores inválidos.\n");
        return 1;
    }
    if (entregue < pagar) {
        printf("Erro: valor entregue insuficiente.\n");
        return 1;
    }

    troco = entregue - pagar;
    printf("Troco: R$ %d\n", troco);

    /* Busca a menor quantidade de cédulas, inclusive em casos
       em que pegar sempre a maior cédula não funciona. */
    int minimo[troco + 1];
    int ultima[troco + 1];

    minimo[0] = 0;
    ultima[0] = -1;

    for (int valor = 1; valor <= troco; valor++) {
        minimo[valor] = troco + 1;
        ultima[valor] = -1;
        for (int j = 0; j < 6; j++) {
            int cedula = cedulas[j];
            if (valor >= cedula && minimo[valor - cedula] + 1 < minimo[valor]) {
                minimo[valor] = minimo[valor - cedula] + 1;
                ultima[valor] = j;
            }
        }
    }

    if (ultima[troco] == -1 && troco != 0) {
        printf("Não é possível dar esse troco com as cédulas disponíveis.\n");
        return 0;
    }

    int quantidade[6] = {0};
    int restante = troco;
    while (restante > 0) {
        int indice = ultima[restante];
        quantidade[indice]++;
        restante -= cedulas[indice];
    }

    for (int j = 0; j < 6; j++) {
        if (quantidade[j] > 0) {
            printf("R$ %d: %d cédula(s)\n", cedulas[j], quantidade[j]);
        }
    }
    return 0;
}
