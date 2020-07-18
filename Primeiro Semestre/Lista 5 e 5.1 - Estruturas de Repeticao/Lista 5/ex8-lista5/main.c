/*Escreva um algoritmo que leia uma sequência de números digitados pelo usuário até que o
número 0 seja digitado e retorne a soma dos números digitados.
*/
#include <stdio.h>

int main(void) {
  float num, sum;

  printf("Insira um numero: ");
  scanf("%f", &num); // Aqui inicializamos a variavel.
  sum = num;;

  while ( num != 0){
    printf("Insira um numero: ");
    scanf("%f", &num);

    sum = sum + num;
  }

  printf("O resultado da soma e %.1f\n", sum);

  return 0;
}