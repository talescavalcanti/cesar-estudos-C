### Questão 01

**a)** `while`: testa antes e pode executar 0 vezes. `do-while`: testa depois e executa pelo menos 1 vez.

**b)** `for`: contagem definida. `while`: repetições dependentes de uma condição. `do-while`: execução obrigatória pelo menos uma vez.

**c)** Erro de lógica (não de compilação): o `;` cria um corpo vazio. Se a condição permanecer verdadeira, o laço será infinito.

### Questão 02

**a)** `soma` foi declarada dentro do `for` e não existe no escopo do `printf`.

**b)** `soma` é reiniciada com zero em cada repetição.

**c)** `soma` deve ser declarada antes do laço para permanecer acessível e acumular os valores até o final de `main`.

```c
#include <stdio.h>

int main(void) {
    int soma = 0;
    for (int i = 1; i < 10; i++)
        soma += i * i;
    printf("Soma final = %d\n", soma);
    return 0;
}
```

### Questão 03

**a)** `36 18 9 4 2 1`

**b)** Lê caracteres até `'X'` e imprime o caractere seguinte (`ch + 1`). Os parênteses garantem que a atribuição seja feita antes da comparação.

**c)** Com `break` dentro do laço, quando a condição de saída for satisfeita.

### Questão 04

**a)** `break` encerra imediatamente o laço em que está.

**b)** `continue` pula o restante da iteração; no `for`, executa a **terceira expressão** (atualização/incremento).

**c)** Apenas o laço interno é interrompido.

### Questão 05

**a)** 5 iterações.

**b)**

```text
i = 0, j = 10 | soma = 10
i = 1, j = 9 | soma = 10
i = 2, j = 8 | soma = 10
i = 3, j = 7 | soma = 10
i = 4, j = 6 | soma = 10
```

**c)**

```c
int i = 0, j = 10;
while (i < j) {
    printf("i = %d, j = %d | soma = %d\n", i, j, i + j);
    i++;
    j--;
}
```

### Questão 06

**a)** `6`.

**b)** Compara os valores `0, 1, 2, 3, 4, 5` com `5`. Mesmo no último teste (falso), `x++` incrementa `x` até `6`.

**c)**

```c
int x = 0;
do {
    x++;
} while (x <= 5);
printf("Valor final de x = %d\n", x);
```

### Questão 07

```c
#include <stdio.h>

void com_for(void) {
    for (int i = 0; i <= 100; i++) printf("%d ", i);
    printf("\n");
}

void com_while(void) {
    int i = 0;
    while (i <= 100) printf("%d ", i++);
    printf("\n");
}

void com_do_while(void) {
    int i = 0;
    do { printf("%d ", i++); } while (i <= 100);
    printf("\n");
}

int main(void) {
    com_for();
    com_while();
    com_do_while();
    return 0;
}

// Mais adequado: for, porque o numero de repeticoes e conhecido.
```

### Questão 08

```c
#include <stdio.h>

int main(void) {
    float nota;
    do {
        printf("Nota (0 a 10): ");
        if (scanf("%f", &nota) != 1) return 1;
        if (nota < 0 || nota > 10) printf("Nota invalida!\n");
    } while (!(nota >= 0 && nota <= 10));
    printf("Nota registrada com sucesso!\n");
    return 0;
}
```

### Questão 09

```c
#include <stdio.h>

int main(void) {
    float valor, soma = 0;
    int quantidade = 0;
    while (1) {
        printf("Valor (negativo para parar): ");
        if (scanf("%f", &valor) != 1) return 1;
        if (valor < 0) break;
        if (valor == 0) continue;
        soma += valor;
        quantidade++;
    }
    printf("Quantidade: %d\nSoma: %.2f\n", quantidade, soma);
    if (quantidade) printf("Media: %.2f\n", soma / quantidade);
    else printf("Nenhum valor valido.\n");
    return 0;
}
```

### Questão 10

```c
#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 100; i++)
        printf("%d%c", i * 3, i % 10 == 0 ? '\n' : '\t');
    return 0;
}
```

### Questão 11

```c
#include <stdio.h>

int main(void) {
    int a, b;
    printf("A e B: ");
    if (scanf("%d %d", &a, &b) != 2) return 1;
    if (a <= b) {
        for (int i = a;; i++) {
            printf("%d ", i);
            if (i == b) break;
        }
    } else {
        for (int i = a;; i--) {
            printf("%d ", i);
            if (i == b) break;
        }
    }
    printf("\n");
    return 0;
}
```

