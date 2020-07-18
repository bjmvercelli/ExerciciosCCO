/*Escreva uma função que receba dois vetores de tamanho máximo 10 e retorne um terceiro vetor
cujos elementos são a soma dos elementos dos dois vetores. Considere que os dois vetores
recebidos terão o mesmo número de elementos ocupados. Use a função no programa principal
para preencher um vetor a partir de outros dois vetores de números digitados pelo usuário que
deverão possuir 10 elementos*/
#include <stdio.h>

void soma(int a[], int b[], int c[], int n){
  int i = 0;

  for (i= 0; i< n; i++){
    c[i] = a[i] + b[i];
  }
}

int main(void) {
  int a[10], b[10], c[10], n, i;

  printf("Insira o tamanho dos vetores: ");
  scanf("%d", &n);

  for (i = 0; i < n; i++){
    printf("Insira o valor do elemento %d do vetor A: ", i);
    scanf("%d", &a[i]);
  }

  for (i = 0; i<n; i++){
    printf("Insira o valor do elemento %d do vetor B: ", i);
    scanf("%d", &b[i]);
  }

  soma(a, b, c, n);

  printf("\n\nO vetor C será: ");
  for (i = 0; i < n; i++){
    printf("%d ", c[i]);
  }
  return 0;
}