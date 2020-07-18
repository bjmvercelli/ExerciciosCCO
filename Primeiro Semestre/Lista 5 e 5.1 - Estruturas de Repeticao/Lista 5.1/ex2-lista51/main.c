/*Elabore um programa que leia uma lista de números inteiros até que um número
negativo seja digitado. Para cada número lido, verificar se o número é divisor de 10 ou
não*/
#include <stdio.h>

int main(void) {
  int num;

  printf("Insira um numero inteiro: ");
  scanf("%d", &num);

  for (;num >= 0;){
    if ( num % 10 == 0){
      printf("O numero É divisor de 10.");
    } else {
      printf("O numero NÃO É divisor de 10.");
    }
    printf("\nInsira um numero inteiro: ");
    scanf("%d", &num);
  }
  return 0;
}