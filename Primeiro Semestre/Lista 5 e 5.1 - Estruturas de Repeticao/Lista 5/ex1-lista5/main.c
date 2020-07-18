#include <stdio.h>

int main(void) {
  int i;
  float n;

  for (i = 0; i<10; i ++ ){
    printf("Insira um valor: ");
    scanf("%f", &n);
    
    printf("%.1f\n", n/2);
  }
  return 0;
}