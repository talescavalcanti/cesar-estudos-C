# Resolução — Lista de Exercícios Capítulo 2 — PIF

## Questão 01

**a)** O valor exibido será `2`.

**b)** Isso acontece porque `2.97` é um valor de ponto flutuante, mas está sendo armazenado em uma variável do tipo `int`. Ao fazer essa conversão, a parte decimal é descartada. Esse processo é uma conversão implícita de tipo e, nesse caso, ocorre truncamento.

**c)** Para manter a precisão, o valor deve ser armazenado em uma variável `float` ou `double`. Se a intenção for arredondar, o programador pode usar funções como `round()`, `floor()` ou `ceil()` da biblioteca `<math.h>`, dependendo do comportamento desejado.

---

## Questão 02

**a)** A biblioteca `<conio.h>` não faz parte do padrão ANSI C. Ela é específica de alguns compiladores e sistemas, principalmente ambientes antigos do DOS e Windows. Por isso, funções como `getch()` e `getche()` podem não existir em Linux, macOS ou outros ambientes modernos, reduzindo a portabilidade do programa.

**b)** As funções padrão mais comuns são `getchar()` para ler um caractere e `putchar()` para exibir um caractere. Também podem ser usadas `fgetc()` e `fputc()`.

**c)**

```c
#include <stdio.h>

int main(void) {
    int caractere;

    do {
        caractere = getchar();
    } while (caractere == '\n' || caractere == '\r');

    if (caractere != EOF) {
        printf("Caractere lido: %c\n", caractere);
    }

    return 0;
}
```

---

## Questão 03

```c
#include <stdio.h>

int main(void) {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("Decimal: %d | Hexadecimal: %x | Octal: %o | ASCII: %c\n",
           numero, numero, numero, numero);

    return 0;
}
```

---

## Questão 04

Os valores começam como `a = 1`, `b = 2`, `c = 3` e `d = 4`.

Na primeira operação, `a += b + c`, temos `a = 1 + 2 + 3`, então `a = 6`.

Na segunda operação, `b *= c = d + 2`, primeiro `c` recebe `4 + 2`, ficando com `6`. Depois, `b` é multiplicado por `6`, então `b = 12`.

Na operação `d %= a + a + a`, temos `d %= 18`. Como o resto de `4 / 18` é `4`, o valor de `d` continua sendo `4`.

Na operação `d -= c -= b -= a`, a avaliação ocorre da direita para a esquerda. Primeiro `b = 12 - 6`, ficando `6`. Depois `c = 6 - 6`, ficando `0`. Por fim, `d = 4 - 0`, continuando `4`.

Na última operação, `a += b += c += 7`, novamente a avaliação acontece da direita para a esquerda. Primeiro `c = 0 + 7`, então `c = 7`. Depois `b = 6 + 7`, então `b = 13`. Por fim `a = 6 + 13`, então `a = 19`.

Os valores finais são:

`a = 19`, `b = 13`, `c = 7` e `d = 4`.

---

## Questão 05

**a)** `1`, porque `1 < 2 + 3`, ou seja, `1 < 5`.

**b)** `0`, porque `2 * 1 - 7 = -5` e `2 - 8 = -6`. Logo, `-5 <= -6` é falso.

**c)** `0`, porque `-3.3 + 4.4 = 1.1` e `2.0 * 4.4 = 8.8`. Logo, `1.1 >= 8.8` é falso.

**d)** `0`, porque `3.3` é diferente de `4.4`.

**e)** `1`, porque `n - j = 2 - 2 = 0` e `!0` resulta em verdadeiro.

**f)** A expressão produz numericamente `-2`, porque `!n` vale `0` e depois é feito `0 - 2`. Como `-2` é diferente de zero, ele é considerado verdadeiro quando usado em um contexto lógico.

**g)** `1`, porque `i`, `j` e `k` são todos diferentes de zero e, portanto, verdadeiros.

**h)** `1`. Primeiro `j - 3` resulta em `-1`. Como `-1` e `k` são diferentes de zero, `j - 3 && k` resulta em verdadeiro. Depois `i || 1` também resulta em verdadeiro.

**i)** `0`, porque `i < j` é verdadeiro, mas `2 >= k` é falso. Verdadeiro `&&` falso resulta em falso.

**j)** `0`, porque `i == 2`, `j == 4` e `k == 5` são todas expressões falsas.

---

## Questão 06

**a)** No incremento prefixado, a variável é incrementada antes de seu valor ser utilizado. Assim, em `int x = ++n`, `n` passa de `5` para `6` e depois `6` é atribuído a `x`. O resultado será `n = 6` e `x = 6`.

No incremento pós-fixado, o valor atual é utilizado primeiro e o incremento ocorre em seguida. Em `int y = m++`, o valor `5` é atribuído a `y` e depois `m` passa para `6`. O resultado será `m = 6` e `y = 5`.

