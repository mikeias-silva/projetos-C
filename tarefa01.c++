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

#define X 15
#define V 10
#define P 12

#define TAM 20

float x[X], v[V], p[P];
float soma = 0;

int main()
{
    srand((unsigned)time(0));
    setlocale(LC_ALL, "Portuguese");
    
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
        printf("\nVetor x[%d] gerado: ", u);

        for (int k = 0; k < X; k++)
        {
            printf("%f ", x[k]);
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

        printf("\nSoma do vetor x[%d] ao quadrado %.2f\n", u, soma);
    }
    for (int t = 0; t < X; t++)
    {
       printf("\nvetorx[%f] posicao t[%f]",x[X], x[t]);
    }
    

    // //Vetor V
    // printf("\n\nVetor V");
    // for (int u = 0; u <= TAM; u++)
    // {
    //     for (int i = 0; i < V; i++)
    //     {
    //         if (i % 2)
    //         {
    //             float j = (((float)rand() / (float)(RAND_MAX)*5.0) * -1);
    //             v[i] = j;
    //         }
    //         else
    //         {
    //             float j = (((float)rand() / (float)(RAND_MAX)*5.0));
    //             v[i] = j;
    //         }
    //     }
    //     printf("\nVetor V[%d] gerado: ", u);
    //     for (int k = 0; k < V; k++)
    //     {
    //         printf("%f ", v[k]);
    //     }
    //     //printf("\n\nVetor ao quadrado: ");
    //     for (int k = 0; k < V; k++)
    //     {
    //         v[k] = pow(v[k], 2);
    //         // printf("%f ", x[k]);
    //     }
    //     // Somar vetor
    //     float aux = 0;
    //     for (int m = 0; m < V; m++)
    //     {
    //         aux = v[m];
    //         soma += aux;
    //     }
    //     printf("\nSoma do vetor V[%d] ao quadrado %.2f\n", u, soma);
    // }

    // //Vetor P
    // printf("\n\nVetor P");
    // for (int u = 0; u <= TAM; u++)
    // {
    //     for (int i = 0; i < V; i++)
    //     {
    //         if (i % 2)
    //         {
    //             float j = (((float)rand() / (float)(RAND_MAX)*5.0) * -1);
    //             p[i] = j;
    //         }
    //         else
    //         {
    //             float j = (((float)rand() / (float)(RAND_MAX)*5.0));
    //             p[i] = j;
    //         }
    //     }
    //     printf("\nVetor P[%d] gerado: ", u);
    //     for (int k = 0; k < P; k++)
    //     {
    //         printf("%f ", p[k]);
    //     }
    //     //printf("\n\nVetor ao quadrado: ");
    //     for (int k = 0; k < P; k++)
    //     {
    //         p[k] = pow(p[k], 2);
    //         // printf("%f ", x[k]);
    //     }
    //     // Somar vetor
    //     float aux = 0;
    //     for (int m = 0; m < P; m++)
    //     {
    //         aux = p[m];
    //         soma += aux;
    //     }
    //     printf("\nSoma do vetor P[%d] ao quadrado %.2f\n", u, soma);
    // }
    return 0;
}