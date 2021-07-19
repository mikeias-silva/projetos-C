#include <stdio.h>
#include <stdlib.h>

main(){
  int num[] = {92, 81, 70, 68, 58}, d;

  for(d = 0; d< 5; d++){
    printf("%d\n", *(num+d));
    printf("%x\n", &num+d);
  }
}