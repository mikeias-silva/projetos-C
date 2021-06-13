/*

    https://www.cos.ufrj.br/~rfarias/cos121/aula_09.html
    complexidade pior caso	o(n log n)
    complexidade caso médio	o(n log n)
    complexidade melhor caso o(n log n)

Desvantagens:
● construir a árvore-heap(vetor auxiliar) pode consumir muita memória.

Vantagens
- para dados imprevisíveis, pode ser mais vantajoso por ser previsível em termos de tempo de execução.

*/

#include <stdio.h>
void heapsort(int a[], int n)
{
    int i = n / 2, pai, filho, t;
    while (true)
    {
        if (i > 0)
        {
            i--;
            t = a[i];
        }
        else
        {
            n--;
            if (n <= 0)
                return;
            t = a[n];
            a[n] = a[0];
        }
        pai = i;
        filho = i * 2 + 1;
        while (filho < n)
        {
            if ((filho + 1 < n) && (a[filho + 1] > a[filho]))
                filho++;
            if (a[filho] > t)
            {
                a[pai] = a[filho];
                pai = filho;
                filho = pai * 2 + 1;
            }
            else
            {
                break;
            }
        }
        a[pai] = t;
    }
}

int main()
{
    int vetor[10] = {10, 25, 12, 31, 54, 66, 28, 17, 89, 53};
    int p = 10;
    printf("vetor desordenado");
    for (int i = 0; i < 10; i++)
    {
        printf("\nvetor[%d] %d", i, vetor[i]);
    }

    heapsort(vetor, p);

    printf("\n\nvetor ordenado");
    for (int i = 0; i < 10; i++)
    {
        printf("\nvetor[%d] %d", i, vetor[i]);
    }
    return 0;
}