**b)** A instrução modifica `n` com `n++` e também lê o valor de `n` em outros argumentos da mesma chamada de `printf()`. A linguagem C não define uma ordem fixa para a avaliação dos argumentos de uma função. Como a variável é lida e modificada sem uma sequência definida entre essas operações, o comportamento é indefinido e o resultado pode variar dependendo do compilador ou das otimizações utilizadas.

---

## Questão 07

```c
#include <stdio.h>

int main(void) {
    int dia, mes, ano;

    printf("Digite uma data no formato dd/mm/aaaa: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    printf("%04d/%02d/%02d\n", ano, mes, dia);

    return 0;
}
```

---

## Questão 08

```c
#include <stdio.h>

int main(void) {
    int numero;
    int quadrado;
    double decima_parte;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    quadrado = numero * numero;
    decima_parte = numero / 10.0;

    printf("Quadrado: %d\n", quadrado);
    printf("Decima parte: %.2f\n", decima_parte);

    return 0;
}
```

---

## Questão 09

```c
#include <stdio.h>

int main(void) {
    int a, b;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);

    printf("Soma: %d\n", a + b);
    printf("Subtracao: %d\n", a - b);
    printf("Multiplicacao: %d\n", a * b);

    /* Para evitar divisao por zero, o segundo numero deve ser diferente de zero. */
    printf("Divisao: %.2f\n", (double)a / b);

    return 0;
}
```

---

## Questão 10

```c
#include <stdio.h>

int main(void) {
    double celsius, fahrenheit, kelvin;

    printf("Digite a temperatura em Celsius: ");
    scanf("%lf", &celsius);

    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    kelvin = celsius + 273.15;

    printf("Fahrenheit: %.2f\n", fahrenheit);
    printf("Kelvin: %.2f\n", kelvin);

    return 0;
}
```

---

## Questão 11

```c
#include <stdio.h>

int main(void) {
    const double PI = 3.141593;
    double graus, radianos;

    printf("Digite o angulo em graus: ");
    scanf("%lf", &graus);

    radianos = graus * (PI / 180.0);

    printf("Radianos: %.6f\n", radianos);

    return 0;
}
```

---

## Questão 12

```c
#include <stdio.h>

int main(void) {
    int numero, antecessor, sucessor;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    antecessor = numero;
    sucessor = numero;

    antecessor--;
    sucessor++;

    printf("Antecessor: %d\n", antecessor);
    printf("Sucessor: %d\n", sucessor);

    return 0;
}
```

---

## Questão 13

```c
#include <stdio.h>

int main(void) {
    double lado, base, altura;
    double area_quadrado, area_retangulo, area_triangulo;

    printf("Digite o lado do quadrado: ");
    scanf("%lf", &lado);

    printf("Digite a base e a altura: ");
    scanf("%lf %lf", &base, &altura);

    area_quadrado = lado * lado;
    area_retangulo = base * altura;
    area_triangulo = (base * altura) / 2.0;

    printf("Area do quadrado: %.2f\n", area_quadrado);
    printf("Area do retangulo: %.2f\n", area_retangulo);
    printf("Area do triangulo retangulo: %.2f\n", area_triangulo);

    return 0;
}
```

---

## Questão 14

```c
#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, c, p, area;

    printf("Digite os tres lados do triangulo: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    p = (a + b + c) / 2.0;
    area = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("Area: %.2f\n", area);

    return 0;
}
```

---

## Questão 15

```c
#include <stdio.h>

int main(void) {
    double n1, n2, n3, n4;
    double media_simples, media_ponderada;

    printf("Digite as quatro notas: ");
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

    media_simples = (n1 + n2 + n3 + n4) / 4.0;
    media_ponderada = (n1 + n2 + 2.0 * n3 + 2.0 * n4) / 6.0;

    printf("Media simples: %.2f\n", media_simples);
    printf("Media ponderada: %.2f\n", media_ponderada);

    return 0;
}
```

---

## Questão 16

```c
#include <stdio.h>
#include <math.h>

int main(void) {
    double altura_degrau_cm, altura_total_m, altura_total_cm;
    int degraus;

    printf("Digite a altura de cada degrau em centimetros: ");
    scanf("%lf", &altura_degrau_cm);

    printf("Digite a altura total desejada em metros: ");
    scanf("%lf", &altura_total_m);

    altura_total_cm = altura_total_m * 100.0;
    degraus = (int)ceil(altura_total_cm / altura_degrau_cm);

    printf("Numero minimo de degraus: %d\n", degraus);

    return 0;
}
```

---

## Questão 17

```c
#include <stdio.h>

int main(void) {
    const double PI = 3.141593;
    double raio, area, circunferencia;

    printf("Digite o raio do circulo: ");
    scanf("%lf", &raio);

    area = PI * raio * raio;
    circunferencia = 2.0 * PI * raio;

    printf("Area: %.2f\n", area);
    printf("Circunferencia: %.2f\n", circunferencia);

    return 0;
}
```

---

## Questão 18

