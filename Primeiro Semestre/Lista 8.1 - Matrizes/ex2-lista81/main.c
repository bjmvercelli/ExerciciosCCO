/*Escreva um programa que preencha uma matriz de dimensão N (N <=10 e deve ser digitado
pelo usuário) e retorne a soma dos elementos positivos da matriz. O preenchimento da matriz
deve ser feito separado do cálculo da soma.
*/
#include <stdio.h>

int main(void) {
  int n, matriz[10][10], i, j, soma = 0;

  printf("Insira o valor de n: ");
  scanf("%d", &n);

  for (i = 0; i < n; i ++){
    for (j = 0; j < n; j ++){
      printf("Insira o valor do elemento [%d][%d]: ", i + 1, j + 1);
      scanf("%d", &matriz[i][j]);
    }
  }

  for (i = 0; i < n; i ++){
    for (j = 0; j < n; j ++){
      if (matriz[i][j] > 0){
        soma += matriz[i][j];
      }
    }
  }

  printf("\nO resultado da soma e: %d", soma);

  return 0;
}