/*Para cada posição do vetor, coloca nele o menor elemento do subvetor que 
começa nesta posição e vai até a última. O primeiro for fixa posições 
incrementalmente crescentes para nelas colocar os menores elementos dos subvetores. 
Osegundo for varre o subvetor à procura do seu menor elemento. 
Selecionado este menor elemento, realiza a troca deste elemento com o da posição fixada no
primeiro for.
*/
#include <stdio.h>
#define TAM 10

int main()
{
    int vetor[TAM] = {9, 17, 6, 4, 15, 3, 2, 13, 4, 1};
    int i, j, k, menor;
    for (i = 0; i <= TAM - 2; i++)
    {
        k = i;
        menor = vetor[i];
        printf("\nmenor %d", menor);
        for (j = i + 1; j <= TAM - 1; j++)
            if (vetor[j] < menor)
            {
                k = j;
                menor = vetor[k];
            }
        vetor[k] = vetor[i];
        vetor[i] = menor;
        printf("\nVetor K %d", vetor[k]);
        printf("\nVetor i %d", vetor[i]);
    }
    printf("\nVetor Ordenado\n");
    for (i = 0; i < TAM; i++)
        printf("\n posição [%d] - %d", i, vetor[i]);
    return 0;
}