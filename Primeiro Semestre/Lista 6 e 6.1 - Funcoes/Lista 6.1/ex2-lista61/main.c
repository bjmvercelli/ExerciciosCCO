/* Escreva uma função que receba como parâmetro 2 números inteiros e positivos e um
caractere que deve indicar a operação que deve ser realizada entre os dois números
seguindo a ordem com que foram digitados. Retorne o resultado da operação. Caso
o segundo número digitado for igual a 0 e a operação escolhida for a divisão, a
função não deve ser chamada e deve ser exibida uma mensagem de erro ao usuário.
Utilize a função no programa principal.
*/
#include <stdio.h>
#include <stdlib.h>

float op(int a,int b, char operador){
  if (operador == '+'){
    return a+b;
  } else if(operador == '-'){
    return a-b;
  } else if (operador == '*'){
    return a*b;
  } else if (operador == '/'){
    return (float)a/b;
  } else {
    return 0;
  }
}
    
int main(void) {
  int n1, n2;
  char conta;
  printf("Insira dois inteiros positivos: ");
  scanf("%d %d", &n1, &n2);
  printf("Agora, insira o caractere da operação: ");
  scanf(" %c", &conta);

  if (n2 == 0 && conta == '/'){
    printf("ERRO");
  } else {
    printf("%.2f", op(n1, n2, conta));
  }  
  return 0;
}
