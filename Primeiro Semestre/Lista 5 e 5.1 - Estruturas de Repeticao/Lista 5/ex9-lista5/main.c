/*Escreva um algoritmo que leia os dados de funcionários de uma empresa, salário e o código
(inteiro), e retorne o código e o salário do funcionário que ganha mais. Todos os salários são
diferentes. Não é necessário validar a entrada de dados. A lista termina quando for digitado o
código 0. */
#include <stdio.h>

int main(void) {
  int cod, cAux;
  float sal, sAux;

  printf("Insira o codigo do funcionario: ");
  scanf("%d", &cod);
  sAux = 0;

  while ( cod != 0){
    printf("Insira o valor do salario: ");
    scanf("%f", &sal);
    if (sal > sAux){
      sAux = sal;
      cAux = cod;
    }
    printf("Digite o codigo do funcionario: ");
    scanf("%d", &cod);
  }

  printf("O maior salario é de R$ %.2f e pertence ao funcionario de codigo %d", sAux, cAux);

  return 0;
}