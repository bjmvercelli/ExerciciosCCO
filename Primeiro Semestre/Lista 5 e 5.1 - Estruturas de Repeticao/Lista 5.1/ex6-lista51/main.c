/*Escreva um algoritmo que leia uma lista de 10 números inteiros positivos e imprima quais números são divisíveis por 2. Caso seja digitado um número negativo, o algoritmo deve ser interrompido.*/
#include <stdio.h>

int main(void) {
  int num, vec[10], i;

  printf("Insira um inteiro: ");
  scanf("%d", &num);

  for (;num >= 0;){
    for (i = 0; i < 10; i++){}
    if (num % 2 == 0){
      printf("O numero %d e divisivel por 2.\n", num);
    } else {
      printf("O numero %d nao e divisivel por 2.\n", num);
    }
    printf("Insira um inteiro: ");
    scanf("%d", &num);
  }
  return 0;
}