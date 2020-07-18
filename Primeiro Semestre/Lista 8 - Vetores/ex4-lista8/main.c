/*Elabore um programa que leia 10 números inteiros e armazene em um vetor. Depois
de preenchido o vetor, imprima somente os números pares do vetor*/
#include <stdio.h>

void pares(){
  int nums[10], i;

  for (i = 0; i < 10; i++){
    printf("Insira um inteiro: ");
    scanf("%d", &nums[i]);
  }
  for (i = 0; i < 10; i++){
    if (nums[i] % 2 == 0){
      printf("%d\t", nums[i]);
    }
  } 
}

int main(void) {
  pares();
  return 0;
}