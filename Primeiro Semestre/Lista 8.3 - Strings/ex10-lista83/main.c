/*Escreva uma função em C que leia uma lista de cadeias de caractere do teclado até que a cadeia “Acabou” seja digitada e retorne a quantidade de cadeias digitadas.*/
#include <stdio.h>
#include <string.h>

int main(void) {
  char frase[20][20], parada[7] = "Acabou";
  int i, cont = 0, aux;

  for (i = 0; aux != 0; i++){
    printf("Insira uma string: ");
    scanf(" %[^\n]", frase[i]);
    cont ++;
    aux = strcmp(frase[i], parada);
  }

  

  printf("Existem %d cadeias digitadas.", cont);
  return 0;
}