/*4. Elabore um algoritmo que leia um código correspondente à função de um funcionário e
o salário. O código é sempre uma letra, se o código da função for G (gerente), verifique
a regra abaixo.
  Se a função for gerente
i. Verifique se o salário < 5000, se for, escreva “Reajuste de Salário”, caso
contrário, escreva “Salário Compatível”
  Se a função não for gerente (se o código for diferente de G), escreva “Não é
gerente”*/

#include <stdio.h>

int main(void) {
  int sal;
  char cod;

  printf("Insira o codigo correspondente a funcao do funcionario: ");
  scanf("%c", &cod);


  if (cod == 'G' || cod == 'g'){

  printf("Agora, insira o salario do gerente: ");
  scanf("%d", &sal);
  
    if (sal >= 5000){
      printf("Salario compativel\n");
    } else {
      printf("Reajuste de Salário\n");
    }
  }else{
    printf("Não é gerente\n");
  }

  return 0;
}