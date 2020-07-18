/*Escrever um algoritmo que leia uma quantidade desconhecida de números inteiros e
conte quantos deles estão nos seguintes intervalos: [0-25], [26-50], [51-75] e [76-100].
A entrada de dados deve terminar quando for lido um número negativo.*/
#include <stdio.h>

int main(void) {
  int num, c1 = 0, c2 = 0, c3 = 0, c4 = 0;

  printf("Insira um numero inteiro: ");
  scanf("%d", &num);

  for (;num > 0;){
    if (num >= 0 && num <= 25){
      c1++;
      printf("Existem %d numeros no intervalo [0-25].", c1);
    } else if (num >=26 && num <= 50){
      c2++;
      printf("Existem %d numeros no intervalo [26-50].", c2);
    } else if (num >= 51 && num <=75){
      c3++;
      printf("Existem %d numeros no intervalo [51-75].", c3);
    } else if (num >= 76 && num <= 100){
      c4++;
      printf("Existem %d numeros no intervalo [76-100].", c4);
    }
    printf("\nInsira um numero inteiro: ");
    scanf("%d", &num);
  }

  return 0;
}