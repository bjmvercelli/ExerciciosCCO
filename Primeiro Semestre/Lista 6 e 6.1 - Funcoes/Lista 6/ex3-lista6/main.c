/* Faça uma função que receba 2 valores inteiros e imprima-os de forma
ordenada. Utilize a função no programa principal.*/
#include <stdio.h>

void ord(int a, int b){
  if ( a > b){
    printf("%d %d", b, a);
  } else {
    printf("%d %d", a, b);
  }
  return;
}

int main(void) {
  int x, y;
  printf("Insira dois inteiros: ");
  scanf("%d %d", &x, &y);
  ord(x,y);
  return 0;
}