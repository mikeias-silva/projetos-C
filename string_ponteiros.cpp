#include <stdlib.h>
#include <stdio.h>

void f_print_string(char mens[])
{

    int i;
    char *p;
 //   char cadeia[20] = {'M', 'e', 'n', 's', 'a', 'g', 'e', 'm'};
    p = &mens[0];
    while (*p != '\0')
        putchar(*p++);
}

main()
{
    f_print_string("'Mensagem da funcao'");


}