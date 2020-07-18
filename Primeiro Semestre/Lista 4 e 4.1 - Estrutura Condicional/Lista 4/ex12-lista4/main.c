/*
. Fazer um algoritmo que dado os lados de um triângulo A, B e C, verificar as seguintes
regras:
Se A2=B2+C2
  responder “triângulo é retângulo”,
Senão se A2>B2+C2
  responder “triângulo é obtusângulo”,
Senão, responder “nenhuma das opções”

*/
#include <stdio.h>

int main(void) {
  float a, b, c;

  printf("Insira a medida do lado A do triangulo: ");
  scanf("%f",&a);

  printf("Agora, a medida do lado B: ");
  scanf("%f", &b);

  printf("Finalmente, a medida do lado C: ");
  scanf("%f", &c);

  if (a*a == b*b + c*c){
    printf("O triangulo é retangulo.\n");
  } else if (a*a > b*b + c*c){
    printf("O triangulo é obtusangulo.\n");
  } else {
    printf("Nenhuma das opçoes.\n");
  }

  return 0;
}