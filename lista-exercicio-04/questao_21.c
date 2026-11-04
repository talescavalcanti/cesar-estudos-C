#include <stdio.h>

int main(void) {
    float salario, percentual, aumento;
    int cargo;

    printf("Salário atual: ");
    scanf("%f", &salario);
    printf("Cargo (1-Técnico, 2-Gerente, 3-Demais): ");
    scanf("%d", &cargo);

    if (salario < 0) {
        printf("Salário inválido.\n");
        return 1;
    }

    switch (cargo) {
        case 1: percentual = salario <= 3000 ? 0.15f : 0.10f; break;
        case 2: percentual = salario <= 5000 ? 0.10f : 0.05f; break;
        case 3: percentual = 0.08f; break;
        default:
            printf("Cargo inválido.\n");
            return 1;
    }

    aumento = salario * percentual;
    printf("Aumento: R$ %.2f\n", aumento);
    printf("Novo salário: R$ %.2f\n", salario + aumento);
    return 0;
}
