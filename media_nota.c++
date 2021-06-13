#include <stdio.h>

int main()
{
    float nota0, nota1, nota2;
    printf("entre com a 1a. nota: ");
    scanf("%f", &nota0);
    printf("entre com a 2a. nota: ");
    scanf("%f", &nota1);
    printf("entre com a 3a. nota: ");
    scanf("%f", &nota2);
    printf("mé1dia = %.2f", (nota0 + nota1 + nota2) / 3);
    return 0;
}