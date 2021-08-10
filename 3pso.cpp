
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

int main()
{
    srand(time(0));
    float x[dimensao] = {0};
    float funcao_x = 0.0;
    float funcao_pbest = 0.0;

    float pbest[dimensao] = {0};

    for (int i = 0; i < individuos; i++)
    {

        printf("x:%d \n", i);
        for (int j = 0; j < dimensao; j++)
        {

            x[j] = (((float)rand() / (float)(RAND_MAX)*5.0) * -1);
            printf(" %.2f", x[j]);
            funcao_x = funcao_x + pow(x[j], 2);

            if (pbest == 0)
            {
                pbest[j] = x[j];
            }

            funcao_pbest = funcao_pbest + pow(pbest[j], 2);

            if (funcao_x < funcao_pbest){
                pbest[j] = 
            }
        }
        printf("\n Pbest: \n");
        for (int j = 0; j < dimensao; j++)
        {
            printf("%.2f", pbest[j]);
        }
        printf("\n");

        //funcao_x = funcao_x + (x[dimensao] * x[dimensao]);

        printf("f(x)%d: [%.2f]", i, funcao_x);
        printf("\n");
    }

    //funcao_x = funcao_x + (x[dimensao] * x[dimensao]);
    // x na posicao do individuo (i)
    //x[0] = -3.89 -0.49 -4.51

    //sphere = x0² + x1² + x2²

    //verificar e iniciar o pbest

    return 0;
}