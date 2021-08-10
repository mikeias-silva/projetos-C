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

int vetor_x()
{
    srand(time(0));
    //Vetor X
    printf("\n%d Vetores de X com %d elementos cada\n", TAM, X);
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
            printf("%.2f ", v[k]);
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
    printf("\n\nVetor P");
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
        printf("\nVetor P[%d] gerado: ", u);
        for (int k = 0; k < P; k++)
        {
            printf("%f ", p[k]);
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
        printf("\nSoma do vetor P[%d] ao quadrado %.2f\n", u, soma);
    }
}

int funcao(int melhor)
{

    int resultado = melhor + 1;
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
    int global_best = 0;

    int vetor_x[4][4] = {
        {90, 98, 88, 66},
        {95, 96, 55, 98},
        {99, 910, 44, 912},
        {913, 970, 915, 1},
    };
    int vetor_v[4][4] = {
        {-55, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
    };

    // int pbest [4][4]= {
    //     {0,0,0,0},
    //     {0,0,0,0},
    //     {0,0,0,0},
    //     {0,0,0,0}};
   
    int pbest[4][4] = {0};
    pbest[0][0] = vetor_x[0][0];

    printf("\naqui %d", pbest[0][0]);
   
    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         printf("\naqui %d", pbest[i][j]);
    //     }
    // }

    int vetor_p[4][4] = {0};

    //vetor_v();
    int linha = 2;
    int coluna = 3;
    // printf("\ndepois da funcao %d ", vetor_v[linha-1][coluna-1]);

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {

            // printf("\nantes troca pbest: %d x: %d", pbest, vetor_x[i][j]);
            // atualuiza a melhor posicao
            if (vetor_x[i][j] < pbest[i][j])
            {
                pbest[i][j] = vetor_x[i][j];
                // printf("\ntroca pbest: %d", pbest[i][j]);
            }

            //atualiza o blobal best
            if (pbest[i][j] < global_best)
            {
                global_best = pbest[i][j];
            }
            //printf("\npbest: %d", pbest);
            // if (funcao(pbest) < funcao(global_best))
            // {
            //     global_best = pbest;
            // }
        }
        int j = 0;
        for (int i = 0; i < 4; i++)
        {
            j++;
            //  printf("\n vetor%d i%d j%d", vetor_v[i][j], i, j);
            //  vetor_v[i][j] = (vetor_v[i][j] + )
            vetor_p[i][j] = vetor_x[i][j] + vetor_v[i][j];
            printf("\nvetor p %d", vetor_p[i][j]);
        }
    }

    // for (int i = 0; i <= 4; i++)
    // {
    //     for (int j = 0; i < 4; i++)
    //     {
    //         if (funcao(vetor_x[i][j]) < funcao(pbest))
    //         {
    //             pbest = vetor_x[i][j];
    //         }
    //         if (funcao(pbest) < funcao(global_best))
    //         {
    //             global_best = pbest;
    //         }
    //     }
    // }

    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; i < 4; i++)
    //     {
    //         // vetor_v[i][j] = vetor_v[i][j] + C1 * 0, 2 * (pbest - vetor_x[i][j] + C2 * 0, 4 * (global_best - vetor_x[i][j]));
    //         // vetor_x[i][j] = vetor_x[i][j] + vetor_v[i][j];
    //     }
    // }
    // // for (auto &&i : x)
    // // {

    // //     for (auto &&d : o)
    // //     {
    // //         printf("%d", d);
    // //     }

    // //     //inicializa o vetor de pbest com o primeira posicao do vet_x (Xi)
    // //     int pos_best[] = {vetor_x[0]};

    // //     if (f(pos_best[0]) < f(global_best))
    // //     {
    // //         global_best = pos_best[0];
    // //     }
    // ;
    //     for (auto &&i : vetor_x)
    //     {
    //         printf("%d\n", i);
    //     }
    //     printf("%d", pos_best[0]);
    // }

    return 0;
}