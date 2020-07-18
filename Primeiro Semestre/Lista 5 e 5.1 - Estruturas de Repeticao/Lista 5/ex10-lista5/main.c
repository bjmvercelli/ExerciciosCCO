/*Escreva um algoritmo que leia o código do funcionário (inteiro), o salário bruto, o valor do
desconto e a gratificação do funcionário e escreva na tela o código e o valor do salário líquido
(salário líquido = bruto – desconto + gratificação) de cada funcionário lido. Os dados devem ser
lidos até que o código 0 seja digitado. Se o código for menor que 0 ou maior que 999, imprimir
a mensagem: código inválido. */
#include <stdio.h>

int main(void) {
  int cod;
  float sal, desc, grat, salLiq;

  printf("Insira o codigo do funcionário: ");
  scanf("%d", &cod);
  
  if (cod < 0 || cod > 999){
    printf("Codigo invalido.\n");
  } else {
      while (cod != 0){
      printf("Insira o salario bruto do funcionario: ");
      scanf("%f", &sal);
      printf("Insira o valor do desconto do funcionario: ");
      scanf("%f", &desc);
      printf("Insira a gratificação do funcionario: ");
      scanf("%f", &grat);

      salLiq = sal - desc + grat;

      printf("O salario liquido do funcionario de código %d é igual a R$ %.2f.\n", cod, salLiq);

      printf("Insira o codigo do funcionario: ");
      scanf("%d", &cod);
    }
  }
  return 0;
}