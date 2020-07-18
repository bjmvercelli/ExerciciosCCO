/*Escreva um algoritmo que leia a categoria de uma lista de funcionários e retorne o salário do
funcionário considerando a regra abaixo. Além do salário, retorne a soma do salário de todas as
categorias digitadas.
 Categoria A – Salário 10.000
 Categoria B – Salário 5.000
A lista termina quando for digitada uma categoria = X. Caso usuário digite uma categoria diferente,
deve ser exibida uma mensagem: Categoria Inválida*/
#include <stdio.h>

int main(void) {
  char cat, catAux;
  float sumA, sumB;

  sumA = sumB = 0;
  
  printf("Insira a categoria do funcionario: ");
  scanf("%c", &cat);

  while (cat != 'X'){
    if (cat == 'A'){
      sumA += 10.000;
      printf("O salário do funcionario é R$ 10.000 e a soma dos salarios dessa categoria é igual a R$%.3f.\n", sumA);
      printf("Insira a categoria do funcionario: ");
      scanf(" %c", &cat);
    
    } else if (cat == 'B'){
      sumB += 5.000;
      printf("O salário do funcionario é R$ 5.000 e a soma dos salarios dessa categoria é igual a R$%.3f.\n", sumB);
      printf("Insira a categoria do funcionario: ");
      scanf(" %c", &cat);
      
    } else {
      printf("Categoria Inválida.\n");
      printf("Insira a categoria do funcionario: ");
      scanf(" %c", &cat);
    }
  } 
  return 0;
}