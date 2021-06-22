#include <stdio.h>

int potenciacao(int base, int potencia){
  int res;
  res = 1;
  for(int i = 0; i < potencia; i++){
    res *= base;
  }
  return res;
}

int main(){
  int a, b;
  printf("Digite a base: ");
  scanf("%d", &a);

  printf("Digite o expoente: ");
  scanf("%d", &b);

  printf("%d^%d= %d", a, b, potenciacao(a,b));
}