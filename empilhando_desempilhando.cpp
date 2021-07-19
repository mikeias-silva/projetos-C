#include <stdio.h>
#include <stdlib.h>

int repete(int n)
{
  n = ++n;
  printf("Empilhando... %d\n", n);

  if (n < 3)
  {
    repete(n);
    printf("Desempilhando... %d\n", n);
  }
}

main()
{
  int m;
  m = 0;
  repete(m);
}
