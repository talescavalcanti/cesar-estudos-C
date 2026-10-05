# Simulado – Capítulos 1, 2 e 3 (PIF – C)

## PARTE I – Questões teóricas e analíticas

### Questão 01 – Sensibilidade a caixa e identificadores

**Resposta: alternativa c.**

Como C é *case sensitive*, `valor` e `VALOR`, `peso` e `Peso`, `taxa` e `TAXA` são identificadores diferentes para o compilador.

---

### Questão 02 – Erros de compilação

Os três erros principais são:

1. **`int Main()`**: o nome correto é `main`, com "m" minúsculo. Com `Main` o programa não tem ponto de entrada e dá erro de linkagem (*undefined reference to `main`*).
2. **`printf( A idade do aluno eh: %d anos.. , idade);`**: o texto de formato está sem aspas duplas. O compilador tenta ler `A`, `idade`, `do`... como identificadores e falha. Forma correta: `printf("A idade do aluno eh: %d anos.\n", idade);`
3. **`cout << endl;`**: `cout` e `endl` são de C++ (`<iostream>`) e não existem em C. Para pular linha em C usa-se `printf("\n");`.

Também há um problema menor: o `;` depois de `#include <stdlib.h>;`. Diretivas de pré-processador não terminam com ponto e vírgula, e o compilador gera um aviso (*extra tokens at end of #include directive*).

Código corrigido:

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade = 20;
    printf("A idade do aluno eh:\t%d anos.\n", idade);
    printf("\n");
    system("PAUSE");
    return 0;
}
```

---

### Questão 03 – Atribuição composta

Valores iniciais: `a = 2, b = 4, c = 5, d = 10`.

| Linha | Cálculo | Resultado |
|---|---|---|
| `a += b + c;` | a = 2 + (4 + 5) | **a = 11** |
| `b *= c = d - 2;` | primeiro c = 10 − 2 = 8, depois b = 4 × 8 | **c = 8, b = 32** |
| `d %= a + 3;` | d = 10 % (11 + 3) = 10 % 14 | **d = 10** |
| `a += b += c += 5;` | c = 8 + 5 = 13 → b = 32 + 13 = 45 → a = 11 + 45 = 56 | **c = 13, b = 45, a = 56** |

**Valores finais: a = 56, b = 45, c = 13, d = 10.**

As atribuições são avaliadas da direita para a esquerda, então na última linha o primeiro a mudar é `c`, depois `b` e por último `a`.

---

### Questão 04 – Expressões lógicas e relacionais

Valores: `i = 2, j = 3, k = 0, x = 2.5, y = 5.0`.

| Expressão | Avaliação | Resultado |
|---|---|---|
| a) `i < j + 2` | 2 < 5 | **1** |
| b) `2 * i - 5 <= j - 4` | (4 − 5) <= (3 − 4) → −1 <= −1 | **1** |
| c) `!k && (x + y >= 7.5)` | !0 = 1; 7.5 >= 7.5 = 1 → 1 && 1 | **1** |
| d) `!(i == j) \|\| (y / x == 2.0)` | !(0) = 1 → curto-circuito, o resto nem é avaliado | **1** |
| e) `i == 2 && j == 4 \|\| k == 0` | `&&` tem precedência maior que `\|\|`: (1 && 0) \|\| 1 → 0 \|\| 1 | **1** |

---

### Questão 05 – for, while e do-while

**a)** O `while` testa a condição **antes** de executar o bloco. Se a condição já começar falsa, o bloco não executa nenhuma vez (mínimo de **0** execuções). O `do-while` testa a condição **depois** de executar o bloco, então o bloco sempre roda **pelo menos 1 vez**. Por isso o `do-while` serve bem para menus e validação de entrada, em que é preciso ler o dado antes de verificar se ele é válido.

**b)** O `for` é mais elegante quando o **número de repetições é conhecido** ou controlado por um contador: percorrer de 1 até N, varrer as posições de um vetor, repetir algo um número fixo de vezes. Ele junta a inicialização, a condição e o incremento em uma só linha, o que facilita a leitura e diminui a chance de esquecer o incremento. O `while` fica melhor quando a parada depende de um evento cuja ocorrência não se sabe de antemão, como o usuário digitar um valor sentinela.

**c)** Não é erro de compilação, e sim **erro de lógica**. O `;` vira o corpo do laço, que passa a ser uma instrução vazia. Se `condicao` for verdadeira, o programa entra em **laço infinito**: nada dentro do "corpo" altera a condição, então ela continua verdadeira para sempre e o programa trava ali. O bloco `{ ... }` que vem depois só executaria (uma única vez) se a condição fosse falsa.

---

### Questão 06 – Escopo de bloco, break e continue

**a)** A variável `soma` é declarada **dentro** do bloco `{ }` do `for`, então ela só existe ali dentro. No `printf` final, que está fora do laço, `soma` não está mais no escopo, e o compilador acusa *'soma' undeclared* (identificador não declarado).

Há também um erro de lógica: como `int soma = 0;` fica dentro do laço, `soma` seria zerada a cada iteração e nunca acumularia nada.

**b)**
- `i = 1, 2, 3, 4`: executam normalmente.
- `i = 5`: o `continue` pula o resto do corpo e vai direto para o `i++`. O quadrado de 5 **não** é somado.
- `i = 6, 7`: executam normalmente.
- `i = 8`: o `break` encerra o laço imediatamente. As iterações 8, 9 e 10 não acontecem.

Iterações efetivamente executadas (somando): **1, 2, 3, 4, 6, 7**.

**c)** Código corrigido:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int soma = 0;   /* declarada fora do laço: visível no printf e não é zerada a cada volta */

    for (i = 1; i <= 10; i++) {
        if (i == 5) continue;
        if (i == 8) break;
        soma += i * i;
    }

    printf("Soma final = %d\n", soma);
    system("PAUSE");
    return 0;
}
```

