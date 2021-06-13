#include <stdio.h>
#define alunos 20

int main()
{
    int i, ult;
    float notas[2], media = 0.0;
    for (i = 0; i < 2; i++)
    {

        printf("Entre com a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        if (notas[i] < 0)
        {
            printf("i %d", i);
            ult = i;

            break;
        }
        media = media + notas[i];
    }
    printf("\nMedia= %f\n", media / ult);
    printf("ult %d", ult);
    for (i = 0; i < ult; i++)
    {
        // printf("\n Nota do aluno %d= ", i + 1);
        // printf("%f \n", notas[i]);
    }
    return 0;
}