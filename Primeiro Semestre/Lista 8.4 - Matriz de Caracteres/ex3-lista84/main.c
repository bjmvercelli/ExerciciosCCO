/*Elabore uma função que receba n nomes do usuário (n<=50) e armazene esses nomes em uma
matriz passada como parâmetro. Na matriz de nomes, cada linha deve corresponder a um nome
digitado. O tamanho máximo de um nome é 100 (caracteres). */
#include <stdio.h>

void fill (char nomes[][100], int n){
  int i;

  for (i = 0; i < n; i++){
    printf("Insira o %dº nome: ", i+1);
    scanf(" %[^\n]", nomes[i]);
  }
}

int main(void) {
  char nomes[50][100];
  int i, n;

  printf("Insira o valor de n: ");
  scanf("%d", &n);

  fill (nomes, n);

  for (i = 0; i < n; i ++){
    printf("%s\n", nomes[i]);
  }

  return 0;
}