/*Calcular a soma dos números pares de 100 até 200, inclusive*/
#include <stdio.h>

int main(void) {
  int i;

  for (i = 100; i < 201; i = i + 2){
    printf("%d\n", i);
  }

  return 0;
}