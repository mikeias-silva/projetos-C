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

float x[X], v[V], p[P];
float soma = 0;

int f_vetor_x()
{
    //Vetor X
    // printf("\n%d Vetores de X com %d elementos cada\n", TAM, X);
    for (int u = 0; u <= TAM; u++)
    {
        for (int i = 0; i < X; i++)
        {
            if (i % 2)
            {
                float j = (((float)rand() / (float)(RAND_MAX)*5.0) * -1);
                x[i] = j;
            }
            else
            {
                float j = (((float)rand() / (float)(RAND_MAX)*5.0));
                x[i] = j;
            }
        }
        // printf("\nVetor x[%d]: ", u);

        // printf("{ ");
        // for (int k = 0; k < X; k++)
        // {
        //     printf("%f, ", x[k]);
        // }
        // printf("}");
        // //printf("\n\nVetor ao quadrado: ");
        // for (int k = 0; k < X; k++)
        // {
        //     x[k] = pow(x[k], 2);
        //     // printf("%f ", x[k]);
        // }
        // // Somar vetor
        // float aux = 0;
        // for (int m = 0; m < X; m++)
        // {
        //     aux = x[m];
        //     soma += aux;
        // }

        //     printf("\nSoma do vetor x[%d] ao quadrado {%.2f}\n", u, soma);
        // }
        // for (int t = 0; t < X; t++)
        // {
        //     printf("\nvetor x[%d] posicao t[%.2f]", t, x[t]);
        // }
    }
    return 0;
}

int vetor_v()
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

int vetor_p()
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

float pbest[4][1] = {0};

float gbest = vetor_x[0][0];
int melhor()
{

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (vetor_x[i][j] == 0)
            {
                gbest = vetor_x[i][j];
            }
            else if (vetor_x[i][j] < gbest)
            {
                gbest = vetor_x[i][j];
            }
        }
    }

    return gbest;
}

int f_quad_x()
{

    float aux[4][4] = {0};
    float aux_soma[4][4] = {0};
    float resultado = 99999.9;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            //ajustar bug
            aux_soma[i][j] = vetor_x[i][j] + vetor_x[i][j];
            aux[i][j] = pow(aux_soma[i][j], 2);
            if (aux[i][j] < resultado)
            {
                resultado = aux[i][j];
            }
        }
    }
    return resultado;
}

int f_quad_pbest()
{

    float aux[4][4] = {0};
    float aux_soma[4][4] = {0};
    int resultado = 999999;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            aux_soma[i][j] = pbest[i][0] + pbest[i][0];
            aux[i][j] = pow(aux_soma[i][j], 2);
            if (aux[i][j] < resultado)
            {
                resultado = aux[i][j];
            }
        }
    }
    return resultado;
}

int main()
{
    // float j = (((float)rand() / (float)(RAND_MAX)*5.0) * -1);
    // float k = (float)rand();
    //printf("j = %d", j);
    //    srand((unsigned)time(0));
    // setlocale(LC_ALL, "Portuguese");

    // vetor_x();
    // vetor_p();
    // vetor_v();
    // int vetor_v[4][4] = {
    //     {-55, 2, 3, 4},
    //     {5, 6, 7, 8},
    //     {9, 10, 11, 12},
    //     {13, 14, 15, 16},
    // };

    printf("vetor X antes de atualizar\n");
    for (int i = 0; i < 4; i++)
    {
        printf("vetor_x [%d] - |", i);
        for (int j = 0; j < 4; j++)
        {
            printf(" %.2f ", vetor_x[i][j]);
        }
        printf("|\n");
    }

    int vetor_v[4][4] = {0};

    // int pbest [4][4]= {
    //     {0,0,0,0},
    //     {0,0,0,0},
    //     {0,0,0,0},
    //     {0,0,0,0}};

    pbest[0][0] = vetor_x[0][0];

    //atualiza o pbest de casa
    //O pbest é o melhor de cada linha (vetor)

    printf("pbest %d", f_quad_x());

    for (int i = 0; i < 4; i++)
    {
        pbest[i][0] = vetor_x[i][0];
        for (int j = 0; j < 4; j++)
        {
            if (f_quad_x() < f_quad_pbest())
            {
                pbest[i][0] = vetor_x[i][j];
            }

            if (pbest[i][j] < melhor())
            {
                gbest = pbest[i][j];
            }
        }
    }

    //Posicao da particula é por exemplo x linha 0, x linha 1...

    //inicializar o vetor V
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            vetor_v[i][j] = ((2 * 0, 5) * (pbest[i][0] - vetor_x[i][j])) + ((2 * 0, 8) * (gbest - vetor_x[i][j]));
            vetor_x[i][j] = vetor_x[i][j] + vetor_v[i][j];
            // printf("\n aqui vetor x i %d", vetor_x[i][j] + vetor_v[i][j]);
        }
    }

    printf("\n");
    for (int i = 0; i < 4; i++)
    {
        printf("pbest[%d]: %.2f\n", i, pbest[i][0]);
    }

    printf("\ngbest: %.2f", gbest);

    printf("\n\n");
    printf("vetor X DEPOIS de atualizar\n");
    for (int i = 0; i < 4; i++)
    {
        printf("vetor_x [%d] - |", i);
        for (int j = 0; j < 4; j++)
        {
            printf(" %.2f ", vetor_x[i][j]);
        }
        printf("|\n");
    }

    return 0;
}