/*Faça um algoritmo que calcule e imprima o salário reajustado de um funcionário de
acordo com a seguinte regra:
 Salários até 300, reajuste 50%
 Salários maiores que 300, reajuste 30%
Você deve validar o valor do salário, caso o valor fornecido for menor que 100 e maior
que 4500, exibir a mensagem, valor de salário inválido. 
 */
#include <stdio.h>

int main(void) {
  float sal, nsal;

  printf("Insira o salario do funcionario: ");
  scanf("%f", &sal);

  if (sal < 100 || sal > 4500){
    printf("Salario invalido.\n");
  } else if (sal <= 300) {
    nsal = sal + (sal/2);
    printf("O salario reajustado é: %.f\n", nsal);
  } else {
    nsal = sal + (0.3*sal);
    printf("O salario reajutado é: %.f\n", nsal);
  }

  return 0;
}