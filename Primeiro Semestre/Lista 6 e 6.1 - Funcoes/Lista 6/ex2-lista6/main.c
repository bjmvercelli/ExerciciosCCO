/*Faça um programa que contenha uma função que recebe dois números
positivos x e y e retorne a soma dos N números inteiros existentes entre x e y
(inclusive). Use a função no programa principal para imprimir a soma dos números
inteiros entre dois números digitados pelos usuários. A soma só deve ser calculada
somente se os números digitados forem diferentes. */
#include <stdio.h>

int sum(int a,int b){
  int soma, i;
  if ( a > b){
    for (i = b; i <= a; i++){ // Se quisermos abrir o intervalo, basta por i > b; i < a
      soma += i;
    }
  } else if ( b > a){
    for (i = a; i <=b; i++){
      soma += i;
    }
  }
  return soma;
}
int main(void) {
  float x, y;
  printf("Insira dois numeros positivos: ");
  scanf("%f %f", &x, &y);
  if (x == y){return 0;}
  else{
  printf("%d", sum(x,y));
  }
  return 0;
}