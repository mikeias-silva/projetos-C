#include <stdio.h>
#include <string.h>

int tamanhoString()
{
  char nome[40] = "Joao", sobrenome[20] = " da Silva";
  int tamanho;
  // Demonstra o uso da funcao strlen
  printf("\nTamanho do nome (%s) = %d ", nome, strlen(nome));
  tamanho = strlen(&sobrenome[0]);
  printf("\nTamanho do sobrenome (%s) = %d", sobrenome, tamanho);
}

int concatenaString()
{
  char nome[40] = "James ", sobrenome[30] = "Bond";
  strcat(nome, sobrenome);
  puts(sobrenome);
  puts(nome);
}

int copiaString()

  {
    char sobrenome[20] = "da Silva", nome[20] = "Paulo", nome2[20] = "Mikeias";
    printf("\nNome original= %s", nome);
    printf("\nSobrenome original= %s\n\n", sobrenome); 
    // nome = nome2; Instrução invalida // 
    // sobrenome = "de Souza"; Também invalido 
    // Um vetor não pode receber atribuição desta maneira 
    strcpy(nome,nome2); // Tambem valido 
    printf ("\nnome apos o uso de strcpy= %s", nome); 
    strcpy(sobrenome,"Azevedo"); // Instrução valida 
    printf ("\nSobrenome apos o uso de strcpy= %s", sobrenome);
  }

  int main()
  {
    //tamanhoString();
    //concatenaString();
    copiaString();
    return 0;
  }