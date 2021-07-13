#include <stdio.h>
#include <stdlib.h>
int recursividade_fatorial(int n)
{
  if (n != 0)
  {
    //printf("\n%d", n);
  }

  if (n == 0)
  {
    //printf("\n%d", n);
    return 1;
  }

  return (n * recursividade_fatorial(n - 1));
}

main()
{
  int num;
  printf("Fatorial de: ");
  scanf("%d", &num);
  printf("%d", recursividade_fatorial(num));
}