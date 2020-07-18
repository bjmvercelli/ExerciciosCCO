#include <stdio.h>

void alteraVetor(int a[], int b[]){
  int i;
  for (i = 0; i <5; i++){
    b[i] += a[i];
  }
}

int main(void) {
  int a[5] = {10, 20, 30, 40, 50}, b[5] = {1, 2, 3, 4, 5};
  int i;

  alteraVetor(a, b);

  for (i = 0; i < 5; i++){
    printf("%d ", b[i]);
  } 
  return 0;
}