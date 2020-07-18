/*1. Elabore um algoritmo que receba dois valores inteiros diferentes e retorne o maior
deles.*/

#include <stdio.h>
//#include <stdlib.h>

int main(void){
  int v1, v2;

  printf("Insira o primeiro valor: ");
  scanf("%d", &v1);

  printf("Insira o segundo valor: ");
  scanf("%d", &v2);

  if (v1 > v2){
    printf("O maior valor e: %d\n", v1);
  } else {
    printf("O maior valor e: %d\n", v2);
  }

  return 0;
}