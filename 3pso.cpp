
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

#define individuo 6
#define V 2
#define P 4
#define dimensao 5

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
    float velocity_x[individuo][dimensao] = {0.0};
    float funcao_x = 0.0;
    float funcao_pbest = 0.0;
    float gbest[1][dimensao] = {999.99};
    float pbest[individuo][dimensao] = {0.0};
    float pbestfitness[individuo];
    float fitness[individuo];
    float gbestfitness[individuo] = {9999999.99};

    for (int i = 0; i < individuo; i++)
    {

        printf("\n");
        printf("x%d: {", i);
        for (int j = 0; j < dimensao; j++)
        {

            if (j % 2)
            {
                x[i][j] = (((float)rand() / (float)(RAND_MAX)*5.0) * -1);
            }
            else
            {
                x[i][j] = (((float)rand() / (float)(RAND_MAX)*5.0));
            }

            printf(" %.2f", x[i][j]);
            // funcao_x = funcao_x + pow(x[j], 2);

            pbest[i][j] = x[0][j];
        }
        printf(" }");
        if (i > 0)
        {
            if (sphere(pbest[i - 1]) < sphere(pbest[i]))
            {
                for (int j = 0; j < dimensao; j++)
                {
                    pbest[i][j] = pbest[i - 1][j];
                }
            }
        }
        //printf("\npbest normal %.2f", sphere(pbest[i]));
        fitness[i] = sphere(x[i]);
        printf("\nf(x%d): %.2f", i, fitness[i]);
        //printf("\n");

        // printf("\nx antes (pbest%d): %.2f", i, sphere(x[i]));
        if (sphere(x[i]) < sphere(pbest[i]))
        {
            // printf("\nif pbest");
            for (int j = 0; j < dimensao; j++)
            {
                pbest[i][j] = x[i][j];
                // printf(" %.2f", pbest[i][j]);
            }
        }
        pbestfitness[i] = sphere(pbest[i]);

        if (sphere(pbest[i]) < sphere(gbest[0]))
        {
            for (int j = 0; j < dimensao; j++)
            {
                gbest[0][j] = pbest[i][j];
            }
        }
        gbestfitness[i] = sphere(gbest[0]);
        // }
        // else if (sphere(x[i]) > sphere(pbest[i]))
        // {
        //     for (int j = 0; j < dimensao; j++)
        //     {
        //         pbest[i][j] = x[i-1][j];
        //     }
        // }

        // printf("pbest:%d {", i);
        // for (int j = 0; j < dimensao; j++)
        // {
        //     printf(" %.2f", pbest[i][j]);
        // }

        // printf(" }");
        printf("\nf(pbest%d): %.2f", i, pbestfitness[i]);
        printf("\nf(gbest): %.2f", gbestfitness[i]);
        // printf("\n(pbest%d): %.2f", i, pbest[i]);
        printf("\n");
        //pega primeiro x
        // for (int j = 0; j < dimensao; j++)
        // {

        //     printf("\n xteste: %.2f", x[0][j]);
        // }
        //printf("\npbest: %.2f", sphere(pbest[i]));

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

    //atualizar velocidade da partricula

    for (int i = 0; i < individuo; i++)
    {
        printf("\n\n novo x %d: {", i);
        for (int j = 0; j < dimensao; j++)
        {
            v[i][j] = v[i][j] + ((2 * 0, 5) * (pbest[i][j] - x[i][j])) + ((2 * 0, 8) * (gbestfitness[i] - x[i][j]));

            velocity_x[i][j] = velocity_x[i][j] + v[i][j];
            printf(" %.2f", velocity_x[i][j]);
        }

        printf("}");

        fitness[i] = sphere(velocity_x[i]);
        printf("\nf(velocity_x): %.2f", fitness[i]);
        if (sphere(velocity_x[i]) < sphere(pbest[i]))
        {
            // printf("\nif pbest");
            for (int j = 0; j < dimensao; j++)
            {
                pbest[i][j] = velocity_x[i][j];
                // printf(" %.2f", pbest[i][j]);
            }
        }
        pbestfitness[i] = sphere(pbest[i]);

        if (sphere(pbest[i]) < sphere(gbest[0]))
        {
            for (int j = 0; j < dimensao; j++)
            {
                gbest[0][j] = pbest[i][j];
            }
        }
        gbestfitness[i] = sphere(gbest[0]);
        printf("\nf(pbest%d): %.2f", i, pbestfitness[i]);
        printf("\nf(gbest): %.2f", gbestfitness[i]);
        // printf("\n(pbest%d): %.2f", i, pbest[i]);
        printf("\n");
    }

    // printf("\n");
    // for (int i = 0; i < individuo; i++)
    // {
    //     printf("\n aqui por ultimof(pbest%d): %.2f", i, pbestfitness[i]);
    // }

    // for (int i = 0; i < individuo; i++)
    // {
    //     // if (i > 0)
    //     // {
    //     //     printf("\npbest-1: %.2f", sphere(pbest[i - 1]));
    //     //     printf("\npbest: %.2f", sphere(pbest[i]));
    //     //     if (sphere(pbest[i - 1]) < sphere(pbest[i]))
    //     //     {

    //     //         for (int j = 0; j < dimensao; j++)
    //     //         {
    //     //             *pbest[i] = *pbest[i - 1];
    //     //         }
    //     //     }
    //     // }
    //     if (sphere(x[i]) < sphere(pbest[i]))
    //     {
    //         printf("\nif f(x): [%.2f], [%.2f]", sphere(x[i]), sphere(pbest[i]));
    //         for (int j = 0; j < dimensao; j++)
    //         {
    //             pbest[i][j] = x[i][j];
    //         }
    //     }
    //     // if (sphere(pbest[i]) < sphere(gbest[i]))
    //     printf("\nif pbest: [%.2f]", sphere(pbest[i]));
    // {
    //     for (int j = 0; j < dimensao; j++)
    //     {
    //         gbest[i][j] = pbest[i][j];
    //     }
    // }
    // printf("\n");
    // printf("f(x%d): [%.2f]", i, sphere(x[i]));
    // printf("\npbest: [%.2f]", sphere(pbest[i]));
    // printf("\ngbest: [%.2f]", sphere(gbest[i]));
    // printf("\n");
    // }

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