#include <stdio.h>
int soma_valores(int a, int b)
{
  return (a + b);
}
int main()
{
  int res1, res2, c = 7, d = 8;
  res1 = soma_valores(10, 53);
  printf("Resultado = %d\n", res1);
  res2 = soma_valores(c, d);
  printf("Resultado = %d\n", res2);
  return 0;
}