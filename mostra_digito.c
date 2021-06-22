#include <stdio.h>
// void mostra_digito(int i)
// {
//   i = i * 2;
//   printf("Valor de i na funcao <mostra_digito> = %d\n", i);
// }

// main()
// {
//   int i;
//   for (i = 0; i < 10; i++)
//     mostra_digito(i);
//   printf("\nValor de i na funcao <main> = %d", i);
//  return 0;
// }

int i;
void mostra_digito(int digito)
{
  i++;
  printf("i= %d digito= %d\n", i, digito);
}
int main()
{
  for (i = 0; i < 10; i++)
    mostra_digito(i);
  return 0;
}