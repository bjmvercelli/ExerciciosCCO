/*Escreva um algoritmo que leia o salário e o código (inteiro) de 20 funcionários e retorne o
código e o salário do funcionário que ganha mais. Todos os salários são diferentes. Não é
necessário validar o código.*/
#include <stdio.h>

int main(void) {
  int i, cod, cAux;
  float sal, sAux;

  for (i = 1; i < 6; i++){
    printf("Insira o *SALÁRIO* do funcionario %d: ", i);
    scanf("%f", &sal);
    printf("Insira o *CODIGO* do funcionario %d: ", i);
    scanf("%d", &cod);

    if (sal > sAux){
      sAux = sal;
      cAux = cod;
    } else {
      continue;
    }
  } 

  printf("O maior salario é de R$ %.2f e pertence ao funcionario de codigo %d.\n", sAux, cAux);

  return 0;
}