Cálculo: 1 + 4 + 9 + 16 + 36 + 49 = 115

Saída no console:

```
Soma final = 115
```

---

## PARTE II – Questões práticas (código em C)

> Observação: a lista não tem Questão 07, ela pula da 06 para a 08.
> Para compilar os programas que usam `<math.h>` no Linux, adicione `-lm`: `gcc q08.c -o q08 -lm`.

### Questão 08 – Esfera com `<math.h>`

```c
#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main() {
    double raio, area, volume;

    printf("Digite o raio da esfera: ");
    scanf("%lf", &raio);

    area = 4 * PI * pow(raio, 2);
    volume = (4.0 / 3.0) * PI * pow(raio, 3);   /* 4.0/3.0 garante divisão real (4/3 daria 1) */

    printf("Area da superficie: %.3f\n", area);
    printf("Volume da esfera:   %.3f\n", volume);

    return 0;
}
```

---

### Questão 09 – Fórmula de Heron

```c
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, p, area;

    printf("Digite os tres lados do triangulo (a b c): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    /* verifica a desigualdade triangular */
    if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a) {
        printf("Os valores informados nao formam um triangulo valido.\n");
        return 1;
    }

    p = (a + b + c) / 2.0;
    area = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("Semiperimetro: %.2f\n", p);
    printf("Area do triangulo: %.2f\n", area);

    return 0;
}
```

---

### Questão 10 – Decomposição do tempo

```c
#include <stdio.h>

int main() {
    int totalSegundos, horas, minutos, segundos;

    printf("Digite a quantidade de segundos: ");
    scanf("%d", &totalSegundos);

    if (totalSegundos < 0) {
        printf("Valor invalido!\n");
        return 1;
    }

    horas = totalSegundos / 3600;
    minutos = (totalSegundos % 3600) / 60;
    segundos = totalSegundos % 60;

    printf("%d segundos correspondem a %d hora(s), %d minuto(s) e %d segundo(s).\n",
           totalSegundos, horas, minutos, segundos);

    return 0;
}
```