```c
#include <stdio.h>

int main(void) {
    const double PI = 3.141593;
    double raio, area, volume;

    printf("Digite o raio da esfera: ");
    scanf("%lf", &raio);

    area = 4.0 * PI * raio * raio;
    volume = (4.0 / 3.0) * PI * raio * raio * raio;

    printf("Area da superficie: %.2f\n", area);
    printf("Volume: %.2f\n", volume);

    return 0;
}
```

---

## Questão 19

```c
#include <stdio.h>

int main(void) {
    int dias;
    double bruto, liquido;

    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &dias);

    bruto = dias * 30.0;
    liquido = bruto - (bruto * 0.08);

    printf("Valor bruto: R$ %.2f\n", bruto);
    printf("Valor liquido: R$ %.2f\n", liquido);

    return 0;
}
```

---

## Questão 20

```c
#include <stdio.h>
#include <math.h>

int main(void) {
    double lado_a, lado_b, hipotenusa;

    printf("Digite os dois catetos: ");
    scanf("%lf %lf", &lado_a, &lado_b);

    hipotenusa = sqrt(lado_a * lado_a + lado_b * lado_b);

    printf("Hipotenusa: %.2f\n", hipotenusa);

    return 0;
}
```

---

## Questão 21

```c
#include <stdio.h>

int main(void) {
    char caractere;

    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    /* O numero exibido representa o codigo ASCII associado ao caractere. */
    printf("Codigo ASCII: %d\n", (int)caractere);

    return 0;
}
```

---

## Questão 22

```c
#include <stdio.h>

int main(void) {
    char maiuscula, minuscula;

    printf("Digite uma letra maiuscula: ");
    scanf(" %c", &maiuscula);

    minuscula = maiuscula + ('a' - 'A');

    printf("Letra minuscula: %c\n", minuscula);

    return 0;
}
```

---

## Questão 23

```c
#include <stdio.h>

int main(void) {
    int horas, minutos, segundos;
    int duracao;
    int total_segundos;

    printf("Digite hora, minuto e segundo do inicio: ");
    scanf("%d %d %d", &horas, &minutos, &segundos);

    printf("Digite a duracao em segundos: ");
    scanf("%d", &duracao);

    total_segundos = horas * 3600 + minutos * 60 + segundos + duracao;
    total_segundos %= 86400;

    horas = total_segundos / 3600;
    minutos = (total_segundos % 3600) / 60;
    segundos = total_segundos % 60;

    printf("Horario de termino: %02d:%02d:%02d\n", horas, minutos, segundos);

    return 0;
}
```

---

## Questão 24

```c
#include <stdio.h>

int main(void) {
    double km_h, m_s;

    printf("Digite a velocidade em km/h: ");
    scanf("%lf", &km_h);

    m_s = km_h / 3.6;

    printf("Velocidade em m/s: %.2f\n", m_s);

    return 0;
}
```

---

## Questão 25

```c
#include <stdio.h>

int main(void) {
    double salario_base, gratificacao, imposto, salario_liquido;

    printf("Digite o salario-base: ");
    scanf("%lf", &salario_base);

    gratificacao = salario_base * 0.05;
    imposto = salario_base * 0.07;
    salario_liquido = salario_base + gratificacao - imposto;

    printf("Salario liquido: R$ %.2f\n", salario_liquido);

    return 0;
}
```

---

## Questão 26

```c
#include <stdio.h>

int main(void) {
    double comprimento, largura, preco_metro;
    double perimetro, metros_arame, custo_total;

    printf("Digite o comprimento do terreno: ");
    scanf("%lf", &comprimento);

    printf("Digite a largura do terreno: ");
    scanf("%lf", &largura);

    printf("Digite o preco do metro de arame: ");
    scanf("%lf", &preco_metro);

    perimetro = 2.0 * (comprimento + largura);
    metros_arame = perimetro * 3.0;
    custo_total = metros_arame * preco_metro;

    printf("Metros de arame: %.2f\n", metros_arame);
    printf("Custo total: R$ %.2f\n", custo_total);

    return 0;
}
```

---

## Questão 27

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int dado1, dado2, dado3;

    srand((unsigned int)time(NULL));

    dado1 = rand() % 6 + 1;
    dado2 = rand() % 6 + 1;
    dado3 = rand() % 6 + 1;

    printf("Dado 1: %d\n", dado1);
    printf("Dado 2: %d\n", dado2);
    printf("Dado 3: %d\n", dado3);

    return 0;
}
```

---

## Questão 28

```c
#include <stdio.h>

int main(void) {
    double horas_normais, horas_extras;
    double salario_bruto, imposto;

    printf("Digite o total de horas normais trabalhadas no ano: ");
    scanf("%lf", &horas_normais);

    printf("Digite o total de horas extras trabalhadas no ano: ");
    scanf("%lf", &horas_extras);

    salario_bruto = horas_normais * 10.0 + horas_extras * 15.0;
    imposto = salario_bruto > 12000.0
                  ? (salario_bruto - 12000.0) * 0.10
                  : 0.0;

    printf("Salario anual bruto: R$ %.2f\n", salario_bruto);
    printf("Imposto a pagar: R$ %.2f\n", imposto);

    return 0;
}
```
