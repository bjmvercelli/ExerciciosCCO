/*Escreva um programa em C que leia uma lista de N cadeias de caractere de tamanho
máximo igual a 50 e armazene a quantidade de caractere de cada cadeia em um vetor de
inteiros. A posição i do vetor de inteiros deve armazenar o tamanho da i-ésima cadeia
digitada. N deve ser fornecido pelo usuário (valor máximo = 10). Imprima o vetor de
tamanhos.
Dica: utilize a função strlen da biblioteca string.h que retorna o tamanho de uma cadeia de
caracter. Por exemplo, strlen(“casa”) é igual a 4.*/
#include <stdio.h>
#include <string.h>

int main(void) {
  char strings[10][50];
  int quant[10], i, n;

  printf("Insira o valor de N: ");
  scanf("%d", &n);

  for (i = 0; i < n; i++){
    printf("Insira a %dª palavra: ", i+1);
    scanf("%s", strings[i]);
  }

  for (i = 0; i < n; i++){
    quant[i] = strlen(strings[i]);
  }

  for (i=0; i < n; i++){
    printf("%d ", quant[i]);
  }
  return 0;
}