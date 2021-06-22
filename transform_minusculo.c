#include <stdio.h>
#include <string.h>
char minusculo()
{
  char ch;
  ch = getche();
  if ((ch >= 'A') && (ch <= 'Z'))
    return (ch + 'a' - 'A');
  else
    return (ch);
}
main()
{
  char letra;
  printf("digite uma letra em maiuscula: ");
  letra = minusculo();
  printf("\n\nletra digitada: %c", letra);
  
}