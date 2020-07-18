/*Ler uma matriz quadrada A de dimensão M (M <= 10) de elementos inteiros. Em seguida, obter
seu elemento minimax. O minimax é o menor elemento da linha que contém o maior elemento
da matriz.*/
#include <stdio.h>

int main(void) {
  int m, matriz[10][10], i, j, minimax, maior, l;

  printf("Insira o valor de M: ");
  scanf("%d", &m);

  for (i = 0; i < m; i++){
    for (j = 0; j < m; j ++){
      printf("Insira o valor do elemento [%d][%d]: ", i+1, j+1);
      scanf("%d", &matriz[i][j]);
    }
  }

  maior = matriz[0][0];

  for (i = 0; i < m; i++){
    for (j = 0; j < m; j ++){
      if (matriz[i][j] > maior){
        maior = matriz[i][j];
        l = i;
      }
    }
  }

  minimax = matriz[l][0];

  for (i = 0; i < m; i++){
    for (j = 0; j < m; j ++){
      if (matriz[l][j] < minimax){
        minimax = matriz[l][j];
      }
    }
  }
  printf("O maior elemento e %d\n", maior);
  printf("O minimax e %d e esta na linha %d", minimax, l+1);
  return 0;
}