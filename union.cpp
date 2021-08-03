#include <string.h>
#include <stdio.h>

main()
{
    struct stru
    {
        int inteiro;
        float real;
        char caracter;
    };
    union uni
    {
        int inteiro;
        float real;
        char caracter;
    };
    uni uniao;
    stru estrutura;
    printf("Tam.estrutura = %d bytes\n", sizeof(estrutura));//12 
    printf("Tam. da união = %d bytes\n", sizeof(uniao)); // 4

}