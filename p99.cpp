#include <string.h>
#include <stdio.h>

main()
{
    typedef struct
    {
        int lado1;
        int lado2;
        int lado3;
        int perimetro;
    } triangulo;
    triangulo isosceles;
    triangulo *p;
    isosceles.lado1 = 6;
    isosceles.lado2 = 6;
    isosceles.lado3 = 6;
    
    p = &isosceles;
    printf("perimetro = %d ", p);
    p->perimetro = p->lado1 + p->lado2 + p->lado3;
    // ou (*p).perimetro = (*p).lado1 + (*p).lado2 + (*p).lado3;
    printf("perimetro = %d ", isosceles.perimetro);
    
}