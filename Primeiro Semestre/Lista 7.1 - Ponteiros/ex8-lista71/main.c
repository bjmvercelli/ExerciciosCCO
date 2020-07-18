/*Faça um programa que imprima invertidos os nomes dos algarismos de um número
inteiro de três dígitos. Use a sua função no programa principal. Não é necessário validar
a entrada do número. Ex: 234 saída: quatro três dois.*/
#include <stdio.h>

void function (int num, int *p1, int *p2, int *p3){
      *p3 = num % 10;  // Ultimo digito 
      *p2 = (num/10)%10; // Central
      *p1 = (num/(10*10))%10; // Primeiro
}

int main(void) {
  int num, espUm, espDois, espTres;

  printf("Insira um inteiro de tres digitos: ");
  scanf("%d", &num);

  function (num, &espUm, &espDois, &espTres);
  
  printf("%d %d %d", espTres, espDois, espUm);
  return 0;
}