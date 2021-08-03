#include <string.h>
#include <stdio.h>
main()
{
    typedef struct pessoa
    {
        char nome[50];
        int idade;
        float salario;
    } cliente;
    cliente Loja_1, Loja_2, Loja_3 = {"Suzi Santos", 26, 345.67};
    // cliente.idade = 33 // atribuicao indevida - erro
    // Loja_1.nome = " Vivian Silva"; // atrib indevida - erro
    strcpy(Loja_1.nome, "Vivian Silva");
    Loja_1.idade = 30;
    Loja_1.salario = 500.89;
    printf("Informe os dados de clientes da Loja_2: \n");
    printf("Nome: ");
    gets(Loja_2.nome);
    printf("Idade: ");
    scanf("%d", &Loja_2.idade);
    printf("Salario: ");
    scanf("%f", &Loja_2.salario);
    printf("\n==> Dados de clientes da Loja_1: \n\n");
    printf(" Nome = %s ", Loja_1.nome);
    printf("Idade = %d anos - ", Loja_1.idade);
    printf("Salario = R$%8.2f \n\n", Loja_1.salario);
    printf("==> Dados de clientes da Loja_2: \n\n");
    printf(" Nome = %s ", Loja_2.nome);
    printf("Idade = %d anos - ", Loja_2.idade);
    printf("Salario = R$%8.2f \n\n", Loja_2.salario);
    printf("==> Dados de clientes da Loja_3: \n\n");
    printf(" Nome = %s ", Loja_3.nome);
    printf("Idade = %d anos - ", Loja_3.idade);
    printf("Salario = R$%8.2f \n\n", Loja_3.salario);
    
}