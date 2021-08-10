/* Atividade proposta
Definir uma constante D, mínimo = 10
Definir uma constante i, mínimo = 10

Gerar, aleatoriamente um vetor x(i), de dimensão D, com qualquer valor aleatório (positivo ou negativo), porém, REAL

Gerar, aleatoriamente um vetor v(i), de dimensão D, com qualquer valor aleatório (positivo ou negativo), porém, REAL

Gerar, aleatoriamente um vetor p(i), de dimensão D, com qualquer valor aleatório (positivo ou negativo), porém, REAL

Aplicar equação Somatório (x(i))^2
i = 20
D = 15
I = 20
D = 15
x1 = [-2.2; -TAM; 10; 55; 120;11;-19;-12;-1.5;11.5;87;66;TAMTAM;90.1;33.2]
x2 = ........
x3 = .......
x20=...........................
Eq = (-2.2)*(-2.2) + (-TAM*-TAM) + (10*10) + (55*55) +...+ (33.2*33.2) = ? 


*/

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

#define X 4
#define V 2
#define P 4
#define TAM 3

float x[X], v[V], p[P], novo_x[X];
float soma = 0;

float aux_x[TAM][X], aux_novo_x[TAM][X];

//pbest é um vetor identico ao X
float pbest[X][TAM];

//Gbest é um vetor do melhor pbest
//float gbest[X][TAM] = {0};
float gbest = 9.99;
float global_best()
{
    float res = gbest * gbest;
    return res;
}

float f_pbest(float pbest)
{
    return pbest * pbest;
}

float f_novo_x(float arr[])
{
    soma = 0;

    for (int k = 0; k < X; k++)
    {
        arr[k] = pow(arr[k], 2);
        //printf("\narr %.2f\n ", arr[k]);
    }
    // Somar vetor
    float aux = 0;
    for (int m = 0; m < X; m++)
    {
        aux = arr[m];
        soma += aux;
    }
    //printf("\nprint novo x %d", soma);
    return soma;
}

int f_vetor_x()
{
    // Vetor X
    printf("\n%d Individuos X com %d elementos \n", TAM, X);
    for (int u = 0; u <= TAM; u++)
    {
        for (int i = 0; i < X; i++)
        {
            if (i % 2)
            {
                float j = (((float)rand() / (float)(RAND_MAX)*5.0) * -1);
                x[i] = j;
                aux_x[u][i] = j;
            }
            else
            {
                float j = (((float)rand() / (float)(RAND_MAX)*5.0));
                x[i] = j;
                aux_x[u][i] = j;
            }
        }
        printf("\nXi[%d]: ", u);

        printf("{ ");
        for (int k = 0; k < X; k++)
        {

            printf("%.2f, ", x[k]);
        }
        printf("}");

        //inicializa o pbest de cada individuo
        for (int i = 0; i < X; i++)
        {
            pbest[u][i] = x[i];
            printf("\npbest[%.2f]: ", pbest[u][i]);
        }

        //printf("\n\nVetor ao quadrado: ");
        for (int k = 0; k < X; k++)
        {
            x[k] = pow(x[k], 2);
            // printf("%f ", x[k]);
        }
        // Somar vetor
        float aux = 0;
        for (int m = 0; m < X; m++)
        {
            aux = x[m];
            soma += aux;
        }

        printf("\nf(x)%d: [%.2f]\n", u, soma);
        //  printf("fglobalbest %.2f\n ", gbest);
        // if (f_pbest(pbest[u]) < gbest)
        // {
        //     //    printf("pbest gbest atualizado %f\n", pbest[u] * pbest[u]);
        //     gbest = pbest[u] * pbest[u];
        //     // float gbests[] = {
        //     //     1.82,
        //     //     -2.57,
        //     //     4.76,
        //     //     -4.58,
        //     // };
        // }

        // for (int i = 0; i < X; i++)
        // {
        //     v[u] = ((2 * 0, 5) * (pbest[u] - x[i])) + ((2 * 0, 8) * (gbest - x[i]));
        //     novo_x[i] = x[i] + v[u];
        //     aux_novo_x[u][i] = novo_x[i];
        //     //printf("\n aqui vetor Xi[%d] %.2f", i, novo_x[i]);
        // }

        printf("novo_Xi[%d]", u);
        printf("{");
        for (int i = 0; i < X; i++)
        {
            printf(" %.2f, ", novo_x[i]);
        }
        printf("}");
        printf("\n");
        printf("novo_f(x)%d: [%.2f]\n", u, f_novo_x(novo_x));
        // if ((f_novo_x(novo_x)) < (pbest[u] * pbest[u]))
        // {

        //     pbest[u] = f_novo_x(novo_x);
        //     //printf("if teste fx %.2f", f_novo_x(novo_x));
        //     if ((pbest[u] * pbest[u]) < gbest)
        //     {
        //         gbest = pbest[u] * pbest[u];
        //     }
        // }
    }

    // for (int t = 0; t < X; t++)
    // {
    //     printf("\nvetor x[%d] posicao t%d: [%.2f]", t, t, x[t]);
    // }

    return 0;
}

