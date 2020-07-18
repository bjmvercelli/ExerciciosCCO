#include <stdio.h>

int main(void) {
  int i, n; // Sendo 'n' a quantidade de numeros;
  float num, sum; // Sendo 'num' os numeros a serem somados e 'sum' o resultado da soma.

  sum = 0;

  printf("Insira a quantidade de numeros que deseja somar: ");
  scanf("%d", &n);

  for (i = 0; i < n; i++){
    printf("Insira o numero a ser somado: ");
    scanf("%f", &num);

    sum += num;
  }

  printf("O resultado da soma dos %d números é igual a %.2f", n, sum);

  return 0;
}