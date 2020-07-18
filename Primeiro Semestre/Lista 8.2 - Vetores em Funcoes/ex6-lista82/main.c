/*No exercício 5, considere que os dois primeiros vetores tenham tamanho máximo = 10, mas
você não sabe quantos elementos serão preenchidos nos vetores pelo seu usuário. O que é
necessário alterar nas funções? Faça as adaptações necessárias.*/
#include <stdio.h>

int comporC(int a[], int b[], int c[], int n){
  int i, j, k = 0;
  for (i = 0; i < n; i++){
    for (j = 0; j < n; j++){
      if (a[i] == b[j]){
        c[k] = a[i];
        k ++;
      }
    }
  }
  return k;
}

int main(void) {
  int a[10], b[10], c[10], i, contador, n;

  printf("Insira o tamanho dos vetores A e B: ");
  scanf("%d", &n);

  for (i = 0; i < n; i++){
    printf("Insira o valor do elemento %d da matriz A: ", i);
    scanf("%d", &a[i]);
  }
  for (i = 0; i < n; i++){
    printf("Insira o valor do elemento %d da matriz B: ", i);
    scanf("%d", &b[i]);
  }

  contador = comporC(a, b, c, n);
  
  printf("\n\nO vetor C será: ");
  for (i = 0; i < contador; i++){
    printf("%d ", c[i]);
  }

  return 0;
}