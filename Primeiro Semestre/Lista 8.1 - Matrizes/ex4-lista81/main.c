/*Escreva um programa que leia uma matriz 5 x 5 e imprima sua diagonal primária e secundária.
Na álgebra linear, os índices (i,j) dos elementos da diagonal secundária de uma matriz NxN
apresentam o seguinte comportamento: i+j=N+1. Você pode usar esta regra para resolver o
problema. Contudo, em C, os índices iniciam em 0 e, na álgebra linear, os índices começam
com1. Logo, você deverá fazer as adaptações necessárias para adequar os valores dos índices
em uma matriz em C. */
#include <stdio.h>

int main(void) {
  int matriz[5][5], i, j;

  for (i = 0; i < 5; i ++){
    for (j = 0; j < 5; j ++){
      printf("Insira o valor do elemento [%d][%d]: ", i+1, j+1);
      scanf("%d", &matriz[i][j]);
    }
  }

  printf("\nOs elementos da diagonal principal sao:\n");
  for (i = 0; i < 5; i ++){
    for (j = 0; j < 5; j ++){
      if (i == j){
        printf("%d\t", matriz[i][j]);
      }      
    }
  }

  printf("\n\ns elementos da diagonal secundaria sao:\n");
  for (i = 0; i < 5; i ++){
    for (j = 0; j < 5; j ++){
      if ( i + j + 2 == 6){
        printf("%d\t", matriz[i][j]);
      }      
    }
  }

  return 0;
}