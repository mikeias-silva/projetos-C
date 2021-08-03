#include <string.h>
#include <stdio.h>
#include <stdlib.h>
main()
{
    int *p;
    p = (int *)malloc(sizeof(int));
    *p = 11;
    printf("*p= %d\n", *p);               // *p = 11
    printf("sizeof(p)= %d\n", sizeof(p)); // 4
    printf("Endereco: %x", &p);
    free(p);
}