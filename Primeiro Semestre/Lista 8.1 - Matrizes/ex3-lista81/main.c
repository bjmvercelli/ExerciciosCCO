/*Elabore um programa que leia o código e a quantidade em estoque de 10 produtos e armazene
esses dados em uma matriz de maneira que a primeira linha contenha o código e a segunda
linha seja preenchida pela quantidade. Depois de preenchida a matriz, imprima a quantidade
total de produtos e o código de todos os produtos com quantidade maior que 10.*/
#include <stdio.h>

int main(void) {
  int cod[10], quant[10], matriz[2][10], i, j, qTotal = 0, codMaior[10];

  for (i = 0; i < 2; i ++){
    for (j = 0; j < 10; j ++){
      if ( i == 0){
        printf("Insira o codigo do produto %d: ", j+1);
        scanf("%d", &cod[j]);
      } else {
        printf("Insira a quantidade do produto %d: ", j+1);
        scanf("%d", &quant[j]);
      }
    }
  }

  printf("\n");

  for (i = 0; i < 2; i ++){
    for (j = 0; j < 10; j ++){
      if (i == 1){
        qTotal += quant[j];
        if (quant[j] > 10){
          codMaior[j] = cod[j];
          printf("%d\t", codMaior[j]);
        }
      }
    }
  }
  
  printf("\n\nA quantidade total de produtos e: %d", qTotal);
  return 0;
}