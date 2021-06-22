#include <stdio.h>


int area_retangulo(int altura, int base){
  int area;
  return altura*base;

}

main()
{
  int a, b, total;
  total = area_retangulo(5, 6);
  printf("a Area do retangulo eh: %d", total);
  
}