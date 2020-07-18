/*Escreva um programa em C que recebe uma cadeia de caracteres de tamanho máximo 100 e
retorna 1 se esta cadeia é um palíndromo e zero caso contrário. Uma palavra é dita ser
palíndromo se a sequência de seus caracteres da esquerda para a direita é igual à sequência
de seus caracteres da direita para a esquerda. Ex.: arara*/
#include <stdio.h>
#include <string.h>

int main(void) {
  char string[100];
  int i, j;

  printf("Insira a string: ");
  scanf(" %[^\n]", string);

  char stringRev[strlen(string)];

  j = strlen(string)-1;

  for (i = 0; i < strlen(string); i++){

      stringRev[i] = string[j];
      j --;

  }
  
  printf("A string reversa é: %s", stringRev);

  if (strcmp(stringRev, string) == 0){
    printf("\nA string é palíndromo!!");
  } else {
    printf("\nA string nao é palíndromo!!");
  }

  return 0;
}