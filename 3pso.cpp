
#include <stdlib.h>
#include <iostream>
#include <string>
#include <stdio.h>
#include <cstdlib>
#include <ctime>
#include <math.h>
#include <numeric>    // std::accumulate
#include <functional> // std::minus
using namespace std;

#define D 3

#define individuo 4
#define V 2
#define P 4
#define dimensao 3

float sphere(float vetor[])
{
    float soma = 0.0;
 
        for (int j = 0; j < dimensao; j++)
        {
            soma = soma + pow(vetor[j], 2);
        }
 

    return soma;
}

int main()
{
    srand(time(0));
    float x[individuo][dimensao] = {0.0};
    float v[individuo][dimensao] = {0.0};
    float funcao_x = 0.0;
    float funcao_pbest = 0.0;
    float gbest[individuo][dimensao] = {999.99};
    float pbest[individuo][dimensao] = {0.0};

    for (int i = 0; i < individuo; i++)
    {
        printf("========");
        printf("\n");
        printf("x:%d {", i);
        for (int j = 0; j < dimensao; j++)
        {

            x[i][j] = (((float)rand() / (float)(RAND_MAX)*5.0) * -1);
            printf(" %.2f", x[i][j]);
            // funcao_x = funcao_x + pow(x[j], 2);

            if (i == 0)
            {
                printf("oi");
                pbest[i][j] = x[i][j];
                //funcao_pbest = funcao_pbest + pow(pbest[j], 2);
            }
        }
        printf(" }");
        if (sphere(x[i]) < sphere(pbest[i]))
        {
            printf("\nif f(x): [%.2f]", sphere(x[i]));
            for (int j = 0; j < dimensao; j++)
            {
                pbest[i][j] = x[i][j];
            }
        }
        if (sphere(pbest[i]) < sphere(gbest[i]))
            printf("\nif pbest: [%.2f]", sphere(pbest[i]));
        {
            for (int j = 0; j < dimensao; j++)
            {
                gbest[i][j] = pbest[i][j];
            }
        }
        printf("\n");
        printf("f(x): [%.2f]", sphere(x[i]));
        printf("\npbest: [%.2f]", sphere(pbest[i]));
        printf("\ngbest: [%.2f]", sphere(gbest[i]));
        printf("\n");

        // printf("pbest \n");

        // for (int j = 0; j < dimensao; j++)
        // {
        //     printf(" %.2f", pbest[i][j]);
        // }

        // printf("\nsphere: [%.2f]", sphere(pbest));

        // printf("\n");
        // printf("\ngbest \n");
        // for (int j = 0; j < dimensao; j++)
        // {
        //     printf(" %.2f", gbest[i][j]);
        // }
        // printf("\nsphere: [%.2f]", sphere(gbest));
    }

    //funcao_x = funcao_x + (x[dimensao] * x[dimensao]);
    // x na posicao do individuo (i)
    //x[0] = -3.89 -0.49 -4.51

    //sphere = x0² + x1² + x2²

    //verificar e iniciar o pbest
    // atualizar velocidade da partricula
    // for (int i = 0; i < individuo; i++)
    // {
    //     printf("\n\n novo x %d: {", i);
    //     for (int j = 0; j < dimensao; j++)
    //     {
    //         v[i][j] = v[j] + ((2 * 0, 5) * (pbest[j] - x[j])) + ((2 * 0, 8) * (gbest[j] - x[j]));
    //         x[j] = x[j] + v[j];

    //         printf(" %.2f", x[j]);
    //     }
    //     printf("}");
    // }

    return 0;
}