/*Troca direta
Também coloca em cada posição do vetor, a partir do primeiro, o menor 
elemento do subvetor que começa nesta posição e vai até a última, 
como no método da seleção direta, porém, traz este menor elemento realizando trocas entre
os elementos. O primeiro for fixa posições incrementalmente crescentes para
nelas colocar os menores elementos dos subvetores. Com o segundo for 
começa comparando se o penúltimo elemento é maior que o último. Se for, efetua a
troca, utilizando a variável auxiliar aux. E continua com as comparações e 
trocas em posições incrementalmente decrescentes, até comparar o elemento da
posição fixada no primeiro for e seu subsequente. Como este método vai 
trazendo os menores elementos para cima, à semelhança de bolhas que sobem à
superfície, este método também é chamado de bubblesort.
*/

#define TAM 10
#include <stdio.h>

int main()
{
    int vetor[TAM] = {4, 7, 6, 5, 8, 9, 3, 2, 0, 1};
    int i, j, aux;
    for (i = 0; i <= TAM - 1; i++)
        for (j = TAM - 2; j >= i; j--)
        {
            if (vetor[j] > vetor[j + 1])
            {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }

    printf("Vetor Ordenado\n\n");
    for (i = 0; i < TAM; i++)
        printf("\n %d - %d", i, vetor[i]);
    return 0;
}