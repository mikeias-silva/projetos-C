/*Analisa cada elemento do vetor, da segunda posição (índice 1) até a última
(posição n-1), e o insere na sua posição ordenada, abaixo no vetor. A estrutura
for fixa as posições incrementalmente crescentes para analisar os elementos
nestas posições. Salva-se este elemento na variável aux. A estrutura while
executa enquanto existirem, abaixo no vetor, valores maiores que o elemento
(aux), estes últimos sejam alçados a uma posição acima. Quando é encontrada
uma posição [j-1] com valor menor que o elemento em questão (vetor[j-1]<aux),
a execução da estrutura while é interrompida e na posição [j] (cujo valor já foi
alçado a uma posição superior na iteração anterior) é inserido o elemento em
análise. A ênfase é colocar cada elemento na posição relativa correta.


 A expressão(j > 0) dentro da condição de continuação do while é necessária 
 para o caso do elemento em análise ser o menor do vetor, para que não seja 
 testada uma posição menor que a[0].
*/
#define TAM 3
#include <stdio.h>

int main()
{

    int i, j, aux, n, t;

    printf("\n Insira o tamanho do vetor: ");
    scanf("%d", &t);

    int vetor[t];
    for (int p = 0; p < t; p++)
    {
        printf("\n Insira os elementos do vetor: ");
        scanf("%d", &n);
        vetor[p] = n;
    }

    for (i = 1; i <= t - 1; i++)
    {
        aux = vetor[i];
        j = i;
        while ((j > 0) && (aux < vetor[j - 1]))
        {
            vetor[j] = vetor[j - 1];
            j = j - 1;
        }
        vetor[j] = aux;
    }
    printf("Vetor Ordenado\n");
    for (i = 0; i < t; i++)
        printf("\n %d - %d", i, vetor[i]);
    return 0;
}