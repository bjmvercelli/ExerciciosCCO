/*Elabore um programa que leia uma lista de 20 códigos de produto (códigos são
números inteiros) e seus respectivos valores e guarde essas informações em dois
vetores separados, um para os códigos e outro para os valores. Depois de
preenchidos os dois vetores, retorne o código do produto mais caro. Considere que
os valores são diferentes um do outro.*/
/*OBS: Farei com apenas 5 codigos e valores, para trabalhar com 20 basta editar as condições nos laços for*/
#include <stdio.h>

int prodMaisCaro(){
  int cods[20], i, cont = 0, cMaior, vMaior;
  float vals[20];

  for (i = 0; i < 5; i++){
    printf("Insira o codigo do produto: ");
    scanf("%d", &cods[i]);
    printf("Agora, insira o valor desse produto: ");
    scanf("%f", &vals[i]);
  }
  
  for (i = 0; i < 5; i++){
    if (i == 0){

      vMaior = vals[i];
    } else {
      if (vals[i] > vMaior){
        vMaior = vals[i];
        cMaior = cods[i];
      }
    }
  }
  return cMaior;
}

int main(void) {
  int maisCaro = prodMaisCaro();

  printf("O codigo do produto mais caro e: %d", maisCaro);
  return 0;
}