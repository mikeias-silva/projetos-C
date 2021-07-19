#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n)
{
  
  if (n < 2)
  {
    printf("\n %d", n);
    return 1;
  }
  else
  {
    printf("\n %d", n);
    return (fibonacci(n - 1) + fibonacci(n - 2));
  }
}

main()
{

  printf("\noi %d", fibonacci(3));
}