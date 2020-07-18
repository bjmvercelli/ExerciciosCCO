/*Elabore uma função que receba uma cadeia de caractere retorne o tamanho da cadeia. Não
podem ser usadas funções da biblioteca string.h*/
#include <stdio.h>
#include <string.h>

int tamanho(char palavra[]){
  int size;

  size = strlen(palavra);

  return size;
}

int main(void) {
  char palavra[10];

  printf("Insira uma palavra: ");
  scanf("%[^\n]", palavra);

  printf("O tamanho da palavra é %d", tamanho(palavra));

  return 0;
}