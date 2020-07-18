#include <stdio.h>

int main(void) {
  int i;
  float n, md;

  md = 0;

  for (i = 1; i < 16; i ++){
    printf("Insira um numero: ");
    scanf("%f", &n);

    md = md + n/15;

  }
  printf("A média dos números é %.2f", md);
  return 0;
}