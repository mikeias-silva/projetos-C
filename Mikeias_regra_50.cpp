#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// vetor de mil posicoes
// aleatoriamente exclui algumas posicoes no vetor
// irão gerar buracos
// juntar esses buracos
// Ex. pos 500 até 509 excluido
// imprime e depois
// pos 510 até 550 excluido
// imprime e depoios
// pos 551 até 600 excluido
// exclui 700 até 790
// imprime
// junta tudo do 500 até 600

#define tamMem 1000

// inicia memória disponível indicando como "0"
int memoria[tamMem] = {0};

int proximoehzero(int n)
{

    if (memoria[n] + 1 != 0)
    {
        return 1;
    }

    return proximoehzero(memoria[n] + 1);
}

int main()
{

    // printf("Memoria nao utilizada\n");
    // for (int i = 0; i < tamMem; i++)
    // {
    //     printf("%d ", memoria[i]);
    // }
    // printf("\n\n");

    //(cada posição simula um programa alocado em memória);
    // printf("Processos\n");
    // printf("\n");
    // printf("{ ");
    
    // Inicia cada posição com um valor inteiro, indicando um processo ativo
    for (int i = 0; i < tamMem; i++)
    {
        memoria[i] = i + 1;
        // printf("%d ", memoria[i]);
    }
    // printf("}");

    // printf("\n\n");
    // 50% de probabilidade de cada um dos mil programas serem destruídos
    // printf("Processos encerrados aleatoriamente\n");
    srand(time(0));

    for (int i = 0; i < tamMem; i++)
    {
        int kill = rand() % 2;
        //printf("kill %d", kill);
        // aleatoriamente mata o processo
        //se o valor aleatorio tiver resto 1
        // mata o processo liberando a memoria tornando ele 0
        if (kill == 1)
        {
            memoria[i] = 0;
        }
        // printf("%d ", memoria[i]);
    }

    // printf("\n\n");
    
    //Qntd ativo
    //Conta quantos processos sobraram ativos que são diferentes de 0
    printf("Processos ativos: ");
    int qtdAtivo = 0;
    for (int i = 0; i < tamMem; i++)
    {
        if (memoria[i] != 0)
        {
            qtdAtivo = qtdAtivo + 1;
        }
    }

    //Qtd processos ativos
    printf("%d \n", qtdAtivo);


    //Conta as lacunas de 0 após os processos serem destruídos
    printf("\nQuantidade lacunas: ");
    int qtdInativo = 0;
    for (int i = 0; i < tamMem; i++)
    {
        if (memoria[i] == 0)
        {
            if (memoria[i + 1] != 0)
            {
                // printf("%d ", i);
                qtdInativo = qtdInativo + 1;
            }
            if (i == tamMem - 1)
            {
                // printf("%d ", i);
                qtdInativo = qtdInativo + 1;
            }
        }
    }
    printf("%d \n", qtdInativo);

    // printf("\n\n");
    // //Liberando espaço de memória
    // printf("Memoria livre\n");
    // for (int i = 0; i < tamMem; i++)
    // {
    //     if (memoria[i] == -1)
    //     {
    //         memoria[i] = 0;
    //     }
    //     printf("%d ", memoria[i]);
    // }

    printf("\n\n");
    return 0;
}