Exemplo: `3665` → `1 hora(s), 1 minuto(s) e 5 segundo(s)`.

---

### Questão 11 – Cálculo salarial

```c
#include <stdio.h>

#define VALOR_DIA 45.00

int main() {
    int dias;
    float bruto, gratificacao, imposto, liquido;

    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &dias);

    if (dias < 0) {
        printf("Numero de dias invalido!\n");
        return 1;
    }

    bruto = dias * VALOR_DIA;
    gratificacao = bruto * 0.05;
    imposto = bruto * 0.08;
    liquido = bruto + gratificacao - imposto;

    printf("\n========== HOLERITE ==========\n");
    printf("Dias trabalhados:     %d\n", dias);
    printf("Valor por dia:        R$ %8.2f\n", VALOR_DIA);
    printf("Salario bruto:        R$ %8.2f\n", bruto);
    printf("(+) Gratificacao 5%%:  R$ %8.2f\n", gratificacao);
    printf("(-) Imposto 8%%:       R$ %8.2f\n", imposto);
    printf("------------------------------\n");
    printf("Salario liquido:      R$ %8.2f\n", liquido);
    printf("==============================\n");

    return 0;
}
```

---

### Questão 12 – Validação de nota com `do-while`

```c
#include <stdio.h>

int main() {
    float nota;

    do {
        printf("Digite uma nota (0.0 a 10.0): ");
        scanf("%f", &nota);

        if (nota < 0.0 || nota > 10.0) {
            printf("Erro: nota invalida! Digite um valor entre 0.0 e 10.0.\n");
        }
    } while (nota < 0.0 || nota > 10.0);

    printf("Nota valida registrada: %.1f\n", nota);

    return 0;
}
```

---

### Questão 13 – Fatorial com `long long int`

```c
#include <stdio.h>

int main() {
    int n, i;
    long long int fatorial = 1;   /* começa em 1: cobre 0! = 1 e 1! = 1 automaticamente */

    printf("Digite um numero inteiro N: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Erro: nao existe fatorial de numero negativo!\n");
        return 1;
    }

    if (n > 20) {
        printf("Aviso: %d! ultrapassa o limite de long long int (maximo 20!).\n", n);
        return 1;
    }

    for (i = 2; i <= n; i++) {
        fatorial *= i;
    }

    printf("%d! = %lld\n", n, fatorial);

    return 0;
}
```

---

### Questão 14 – Autenticação com 3 tentativas

```c
#include <stdio.h>

#define SENHA_SECRETA 2026
#define MAX_TENTATIVAS 3

int main() {
    int senha, tentativas = 0, acertou = 0;

    while (tentativas < MAX_TENTATIVAS && !acertou) {
        printf("Digite a senha (tentativa %d de %d): ", tentativas + 1, MAX_TENTATIVAS);
        scanf("%d", &senha);
        tentativas++;

        if (senha == SENHA_SECRETA) {
            acertou = 1;
        } else if (tentativas < MAX_TENTATIVAS) {
            printf("Senha incorreta! Restam %d tentativa(s).\n", MAX_TENTATIVAS - tentativas);
        }
    }

    if (acertou) {
        printf("Acesso Concedido!\n");
    } else {
        printf("Conta Bloqueada por Seguranca!\n");
    }

    return 0;
}
```

---

### Questão 15 – Triângulo de Floyd

```c
#include <stdio.h>

int main() {
    int n, linha, coluna, numero = 1;

    printf("Digite um numero inteiro positivo N: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("N deve ser positivo!\n");
        return 1;
    }

    for (linha = 1; linha <= n; linha++) {
        for (coluna = 1; coluna <= linha; coluna++) {
            printf("%d ", numero);
            numero++;
        }
        printf("\n");
    }

    return 0;
}
```

Saída para `N = 5`:

```
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
```
