//Terceiro exemplo : leitura de três notas de um grupo de alunos, com o cálculo
// da média de cada um e determinação de seus critérios de aprovação.Exibição dos
// valores em forma de tabela(código, notas, médias e critério).
#include <stdio.h>

int main()
{
    float nota1[100], nota2[100], nota3[100], media[100];
    int codigo[100];
    int i, n;
    printf("\n Num. alunos (max=100): ");
    scanf("%d", &n);
    printf("\nDigite os codigos e notas dos alunos: \n");
    for (i = 0; i < n; i++)
    {
        printf("\ncodigo: ");
        scanf("%d", &codigo[i]);
        printf("nota 1: ");
        scanf("%f", &nota1[i]);
        printf("nota 2: ");
        scanf("%f", &nota2[i]);
        printf("nota 3: ");
        scanf("%f", &nota3[i]);
        media[i] = (nota1[i] + nota2[i] + nota3[i]) / 3.0;
    }
    printf("\nImpressao dos codigos, media e condicao: \n");
    printf("\nCodigo | Nota 1 | Nota 2 | Nota 3 | Media Criterio\n");
    for (i = 0; i < n; i++)
    {
        printf("\n%d | %2.2f | %2.2f |%2.2f | média %2.2f ", codigo[i], nota1[i], nota2[i], nota3[i], media[i]);
        if (media[i] >= 5)
            printf(" Aprovado");
        else
            printf(" Reprovado");
    }
    
    return 0;
}