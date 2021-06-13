#include <stdio.h>

int main()
{
    int tabela[10][10], linhas, colunas, i, j;
    printf("digite o numero de linhas: ");
    scanf("%d", &linhas);
    printf("digite o numero de colunas: ");
    scanf("%d", &colunas);
    for (i = 0; i < linhas; i++)
        for (j = 0; j < colunas; j++)
        {
            printf("elemento [%d,%d]:", i + 1, j + 1);
            scanf("%d", &tabela[i][j]);
        }
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
            printf("%d ", tabela[i][j]);
        printf("\n");
    }
    return 0;
}