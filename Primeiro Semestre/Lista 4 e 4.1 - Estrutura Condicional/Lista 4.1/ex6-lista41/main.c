/**/
#include <stdio.h>
#include <math.h>

int main(void) {
  float x, y;

  printf("Insira o valor de 'x' (para x >= 5): ");
  scanf("%f", &x);

  y = (5*x + 3)/ sqrt(pow(x,2)-16);

  printf("O valor de f(x) é: %.1f\n", y);

  return 0;
}