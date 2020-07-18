/*Escreva um programa que leia uma sequência de 5 cadeias de caractere com ou sem espaço
e imprima o tamanho da maior cadeia. Pode usar as funções do string.h.*/
#include <stdio.h>
#include <string.h>

int main(void) {
  char palavras[5][10], maior[10];
  int i, tamanho;

  for (i = 0; i < 5; i++){
    printf("Insira uma string: ");
    scanf(" %[^\n]", palavras[i]);
  }

  strcpy(maior, palavras[0]);
  for (i = 0; i < 5; i ++){
    if (palavras[i] > maior){
      strcpy(maior, palavras[i]);
    }
  }

  tamanho = strlen(maior);

  printf("A maior palavra é *%s* e seu tamanho é: %d", maior, tamanho);
  
  return 0;
}