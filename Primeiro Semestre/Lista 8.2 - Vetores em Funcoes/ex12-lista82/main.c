#include <stdio.h>

int main(void) {
  int mat[4] = {0, 1, 2, 3}, *p, x;

  x = (*mat)++;
//  printf("%p", p);
//  printf("\n%p", mat+1);
printf("%d", x);

  

  return 0;
}