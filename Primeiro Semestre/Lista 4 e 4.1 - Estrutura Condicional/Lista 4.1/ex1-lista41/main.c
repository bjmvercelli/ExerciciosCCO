/*
Uma empresa resolveu dar um abono salarial aos seus funcionários. O abono é definido de
acordo com a seguinte regra:
a. Se quantidade mensal de peças produzida pelo funcionário durante os últimos 12 meses > 120, o
funcionário ganha 3% do valor líquido do salário.
b. Se o funcionário não faltou durante os 12 últimos meses, ganha 2% do valor líquido do salário.
Os abonos são acumulativos, ou seja, um funcionário pode estar nas duas categorias e
ganhar os dois tipos de abono.
Elabore um algoritmo que receba o valor líquido do salário, a quantidade de falta de um
funcionário e a quantidade de peças produzidas nos últimos 12 meses e retorne o valor do salário
mais o abono.
*/
#include <stdio.h>

int main(void) {
  int sal, falta, qnt;
  float novoSal;

  printf("Insira o salario atual do funcionario: ");
  scanf("%d", &sal);

  printf("Agora, insira o numero de faltas do funcionario durante os ultimos 12 meses: ");
  scanf("%d", &falta);

  printf("Por fim, insira a quantidade de peças produzidas pelo funcionario nos ultimos 12 meses: ");
  scanf("%d", &qnt);

  if (qnt > 120){
    novoSal = sal + (0.03*sal);
    printf("O funcionario produziu mais de 120 peças no ultimo ano, seu novo salário será %.f\n", novoSal);

  } else if (falta == 0){
    novoSal = sal + (0.02*sal);
    printf("O funcionario nao faltou no ultimo ano, logo seu novo salario será %.f\n", novoSal);

  } else if (qnt > 120 && falta == 0){
    novoSal = sal + (0.03*sal) + (0.02*sal);
    printf("O funcionario produziu mais de 120 peças e nao faltou no ultimo ano, por isso seu novo salario será %.f\n", novoSal);
  }
  return 0;
}