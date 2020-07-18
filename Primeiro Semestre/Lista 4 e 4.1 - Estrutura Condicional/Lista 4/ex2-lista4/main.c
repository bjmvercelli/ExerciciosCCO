/*2. Desenvolver um algoritmo que leia um número inteiro e verifique se é divisível por 5 e
exiba uma mensagem com esta informação. Caso não seja, não é necessário exibir
mensagem.*/

#include <stdio.h>

int main(void) {
  int num;

  printf("Insira um numero inteiro: ");
  scanf("%d", &num);

  if (num % 5 == 0){
    printf("Esse numero e divisivel por 5\n");
  } else {
    printf("Esse numero nao e divisivel por 5\n");
  }

  return 0;
}