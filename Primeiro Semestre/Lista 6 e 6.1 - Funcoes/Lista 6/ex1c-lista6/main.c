/*Elabore um programa que leia dois valores digitados no teclado e utilize as
duas funções criadas para imprimir o valor da soma na tela da seguinte forma:
A soma {a,b} = valor da soma*/
#include <stdio.h>

int sum(int a, int b){
  int res;
  res = a + b;
  return res;
}

void imprimir(){
  printf("A soma {a,b} =");
}
int main(void) {
  int x, y;
  printf("Insira um inteiro: ");
  scanf("%d", &x);
  printf("Insira outro inteiro a ser somado com o primeiro: ");
  scanf("%d", &y);
  imprimir();
  printf(" %d", sum(x, y));

  return 0;
}