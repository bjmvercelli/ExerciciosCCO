/*Ler duas matrizes A e B de dimensão 5 e elaborar uma matriz C resultante da multiplicação de A por B*/
#include <stdio.h>

int main(void) {
  int matA[2][2], matB[2][2], i, j, matC[2][2], aux = 0, k;

  for (i = 0; i < 2; i ++){
    for (j = 0; j < 2; j ++){
      printf("Insira o valor do elemento [%d][%d] da matriz A: ", i+1, j+1);
      scanf("%d", &matA[i][j]);
    }
  }
  printf("\n");
  for (i = 0; i < 2; i ++){
    for (j = 0; j < 2; j ++){
      printf("Insira o valor do elemento [%d][%d] da matriz B: ", i+1, j+1);
      scanf("%d", &matB[i][j]);
    }
  }

  for (i = 0; i < 2; i ++){
    for (j = 0; j < 2; j ++){
      for (k = 0; k < 2; k++){
        aux += matA[i][k] * matB[k][j];
      }
      matC[i][j] = aux;
      aux = 0;
    }
  }
  printf("\n");
  for (i = 0; i < 2; i ++){
    for (j = 0; j < 2; j ++){
      printf("%d ", matC[i][j]);
    }
    printf("\n");
  }

  return 0;
}

/*A logica da multiplicação de matrizes consiste em um novo laço que, faça o seguinte, por exemplo: Quando i = 0 e j = 0, devemos utilizar a variavel "k" para percorrer os elementos da linha 0 da matriz A e os elementos da coluna 0 da matriz B. Em seguida, com uma variavel auxiliar, vamos somando e armazenando o resultando da multiplicação dos elementos, resultando que corresponde ao elemento matC[i][j] da matriz C. Vale ressaltar que o valor da auxiliar deve ser resetado quando termina um loop


Exemplo: Quando i=0 , j=0 , k = 0 -> aux = aux(0) + (matA[0][0] * matB[0][0])
         Quando i=0, j=0, k=1 -> aux = aux + (matA[0][1]* matB[1][0]) : Perceba que estamos percorrendo a linha 0 da matriz A ao avançar em suas colunas, e na matriz B occore o contrario.*/