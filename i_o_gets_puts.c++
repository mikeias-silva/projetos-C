#include <stdio.h>
/*
I/O com gets e puts
A linguagem C provê as funções gets e puts para leitura mais facilitada de
strings. A função gets (getstring) lê os caracteres digitados até encontrar um caracter
'\n'. Então atribui estes caracteres à variável string, substituindo o '\n' por '\0'.
A função puts (putstring) exibe no dispositivo de saída padrão (no caso, o vídeo) 
o valor do seu argumento. Só aceita um argumento.
*/

int main()
{
    char frase[128];
    printf("Digite uma frase e encerre com <Enter>: ");
    fgets(frase);
    fgets
    // Esta instrucao funciona
    puts(frase);
    printf("\n\nDigite uma frase e encerre com <Enter>: ");
    fgets(&frase[0]); // Esta instrucao também funciona
    puts("\n\nFrase digitada: ");
    puts(frase);
    // gets (&frase); Esta instrucao NAO funciona
    // puts("Frase digitada: ", frase); Também NAO funciona
    // A funcao puts só aceita um argumento
    return 0;
}