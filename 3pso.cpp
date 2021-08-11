
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

#define individuos 4
#define V 2
#define P 4
#define dimensao 3

float sphere(float vetor[dimensao])
{
    float soma = 0.0;
    for (int i = 0; i < dimensao; i++)
    {
        soma = soma + pow(vetor[i], 2);
    }

    return soma;
}

int main()
{
    srand(time(0));
    float x[dimensao] = {0.0};
    float v[dimensao] = {0.0};
    float funcao_x = 0.0;
    float funcao_pbest = 0.0;
    float gbest[dimensao] = {999.99};
    float pbest[dimensao] = {0.0};

    for (int i = 0; i < individuos; i++)
    {

        printf("========");
        printf("\n");
        printf("x:%d {", i);
        for (int j = 0; j < dimensao; j++)
        {

            x[j] = (((float)rand() / (float)(RAND_MAX)*5.0) * -1);
            printf(" %.2f", x[j]);
            funcao_x = funcao_x + pow(x[j], 2);

            if (i == 0)
            {
                pbest[j] = x[j];
                //funcao_pbest = funcao_pbest + pow(pbest[j], 2);
            }
        }
        printf(" }");
        if (sphere(x) < sphere(pbest))
        {
            //printf("\nif f(x): [%.2f]", sphere(x));
            for (int j = 0; j < dimensao; j++)
            {
                pbest[j] = x[j];
            }
        }
        if (sphere(pbest) < sphere(gbest))
            printf("\nif pbest: [%.2f]", sphere(pbest));
        {
            for (int j = 0; j < dimensao; j++)
            {
                gbest[j] = pbest[j];
            }
        }
        printf("\n");
        printf("f(x): [%.2f]", sphere(x));
        printf("\npbest: [%.2f]", sphere(pbest));
        printf("\ngbest: [%.2f]", sphere(gbest));
        printf("\n");
    }
    printf("\n");
    printf("pbest \n");

    for (int j = 0; j < dimensao; j++)
    {
        printf(" %.2f", pbest[j]);
    }
    printf("\nsphere: [%.2f]", sphere(pbest));

    printf("\n");
    printf("\ngbest \n");
    for (int j = 0; j < dimensao; j++)
    {
        printf(" %.2f", gbest[j]);
    }
    printf("\nsphere: [%.2f]", sphere(gbest));
    //funcao_x = funcao_x + (x[dimensao] * x[dimensao]);
    // x na posicao do individuo (i)
    //x[0] = -3.89 -0.49 -4.51

    //sphere = x0² + x1² + x2²

    //verificar e iniciar o pbest

    //atualizar a velicidade e posicao da particula
    //
   
    return 0;
}