/*Faça uma função que recebe por parâmetro o raio de uma esfera e calcula o seu
volume (v = 4/3.P .R3). */
#include <stdio.h>
#include <math.h>

float vol (float raio){
  return (float)4/3*3.14*pow(raio,3);
}

int main(void) {
  float r;
  printf("Insira o raio da esfera: ");
  scanf("%f", &r);

  printf("V = %.2f", vol(r));
  return 0;
}