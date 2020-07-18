/*Elabore uma função que receba dois vetores de inteiros de tamanho = 5 e retorne um terceiro
vetor que deverá conter somente os números que estão nos dois vetores. A função deverá
retornar também a quantidade de elementos inseridos no terceiro vetor. Use a função no
programa principal. */
#include <stdio.h>

int comporC(int a[], int b[], int c[]){
  int i, j, k = 0;
  for (i = 0; i < 4; i++){
    for (j = 0; j < 4; j++){
      if (a[i] == b[j]){
        c[k] = a[i];
        k ++;
      }
    }
  }
  return k;
}

int main(void) {
  int a[4], b[4], c[4], i, contador;

  for (i = 0; i < 4; i++){
    printf("Insira o valor do elemento %d da matriz A: ", i);
    scanf("%d", &a[i]);
  }
  for (i = 0; i < 4; i++){
    printf("Insira o valor do elemento %d da matriz B: ", i);
    scanf("%d", &b[i]);
  }

  contador = comporC(a, b, c);
  printf("\n\nO vetor C será: ");
  for (i = 0; i < contador; i++){
    printf("%d ", c[i]);
  }

  return 0;
}