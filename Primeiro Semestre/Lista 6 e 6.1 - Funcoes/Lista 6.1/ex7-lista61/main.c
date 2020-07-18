/*Faça uma função que receba 3 valores inteiros por parâmetro e imprima-os de forma
ordenada.*/
#include <stdio.h>

void ord (int v1, int v2, int v3){
  if (v1 > v2 && v2 > v3){
    printf("%d %d %d", v3, v2, v1);
  } else if (v1 > v2 && v1 < v3){
    printf("%d %d %d", v2, v1, v3);
  } else if (v1 < v2 && v1 > v3){
    printf("%d %d %d", v3, v1, v2);
  } else if (v1 < v2 && v2 < v3){
    printf("%d %d %d", v1, v2, v3);
  } else if (v1 < v3 && v2 > v3){
    printf("%d %d %d", v1, v3, v2);
  } else if (v3 > v2 && v1 > v3){
    printf("%d %d %d", v2, v3, v1);
  }
}

int main(void) {
  int v1, v2, v3;
  printf("Insira 3 inteiros: ");
  scanf("%d %d %d", &v1, &v2, &v3);

  ord(v1, v2, v3);
  return 0;
}