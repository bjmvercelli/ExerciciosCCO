/*Faça um programa que receba a idade e o peso de quinze pessoas, calcule e mostre as
médias dos pesos das pessoas da mesma faixa etária. As faixas etárias são: de 1 a 10
anos, de 11 a 20 anos, de 21 a 30 anos e acima de 31 anos.*/
#include <stdio.h>

int main(void) {
  int i, id, c1 = 0, c2 = 0, c3 = 0, c4 = 0;
  float peso, pt1 = 0, pt2 = 0, pt3 = 0, pt4= 0;

  for (i = 1; i < 16; i++){
    printf("Insira a IDADE do individuo %d: ", i);
    scanf("%d", &id);
    printf("Insira o PESO do individuo %d: ", i);
    scanf("%f", &peso);
    if (id >= 1 && id <= 10){
      c1 ++;
      pt1 += peso;
    } else if (id >= 11 && id <=20){
      c2 ++;
      pt2 += peso;
    } else if (id >=21 && id <=30){
      c3 ++;
      pt3 +=peso;
    } else if (id > 31){
      c4 ++;
      pt4 += peso;
    }
  }
  printf("A media de peso na faixa etaria de 0 a 10 anos e igual a %.2f\n", pt1/c1);
  printf("A media de peso na faixa etaria de 11 a 20 anos e igual a %.2f\n", pt2/c2);
  printf("A media de peso na faixa etaria de 21 a 30 anos e igual a %.2f\n", pt3/c3);
  printf("A media de peso na faixa etaria acima de 31 anos e igual a %.2f\n", pt4/c4);    
  

  return 0;
}