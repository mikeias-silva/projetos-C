#include <string.h>
#include <stdio.h>

main()
{
    typedef enum Dia
    {
        dom = 1,
        seg,
        ter,
        qua,
        qui,
        sex,
        sab
    } D;
    enum
    {
        jan, fev, mar, abr, mai, jun,jul,
        ago,
        set,
        out,
        nov,
        dez
    };
    int i;
    D dia_semana;
   // Dia dia_semana;   //Criação de um objeto do tipo Dia com nome day
    dia_semana = sex; //atrib.de um enumerador ao tipo dia_semana
    printf("%d, %d, %d, %d, %d, %d, %d", dom, seg, ter, qua, qui, sex, sab);
    if (dia_semana == sex)
        printf("\n\n%s\n\n", "Sexta-feira");
    for (i = 0; i <= 11; i++)
    {
        if (i == jan)
            printf("Ano Novo\n");
        else if (i == fev)
            printf("Carnaval\n");
        else if (i == mar)
            printf("Pascoa\n");
        else if (i == abr)
            printf("Tiradentes\n");
        else if (i == mai)
            printf("Dia do Trabalho\n");
        else if (i == jun)
            printf("Corpus Christi \n");
    }
}