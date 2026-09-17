# Lista de Exercícios — Capítulo 2 — Código das Questões

## Questão 01

```c
#include <stdio.h>
#include <math.h>

int main(void) {
    int valor_inteiro;
    double valor = 2.97;

    valor_inteiro = valor;

    printf("Valor armazenado no int: %d\n", valor_inteiro);
    printf("Valor mantendo a precisao: %.2f\n", valor);
    printf("Arredondado: %.0f\n", round(valor));

    return 0;
}
```

## Questão 02

```c
#include <stdio.h>

int main(void) {
    int caractere;

    printf("Digite um caractere: ");

    do {
        caractere = getchar();
    } while (caractere == '\n');

    if (caractere != EOF) {
        printf("Caractere lido: ");
        putchar(caractere);
        putchar('\n');
    }

    return 0;
}
```

## Questão 03

```c
#include <stdio.h>

int main(void) {
    int valor;

    printf("Digite um numero inteiro: ");
    scanf("%d", &valor);

    printf("Decimal: %d | Hexadecimal: %x | Octal: %o | ASCII: %c\n",
           valor,
           (unsigned int)valor,
           (unsigned int)valor,
           valor);

    return 0;
}
```

## Questão 04

```c
#include <stdio.h>

int main(void) {
    int a = 1, b = 2, c = 3, d = 4;

    a += b + c;
    printf("1) a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

    b *= c = d + 2;
    printf("2) a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

    d %= a + a + a;
    printf("3) a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

    d -= c -= b -= a;
    printf("4) a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

    a += b += c += 7;
    printf("5) a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

    return 0;
}
```

## Questão 05

```c
#include <stdio.h>

int main(void) {
    int i = 1, j = 2, k = 3, n = 2;
    float x = 3.3f, y = 4.4f;

    printf("a) %d\n", i < j + 3);
    printf("b) %d\n", 2 * i - 7 <= j - 8);
    printf("c) %d\n", -x + y >= 2.0f * y);
    printf("d) %d\n", x == y);
    printf("e) %d\n", !(n - j));
    printf("f) %d\n", !n - j);
    printf("g) %d\n", i && j && k);
    printf("h) %d\n", i || j - 3 && k);
    printf("i) %d\n", i < j && 2 >= k);
    printf("j) %d\n", i == 2 || j == 4 || k == 5);

    return 0;
}
```

## Questão 06

```c
#include <stdio.h>

int main(void) {
    int n = 5;
    int x = ++n;

    printf("Trecho A: n = %d, x = %d\n", n, x);

    int m = 5;
    int y = m++;

    printf("Trecho B: m = %d, y = %d\n", m, y);

    n = 5;

    /* Evita: printf("%d\t%d\t%d\n", n, n + 1, n++); */
    printf("%d\t%d\t%d\n", n, n + 1, n);
    n++;

    return 0;
}
```

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

    /* O divisor precisa ser diferente de zero. */
    printf("Divisao real: %.2f\n", (double)a / b);

    return 0;
}
```

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

## Questão 12

```c
#include <stdio.h>

