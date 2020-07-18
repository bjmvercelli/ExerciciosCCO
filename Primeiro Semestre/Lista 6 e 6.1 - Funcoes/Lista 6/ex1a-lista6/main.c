/*Elabore uma função que receba dois números inteiros (a e b) e retorne a soma
desses valores.*/
#include <stdio.h>

int sum(int a, int b){
  int res;
  res = a + b;
  return res;
}

int main(void) {
  int x, y;
  printf("Insira um inteiro: ");
  scanf("%d", &x);
  printf("Insira outro inteiro a ser somado com o primeiro: ");
  scanf("%d", &y);

  printf("O resultado da soma e %d", sum(x,y));
  return 0;
}