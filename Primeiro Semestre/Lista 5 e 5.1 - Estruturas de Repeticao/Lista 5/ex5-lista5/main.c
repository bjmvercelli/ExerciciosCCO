/*Escreva um algoritmo que imprima os 100 primeiros números ímpares começando de 1.*/
#include <stdio.h>

int main(void) {
  int i;

  for (i = 1; i < 101; i = i + 2){
    printf("%d\n", i);
  }

  return 0;
}