int main(void) {
    int numero;
    int antecessor;
    int sucessor;

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

## Questão 13

```c
#include <stdio.h>

int main(void) {
    double lado;
    double base_retangulo, altura_retangulo;
    double base_triangulo, altura_triangulo;

    printf("Digite o lado do quadrado: ");
    scanf("%lf", &lado);

    printf("Digite a base e a altura do retangulo: ");
    scanf("%lf %lf", &base_retangulo, &altura_retangulo);

    printf("Digite a base e a altura do triangulo: ");
    scanf("%lf %lf", &base_triangulo, &altura_triangulo);

    printf("Area do quadrado: %.2f\n", lado * lado);
    printf("Area do retangulo: %.2f\n", base_retangulo * altura_retangulo);
    printf("Area do triangulo: %.2f\n", (base_triangulo * altura_triangulo) / 2.0);

    return 0;
}
```

## Questão 14

```c
#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, c;
    double p, area;

    printf("Digite os tres lados do triangulo: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    p = (a + b + c) / 2.0;
    area = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("Area: %.2f\n", area);

    return 0;
}
```

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

## Questão 16

```c
#include <stdio.h>
#include <math.h>

int main(void) {
    double altura_degrau_cm;
    double altura_total_m;
    double altura_total_cm;
    int quantidade_degraus;

    printf("Digite a altura de cada degrau em centimetros: ");
    scanf("%lf", &altura_degrau_cm);

    printf("Digite a altura total em metros: ");
    scanf("%lf", &altura_total_m);

    altura_total_cm = altura_total_m * 100.0;
    quantidade_degraus = (int)ceil(altura_total_cm / altura_degrau_cm);

    printf("Numero minimo de degraus: %d\n", quantidade_degraus);

    return 0;
}
```

## Questão 17

```c
#include <stdio.h>

int main(void) {
    const double PI = 3.141593;
    double raio;
    double area;
    double circunferencia;

    printf("Digite o raio do circulo: ");
    scanf("%lf", &raio);

    area = PI * raio * raio;
    circunferencia = 2.0 * PI * raio;

    printf("Area: %.2f\n", area);
    printf("Circunferencia: %.2f\n", circunferencia);

    return 0;
}
```

## Questão 18

```c
#include <stdio.h>

int main(void) {
    const double PI = 3.141593;
    double raio;
    double area;
    double volume;

    printf("Digite o raio da esfera: ");
    scanf("%lf", &raio);

    area = 4.0 * PI * raio * raio;
    volume = (4.0 / 3.0) * PI * raio * raio * raio;

    printf("Area da superficie: %.2f\n", area);
    printf("Volume: %.2f\n", volume);

    return 0;
}
```

## Questão 19

```c
#include <stdio.h>

int main(void) {
    const double VALOR_DIA = 30.0;
    const double TAXA_IR = 0.08;

    int dias;
    double bruto, imposto, liquido;

    printf("Digite a quantidade de dias trabalhados: ");
    scanf("%d", &dias);

    bruto = dias * VALOR_DIA;
    imposto = bruto * TAXA_IR;
    liquido = bruto - imposto;

    printf("Valor bruto: R$ %.2f\n", bruto);
    printf("Valor liquido: R$ %.2f\n", liquido);

    return 0;
}
```

## Questão 20

```c
#include <stdio.h>
#include <math.h>

int main(void) {
    double lado_a, lado_b;
    double hipotenusa;

    printf("Digite os dois catetos: ");
    scanf("%lf %lf", &lado_a, &lado_b);

    hipotenusa = sqrt(lado_a * lado_a + lado_b * lado_b);

    printf("Hipotenusa: %.2f\n", hipotenusa);

    return 0;
}
```

## Questão 21

```c
#include <stdio.h>

int main(void) {
    char caractere;

    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    /* O numero representa o codigo ASCII associado ao caractere. */
    printf("Caractere: %c\n", caractere);
    printf("Codigo ASCII: %d\n", (unsigned char)caractere);

    return 0;
}
```

## Questão 22

```c
#include <stdio.h>

int main(void) {
    char maiuscula;
    char minuscula;

    printf("Digite uma letra maiuscula: ");
    scanf(" %c", &maiuscula);

    minuscula = maiuscula - 'A' + 'a';

    printf("Letra minuscula: %c\n", minuscula);

    return 0;
}
```

## Questão 23

```c
#include <stdio.h>

int main(void) {
    int hora_inicio;
    int minuto_inicio;
    int segundo_inicio;
    int duracao_segundos;
    int total_segundos;
    int hora_final;
    int minuto_final;
    int segundo_final;

    printf("Digite hora, minuto e segundo do inicio: ");
    scanf("%d %d %d", &hora_inicio, &minuto_inicio, &segundo_inicio);

    printf("Digite a duracao em segundos: ");
    scanf("%d", &duracao_segundos);

    total_segundos = hora_inicio * 3600
                   + minuto_inicio * 60
                   + segundo_inicio
                   + duracao_segundos;

    total_segundos %= 24 * 3600;

    hora_final = total_segundos / 3600;
    total_segundos %= 3600;
    minuto_final = total_segundos / 60;
    segundo_final = total_segundos % 60;

    printf("%02d:%02d:%02d\n", hora_final, minuto_final, segundo_final);

    return 0;
}
```

## Questão 24

```c
#include <stdio.h>

int main(void) {
    double km_h;
    double m_s;

    printf("Digite a velocidade em km/h: ");
    scanf("%lf", &km_h);

    m_s = km_h / 3.6;

    printf("Velocidade em m/s: %.2f\n", m_s);

    return 0;
}
```

## Questão 25

```c
#include <stdio.h>

int main(void) {
    double salario_base;
    double gratificacao;
    double imposto;
    double salario_liquido;

    printf("Digite o salario-base: R$ ");
    scanf("%lf", &salario_base);

    gratificacao = salario_base * 0.05;
    imposto = salario_base * 0.07;
    salario_liquido = salario_base + gratificacao - imposto;

    printf("Gratificacao: R$ %.2f\n", gratificacao);
    printf("Imposto: R$ %.2f\n", imposto);
    printf("Salario liquido: R$ %.2f\n", salario_liquido);

    return 0;
}
```

## Questão 26

```c
#include <stdio.h>

int main(void) {
    double comprimento;
    double largura;
    double preco_metro;
    double perimetro;
    double metros_arame;
    double custo_total;

    printf("Digite o comprimento do terreno em metros: ");
    scanf("%lf", &comprimento);

    printf("Digite a largura do terreno em metros: ");
    scanf("%lf", &largura);

    printf("Digite o preco do metro de arame: R$ ");
    scanf("%lf", &preco_metro);

    perimetro = 2.0 * (comprimento + largura);
    metros_arame = perimetro * 3.0;
    custo_total = metros_arame * preco_metro;

    printf("Metros de arame: %.2f m\n", metros_arame);
    printf("Custo total: R$ %.2f\n", custo_total);

    return 0;
}
```

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

## Questão 28

```c
#include <stdio.h>

int main(void) {
    double horas_normais;
    double horas_extras;
    double salario_bruto;
    double imposto;

    printf("Digite o total anual de horas normais: ");
    scanf("%lf", &horas_normais);

    printf("Digite o total anual de horas extras: ");
    scanf("%lf", &horas_extras);

    salario_bruto = horas_normais * 10.0 + horas_extras * 15.0;

    imposto = salario_bruto > 12000.0
        ? (salario_bruto - 12000.0) * 0.10
        : 0.0;

    printf("Salario anual bruto: R$ %.2f\n", salario_bruto);
    printf("Imposto devido: R$ %.2f\n", imposto);

    return 0;
}
```
