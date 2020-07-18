/*Escreva um programa em C que leia 3 cadeias de caracteres de tamanho máximo 50, e as
imprime na tela em ordem alfabética. Voce pode usar a função strcmp da biblioteca string.h*/
#include <stdio.h>
#include <string.h>

int main(void) {
  char string1[50], string2[50], string3[50];
  int i;

  printf("Insira o valor da string 1: ");
  scanf(" %s", string1);
  printf("Insira o valor da string 2: ");
  scanf(" %s", string2);
  printf("Insira o valor da string 3: ");
  scanf(" %s", string3);

  if (strcmp(string1,string2) < 0) {
    if (strcmp(string2, string3) < 0){
      printf("%s\n%s\n%s", string1, string2, string3);
    } else if (strcmp(string3, string2) < 0 && strcmp (string1, string3) < 0) {
      printf("%s\n%s\n%s", string1, string3, string2);
    } else if (strcmp(string3, string2) < 0 && strcmp (string1, string3) > 0){
      printf("%s\n%s\n%s", string3, string1, string2);
    } 
 
  } else if (strcmp(string1,string2) > 0){
     if (strcmp(string1, string3) < 0){
      printf("%s\n%s\n%s", string2, string1, string3);
    } else if (strcmp(string3, string1) < 0 && strcmp (string2, string3) < 0) {
      printf("%s\n%s\n%s", string2, string3, string1);
    } else if (strcmp(string3, string2) < 0 && strcmp (string1, string2) > 0){
      printf("%s\n%s\n%s", string3, string2, string1);
    } 
  } 


  return 0;
}