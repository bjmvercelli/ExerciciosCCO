/*Elabore uma função que receba dois números inteiros e positivos e calcule a soma dos
números no intervalo fechado definido entre o primeiro e o segundo número. Use a
função no programa principal para calcular a soma entre dois números fornecidos pelo
usuário. A função só deverá ser executada caso o primeiro valor seja maior ou igual ao
segundo.
Dica: um dos parâmetros recebidos pela função deve ser o endereço da variável que deverá
guardar o valor da soma.*/
#include <stdio.h>

void sum (int n1, int n2, int *pResult){
  int i;
  for (i = n2; i <= n1; i++){
    *pResult += i;
  }
}


int main(void) {
  int num1, num2, result = 0;
  printf("Insira dois inteiros positivos: ");
  scanf("%d %d", &num1, &num2);
  if (num1 >= num2){
    sum(num1, num2, &result);
    printf("O resultado e %d", result);
  } else {
    return 0;
  }

  return 0;
}