int f_vetor_v()
{
    //Vetor V
    //    printf("\n\nVetor V");
    for (int u = 0; u <= TAM; u++)
    {
        for (int i = 0; i <= V; i++)
        {
            if (i % 2)
            {
                float j = (((float)rand() / (float)(RAND_MAX)*5.0) * -1);
                v[i] = j;
            }
            else
            {
                float j = (((float)rand() / (float)(RAND_MAX)*5.0));
                v[i] = j;
            }
        }
        //   printf("\nVetor V[%d] gerado: ", u);
        for (int k = 0; k <= V; k++)
        {
            // printf("%.2f ", v[k]);
        }
        //printf("\n\nVetor ao quadrado: ");
        // for (int k = 0; k < V; k++)
        // {
        //     v[k] = pow(v[k], 2);
        //     // printf("%f ", x[k]);
        // }
        // Somar vetor
        float aux = 0;
        // for (int m = 0; m < V; m++)
        // {
        //     aux = v[m];
        //     soma += aux;
        // }
        // printf("\nSoma do vetor V[%d] ao quadrado %.2f\n", u, soma);
    }
    return 0;
}

int f_vetor_p()
{
    //Vetor P
    // printf("\n\nVetor P");
    for (int u = 0; u <= TAM; u++)
    {
        for (int i = 0; i < V; i++)
        {
            if (i % 2)
            {
                float j = (((float)rand() / (float)(RAND_MAX)*5.0) * -1);
                p[i] = j;
            }
            else
            {
                float j = (((float)rand() / (float)(RAND_MAX)*5.0));
                p[i] = j;
            }
        }
        // printf("\nVetor P[%d] gerado: ", u);
        for (int k = 0; k < P; k++)
        {
            // printf("%f ", p[k]);
        }
        //printf("\n\nVetor ao quadrado: ");
        for (int k = 0; k < P; k++)
        {
            p[k] = pow(p[k], 2);
            // printf("%f ", x[k]);
        }
        // Somar vetor
        float aux = 0;
        for (int m = 0; m < P; m++)
        {
            aux = p[m];
            soma += aux;
        }
        // printf("\nSoma do vetor P[%d] ao quadrado %.2f\n", u, soma);
    }
    return 0;
}

float vetor_x[4][4] = {
    {-90, 98, 9.88, 66.4},
    {-5.95, -84.96, -55, 98},
    {1.99, 9.10, 44, -912},
    {-0.913, 0.970, 915, 1},
};

int main()
{
    f_vetor_x();

    printf("\n");
    printf("\nX{");
    for (int i = 0; i <= TAM; i++)
    {

        printf("\n");
        for (int j = 0; j < X; j++)
        {
            printf("%.2f, ", aux_x[i][j]);
        }
    }
    printf("}");
    printf("\n");
    printf("\nnovo_X{");
    for (int i = 0; i <= TAM; i++)
    {

        printf("\n");
        for (int j = 0; j < X; j++)
        {
            printf("%.2f, ", aux_novo_x[i][j]);
        }
    }
    printf("}");

    printf("\n\ngbest %.2f", gbest);
    //printf("\n\ngbest %.2f", gbest);
    return 0;
}