#include <stdio.h>

/*
Sem DEBUG: gcc -std=c11 questao24.c -o questao24
Com DEBUG: gcc -std=c11 -DDEBUG questao24.c -o questao24_debug
Sem DEBUG, exibe apenas o resultado final.
Com DEBUG, exibe tambem a soma parcial em cada iteracao.
A opcao -DDEBUG equivale a adicionar #define DEBUG antes do codigo.
*/

int somaAteN(int n);

int main(void) {
    int n;
    printf("Digite um inteiro nao negativo: ");
    if (scanf("%d", &n) != 1 || n < 0) return 1;
    printf("Soma de 1 ate %d: %d\n", n, somaAteN(n));
    return 0;
}

int somaAteN(int n) {
    int soma = 0;
    for (int i = 1; i <= n; i++) {
        soma += i;
        #ifdef DEBUG
        printf("Iteracao %d: soma parcial = %d\n", i, soma);
        #endif
    }
    return soma;
}