### Questão 12

```c
#include <stdio.h>

int main(void) {
    printf("Celsius   Fahrenheit   Kelvin\n");
    for (int c = 0; c <= 100; c += 5)
        printf("%7.2f   %10.2f   %6.2f\n",
               (double)c, c * 9.0 / 5 + 32, c + 273.15);
    return 0;
}
```

### Questão 13

```c
#include <stdio.h>

int main(void) {
    int n;
    long long int fatorial = 1;
    printf("N: ");
    if (scanf("%d", &n) != 1) return 1;
    if (n < 0 || n > 20) {
        printf("Erro: N deve estar entre 0 e 20.\n");
        return 1;
    }
    for (int i = 2; i <= n; i++) fatorial *= i;
    printf("%d! = %lld\n", n, fatorial);
    return 0;
}
```

### Questão 14

```c
#include <stdio.h>

int main(void) {
    int soma = 0;
    for (int i = 1; i <= 100; i++) {
        printf("%d -> %d\n", i, i * i);
        soma += i * i;
    }
    printf("Soma = %d\n", soma);
    return 0;
}
```

### Questão 15

```c
#include <stdio.h>

int main(void) {
    int num, encontrou = 0;
    printf("Limite: ");
    if (scanf("%d", &num) != 1 || num <= 0) return 1;
    for (int i = 1; i <= num; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d ", i);
            encontrou = 1;
        }
    }
    if (!encontrou) printf("Nenhum numero encontrado.");
    printf("\n");
    return 0;
}
```

### Questão 16

```c
#include <stdio.h>

int main(void) {
    int senha;
    for (int i = 1; i <= 3; i++) {
        printf("Senha: ");
        if (scanf("%d", &senha) != 1) return 1;
        if (senha == 2026) {
            printf("Acesso Concedido! Tentativas: %d\n", i);
            return 0;
        }
    }
    printf("Conta Bloqueada por Seguranca!\n");
    return 0;
}
```

### Questão 17

```c
#include <stdio.h>

int main(void) {
    float nota, soma = 0, maior = 0, menor = 0;
    int total = 0;
    while (1) {
        printf("Nota (-1 para parar): ");
        if (scanf("%f", &nota) != 1) return 1;
        if (nota == -1) break;
        if (nota < 0 || nota > 10) continue;
        if (total == 0 || nota > maior) maior = nota;
        if (total == 0 || nota < menor) menor = nota;
        soma += nota;
        total++;
    }
    printf("Alunos: %d\n", total);
    if (total) printf("Maior: %.2f\nMenor: %.2f\nMedia: %.2f\n",
                      maior, menor, soma / total);
    return 0;
}
```

### Questão 18

```c
#include <stdio.h>

int main(void) {
    int n;
    long long invertido = 0;
    printf("Numero positivo: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 1;
    while (n > 0) {
        invertido = invertido * 10 + n % 10;
        n /= 10;
    }
    printf("Invertido: %lld\n", invertido);
    return 0;
}
```

### Questão 19

```c
#include <stdio.h>

int main(void) {
    int n;
    long long int a = 1, b = 1, termo = 1;
    printf("Posicao N: ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 92) return 1;
    for (int i = 1; i <= n; i++) {
        if (i > 2) {
            termo = a + b;
            a = b;
            b = termo;
        }
        printf("%lld ", termo);
    }
    printf("\nF(%d) = %lld\n", n, termo);
    return 0;
}
```

### Questão 20

```c
#include <stdio.h>

int main(void) {
    for (int i = 32; i <= 126; i++)
        printf("%d\t%X\t%c\n", i, i, i);
    return 0;
}
```

### Questão 21

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand((unsigned)time(NULL));
    char secreta = 'a' + rand() % 26, letra;
    int tentativas = 0;
    do {
        printf("Letra (a-z): ");
        if (scanf(" %c", &letra) != 1) return 1;
        if (letra < 'a' || letra > 'z') continue;
        tentativas++;
        if (letra < secreta) printf("Vem depois.\n");
        if (letra > secreta) printf("Vem antes.\n");
    } while (letra != secreta);
    printf("Parabens! Tentativas: %d\n", tentativas);
    return 0;
}
```

### Questão 22

```c
#include <stdio.h>

