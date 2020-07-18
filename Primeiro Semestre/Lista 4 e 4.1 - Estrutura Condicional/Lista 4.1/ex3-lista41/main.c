/*
São dados um número n e quatro outros, a, b, c e d correspondentes, respectivamente, às
extremidades dos intervalos [a,b] e [c,d], sendo a<b, c<d e a<c. Determinar se n pertence
somente ao intervalo [a,b] ou, se pertence a ambos ou não pertence a nenhum dos intervalos.
Em cada um dos casos, exibir uma mensagem ao usuário.
*/
#include <stdio.h>

int main(void) {
  float n, a, b, c, d;

  printf("Insira o numero 'n': ");
  scanf("%f", &n);

  
  printf("Insira o numero 'a': ");
  scanf("%f", &a);

  
  printf("Insira o numero 'b': ");
  scanf("%f", &b);

  
  printf("Insira o numero 'c': ");
  scanf("%f", &c);

  
  printf("Insira o numero 'd': ");
  scanf("%f", &d);

  if(n >= a && n <= b){
    printf("O número 'n' pertence ao intervalo [a, b].\n");
  } else if ( n >= a && n <= b && n >= c && n <= d){
    printf("O número 'n' pertence a ambos os intervalos.\n");
  } else if ( n < a || n > d){
    printf("O número 'n' não pertence a nenhum intervalo.\n");
  }

  return 0;
}