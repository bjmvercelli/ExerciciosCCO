#include <stdio.h>

int main(void) {
  int i;
  float n, sum;
  
  sum = 0;  

  for (i = 0; i < 10; i++){
    printf("Insira um numero: ");
    scanf("%f", &n);
    
    sum = sum + n;
  }
  printf("A soma desses números é igual a %.2f", sum);

  return 0;
}