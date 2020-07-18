/*Escreva um programa que leia uma linha do teclado e imprima todas as vogais encontradas no texto e o total de vezes que elas aparecem. O tamanho máximo da linha é 40 caracteres*/
#include <stdio.h>
#include <string.h>

int main (void){
  char linha[40], letra;
  int i, cont[5] = {0, 0, 0, 0, 0}, j = 0;

  printf("Insira uma frase: ");
  scanf(" %[^\n]", linha);

  for (i = 0; i < strlen(linha); i++){
    if ('a' == linha[i]){
      cont[0] ++;
    } else if (linha[i] == 'e'){
      cont[1] ++;
    } else if (linha[i] == 'i'){
      cont[2] ++;
    } else if (linha[i] == 'o'){
      cont[3] ++;
    } else if (linha[i] == 'u'){
      cont[4] ++;
    }
  }

  
  printf("A vogal 'a' aparece %d vez(es) ", cont[0]);
  printf("\nA vogal 'e' aparece %d vez(es) ", cont[1]);
  printf("\nA vogal 'i' aparece %d vez(es) ", cont[2]);
  printf("\nA vogal 'o' aparece %d vez(es) ", cont[3]);
  printf("\nA vogal 'u' aparece %d vez(es) ", cont[4]);
  


  return 0;
}