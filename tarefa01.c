/* Atividade proposta
Definir uma constante D, mínimo = 10
Definir uma constante i, mínimo = 10
Gerar, aleatoriamente um vetor x(i), de dimensão D, com qualquer valor aleatório
(positivo ou negativo), porém, REAL

Gerar, aleatoriamente um vetor v(i), de dimensão D, com qualquer valor aleatório
(positivo ou negativo), porém, REAL

Gerar, aleatoriamente um vetor p(i), de dimensão D, com qualquer valor aleatório
(positivo ou negativo), porém, REAL

Aplicar equação Somatório (x(i))^2
i = 20
D = 15
I = 20
D = 15
x1 = [-2.2; -4; 10; 55; 120;11;-19;-12;-1.5;11.5;87;66;44;90.1;33.2]
x2 = ........
x3 = .......
x20=...........................
Eq = (-2.2)*(-2.2) + (-4*-4) + (10*10) + (55*55) +...+ (33.2*33.2) = ? 


*/
#include <iostream>
#include <string>
#include <stdio.h>

#define D 10
#define TAM 10
char nome[20], palavrao[128];
//string nome2[20];

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    float x[D],v[TAM], p[TAM];
    x[0] = 2,23123;
    printf("x %.2f", x[0]);



    return 0;
}
