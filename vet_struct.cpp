#include <string.h>
#include <stdio.h>
main()
{
    typedef struct pessoa
    {
        int idade;
        float salario;
    } cliente;
    cliente clientela[100];
    int i, n;
    printf("Informe o numero de clientes: ");
    scanf("%d", &n);
    printf("\n\nEntrada dos dados dos clientes \n\n");
    for (i = 0; i < n; i++)
    {
        printf("\nInforme os dados do Cliente %d: \n", i + 1);
        printf("Idade: ");
        scanf("%d", &clientela[i].idade);
        printf("Salario: ");
        scanf("%f", &clientela[i].salario);
    }
    printf("\n\nExibicao dos dados dos clientes \n\n");
    for (i = 0; i < n; i++)
    {
        printf("Cliente %d Idade: %d anos - ", i + 1, clientela[i].idade);
        printf("Salario: R$%8.2f: \n", clientela[i].salario);
    }
    
}