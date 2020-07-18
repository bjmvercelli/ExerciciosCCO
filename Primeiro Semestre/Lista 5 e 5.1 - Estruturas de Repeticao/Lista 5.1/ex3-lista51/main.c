/*Criar um algoritmo que leia os limites inferior e superior de um intervalo e imprima
todos os números inteiros pares no intervalo aberto e o somatório desses números.
Suponha que os números digitados sejam crescentes*/
#include <stdio.h>

int main(void) {
  int inf, sup, i, sum;

  printf("Insira o limite inferior do intervalo: ");
  scanf("%d", &inf);
  printf("Insira o limite superior do intervalo: ");
  scanf("%d", &sup);

  for (i = inf + 1; i < sup; i++){
    if (i % 2 == 0){
    printf("%d, ", i);
    sum += i;
    } else {continue;}
  }
  printf("\nA soma desses numeros é igual a %d", sum);
  return 0;
}
  
