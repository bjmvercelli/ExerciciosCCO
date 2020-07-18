/*Elabore uma função que troca os valores de duas variáveis inteiras. Use a função no
programa principal para trocar dois valores digitados pelo usuário.*/
#include <stdio.h>

void troca (int *px, int *py){
  int aux;
  aux = *px;
  *px = *py;
  *py = aux;
}

int main(void) {
  int x,y;
  printf("Insira os valores: ");
  scanf("%d %d", &x, &y);
  troca(&x, &y);
  printf("%d %d", x, y);
  return 0;
}