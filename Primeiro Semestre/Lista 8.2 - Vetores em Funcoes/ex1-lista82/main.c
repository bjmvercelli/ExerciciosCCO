/* Elabore uma função que receba um vetor de inteiros e o tamanho do vetor e retorne o vetor com
todos os números negativos substituídos por 0. Utilize a função no programa principal.*/
#include <stdio.h>

void subst(int v[], int n){
  int i;
  for (i= 0; i < n; i++){
    if (v[i] < 0){
      v[i] = 0;
    }
  }
}

int main(void) {
  int v[5], i, n;

  printf("Insira o tamanho: ");
  scanf("%d", &n);

  for (i = 0; i < n; i++){
    printf("Valor do elemento %d: ", i);
    scanf("%d", &v[i]);
  }

  subst(v, n);

  for (i = 0; i < n; i++){
    printf("%d ", v[i]);
  }

  return 0;
}