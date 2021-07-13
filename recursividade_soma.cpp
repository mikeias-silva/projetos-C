#include <stdio.h>
#include <stdlib.h>

int recursividade_soma(int m, int n){
  if(n == m) return (m);
      else if (m < n)
      return (recursividade_soma(m, n-1) + n);
      else return (recursividade_soma(m, n+1) +n); 
}

main(){

  // int num1, num2;
  // printf("Soma entre dois numeros");
  // printf("\nInsira o primeiro numero: ");
  // scanf("%d", &num1);
  // printf("Insira o segundo numero: ");
  // scanf("%d", &num2);
  printf("%d", recursividade_soma(1, 5));
}