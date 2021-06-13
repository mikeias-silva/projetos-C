//Segundo Exemplo : leitura de um vetor de números, com tamanho informado pelo
//usuário e determinação do menor elemento :
#define TAM 100
#include <stdio.h>
int main()
{
    int vetor[TAM];
    int cont, tamanho, menor, pos;
    printf("\nDigite o numero de elementos do vetor (max=%d): ", TAM);
    scanf("%d", &tamanho);
    printf("\nDigite os elementos do vetor: \n");
    for (cont = 0; cont < tamanho; cont++)
        scanf("%d", &vetor[cont]);
    menor = vetor[0];
    for (cont = 0; cont < tamanho; cont++)
        if (vetor[cont] < menor)
        {
            menor = vetor[cont];
            pos = cont - 1;
        }

    printf("\nMenor elemento= %d", menor);
    printf("\nNa posicao = %d", pos);
    return 0;
}