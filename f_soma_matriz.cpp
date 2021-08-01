#include <stdio.h>
#include <stdlib.h>

int menor_elemento(int mat[][100], int m, int n)
{
    int i, j, menor;
    menor = mat[0][0];
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            if (mat[i][j] < menor)
                menor = mat[i][j];
    return menor;
}

int soma_vetor(int mat[][100], int m, int n)
{
    int i, j, menor;
    int soma = 0;
    menor = mat[0][0];
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
        soma = soma + mat[i][j];
    
    return soma;
}
int main()
{
    int matriz[100][100];
    int i, j, n, colunas, linhas, qtde;
    printf("\nDigite o numero de linhas da matriz (max=100): ");
    scanf("%d", &linhas);
    printf("\nDigite o numero de colunas da matriz (max=100): ");
    scanf("%d", &colunas);
    qtde = linhas * colunas;
    n = 1;
    printf("\nDigite os elementos da matriz: \n");
    for (i = 0; i < linhas; i++)
        for (j = 0; j < colunas; j++)
        {
            printf("\nDigite o elemento %d/%d da posicao [%d][%d]: ",
                   n++, qtde, i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    printf("\n\nMenor elemento da matriz: %d \n", menor_elemento(matriz, linhas, colunas));
    printf("Soma da matriz: %d\n\n", soma_vetor(matriz, linhas, colunas));
    //printf("%d ", );
    return 0;
}