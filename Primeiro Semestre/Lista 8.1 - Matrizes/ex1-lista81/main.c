/*Elabore um programa que preencha os elementos de uma matriz 2 x 3 de números inteiro.
Depois de preenchida, imprima os elementos digitados linha por linha e depois o valor do maior
elemento.
*/
#include <stdio.h>

int main(void) {
  int matriz[2][3], i, j, maior;

  for (i = 0; i < 2; i++){
    for (j = 0; j < 3; j++){
      printf("Insira o valor do elemento [%d][%d]: ", i+1, j+1);
      scanf("%d", &matriz[i][j]);
    }
  }
  printf("\n");
  for (i = 0; i < 2; i++){
    for (j = 0; j < 3; j++){
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }

  maior = matriz[0][0];

  for (i = 0; i < 2; i++){
    for (j = 0; j < 3; j++){
      if (matriz[i][j] > maior){
        maior = matriz[i][j];
      }
    }
  } 

  printf("\nO maior elemento vale %d", maior);
  return 0;
}