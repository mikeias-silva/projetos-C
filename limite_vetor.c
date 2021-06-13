// Variáveis homogêneas - verificando limites
//  A linguagem C não realiza verificação de limites em vetores e matrizes.Isto é,
//     nada impede que uma instrução C efetue o acesso além do limite do vetor,
// o que poderá gerar resultados imprevisíveis.Por esse motivo, é sempre muito
// importante garantir os corretos valores dos índices e, de preferência,
// efetuar a verificação dos limites, como no exemplo a seguir :

#define TAM 100
#include <stdio.h>
int main()
{
    int alunos[TAM], quantidade;
    do
    {
        printf("\n\nInforme o numero de alunos (max = %d): ", TAM);
        scanf("%d", &quantidade);
        if (quantidade > TAM)
            printf("\nNro excessivo de alunos %d eh > %d.", quantidade, TAM);
        else
            printf("\nNro valido de alunos %d....", quantidade);
    } while (quantidade > TAM);
    return 0;
}