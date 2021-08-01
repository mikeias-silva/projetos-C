#include <stdio.h>

int main()
{
    int i;
    char cadeia[20] = {'M', 'e', 'n', 's', 'a', 'g', 'e', 'm'};
    for (i = 0; cadeia[i] != '\0'; ++i)
        printf("%X %c\n", &cadeia[i], cadeia[i]);
    return 0;
}