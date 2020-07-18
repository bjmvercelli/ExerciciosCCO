/*3. Desenvolver um algoritmo que leia um número inteiro e verifique se é divisível por 5 e
divisível por 3 (ao mesmo tempo) e exiba uma mensagem com esta informação. Caso
não seja, é necessário exibir uma mensagem.
*/

#include <stdio.h>

int main(void) {
  int num;

  printf("Insira um numero inteiro: ");
  scanf("%d", &num);

  if (num % 5 == 0 && num % 3 == 0){
    printf("Esse numero e divisivel por 5 e por 3 (ao mesmo tempo)\n");
  } else {
    printf("Esse numero nao e divisivel por 5 e por 3 (ao mesmo tempo)\n");
  }

  return 0;
}