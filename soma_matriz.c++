/*Leitura de duas matrizes e exibição da soma delas. A condição necessária é
que as matrizes tenham as mesmas dimensões.
*/
#include <stdio.h>
int main()
{
    int m1[10][10], m2[10][10], msoma[10][10], linhas, colunas, i, j;
    printf("Digite o numero de linhas das matrizes: ");
    scanf("%d", &linhas);
    printf("Digite o numero de colunas das matrizes: ");
    scanf("%d", &colunas);
    printf("\n\nEntrada da matriz1:\n\n");
    for (i = 0; i < linhas; i++)
        for (j = 0; j < colunas; j++)
        {
            printf("Elemento [%d,%d]:", i + 1, j + 1);
            scanf("%d", &m1[i][j]);
        }
    printf("\n\nEntrada da matriz2:\n\n");
    for (i = 0; i < linhas; i++)
        for (j = 0; j < colunas; j++)
        {
            printf("Elemento [%d,%d]:", i + 1, j + 1);
            scanf("%d", &m2[i][j]);
            msoma[i][j] = m1[i][j] + m2[i][j];
        }
    printf("\n\nExibicao da matriz soma:\n\n");
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
            printf("%d ", msoma[i][j]);
        printf("\n");
    }
    return 0;
}