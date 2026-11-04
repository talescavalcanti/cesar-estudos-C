#include <stdio.h>

int main(void) {
    int idade, servico;
    printf("Idade: ");
    scanf("%d", &idade);
    printf("Anos de serviço: ");
    scanf("%d", &servico);

    if (idade < 0 || servico < 0) {
        printf("Dados inválidos.\n");
    } else if (idade >= 65 || servico >= 30 || (idade >= 60 && servico >= 25)) {
        printf("Pode se aposentar.\n");
    } else {
        printf("Não pode se aposentar.\n");
    }
    return 0;
}