int main(void) {
    int n, numero = 1;
    printf("N: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) printf("%d ", numero++);
        printf("\n");
    }
    return 0;
}
```

### Questão 23

```c
#include <stdio.h>

int main(void) {
    int l;
    printf("Lado (3 a 20): ");
    if (scanf("%d", &l) != 1 || l < 3 || l > 20) return 1;
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < l; j++)
            printf("%c", i == 0 || i == l-1 || j == 0 || j == l-1 ? 'X' : ' ');
        printf("\n");
    }
    return 0;
}
```

### Questão 24

```c
#include <stdio.h>

int main(void) {
    int n;
    printf("N impar (3 a 19): ");
    if (scanf("%d", &n) != 1 || n < 3 || n > 19 || n % 2 == 0) return 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%c", j == i || j == n - 1 - i ? '*' : ' ');
        printf("\n");
    }
    return 0;
}
```

### Questão 25

```c
#include <stdio.h>

int main(void) {
    int n, divisores = 0;
    printf("N: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 1;
    for (int i = 1; i <= n; i++)
        if (n % i == 0) divisores++;
    printf("Divisores: %d\n", divisores);
    printf(divisores == 2 ? "Primo\n" : "Nao e primo\n");
    return 0;
}
```

### Questão 26

```c
#include <stdio.h>

int primo(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= n / i; i++)
        if (n % i == 0) return 0;
    return 1;
}

int main(void) {
    int a, b;
    long long soma = 0;
    do {
        printf("A e B (positivos, A < B): ");
        if (scanf("%d %d", &a, &b) != 2) return 1;
    } while (a <= 0 || b <= 0 || a >= b);
    for (long long i = a; i <= b; i++) {
        if (primo((int)i)) {
            printf("%lld ", i);
            soma += i;
        }
    }
    printf("\nSoma = %lld\n", soma);
    return 0;
}
```

### Questão 27

```c
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void) {
    int cedulas[] = {100, 50, 20, 10, 5, 2};
    int valor, quantidade[6] = {0};
    printf("Valor do saque: ");
    if (scanf("%d", &valor) != 1 || valor <= 0) return 1;

    size_t tam = (size_t)valor + 1;
    if (tam > (size_t)-1 / sizeof(int)) return 1;
    int *min = malloc(tam * sizeof(int));
    int *usada = malloc(tam * sizeof(int));
    if (!min || !usada) { free(min); free(usada); return 1; }

    min[0] = 0;
    for (int i = 1; i <= valor; i++) {
        min[i] = INT_MAX;
        usada[i] = -1;
        for (int j = 0; j < 6; j++) {
            int anterior = i - cedulas[j];
            if (anterior >= 0 && min[anterior] != INT_MAX &&
                min[anterior] + 1 < min[i]) {
                min[i] = min[anterior] + 1;
                usada[i] = j;
            }
        }
    }
    if (usada[valor] == -1) {
        printf("Saque impossivel com essas cedulas.\n");
    } else {
        int restante = valor;
        while (restante > 0) {
            int j = usada[restante];
            quantidade[j]++;
            restante -= cedulas[j];
        }
        for (int j = 0; j < 6; j++)
            printf("R$ %d: %d cedula(s)\n", cedulas[j], quantidade[j]);
        printf("Total minimo: %d\n", min[valor]);
    }
    free(min);
    free(usada);
    return 0;
}
```

### Questão 28

```c
#include <stdio.h>

int main(void) {
    int opcao = 0, c;
    double salario;
    do {
        printf("\n1. Reajuste\n2. Imposto de Renda\n3. Sair\nOpcao: ");
        if (scanf("%d", &opcao) != 1) {
            while ((c = getchar()) != '\n' && c != EOF) {}
            if (c == EOF) return 1;
            opcao = 0;
        }
        switch (opcao) {
            case 1:
            case 2:
                printf("Salario: ");
                if (scanf("%lf", &salario) != 1) return 1;
                if (salario < 0) { printf("Salario invalido.\n"); break; }
                if (opcao == 1)
                    printf("Novo salario: %.2f\n", salario * (salario <= 2000 ? 1.15 : 1.10));
                else
                    printf("Desconto: %.2f\n", salario * (salario <= 3000 ? 0.08 : 0.15));
                break;
            case 3: break;
            default: printf("Opcao invalida.\n");
        }
    } while (opcao != 3);
    return 0;
}
```
