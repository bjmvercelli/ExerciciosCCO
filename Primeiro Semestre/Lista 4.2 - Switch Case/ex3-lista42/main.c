/*Um banco concederá um crédito especial aos seus clientes que será variável em função do
saldo médio no último ano. Faça um algoritmo que leia o saldo médio de um cliente e
calcule o valor do crédito de acordo com os dados abaixo. Mostre uma mensagem
informando o saldo médio e o valor do crédito. Caso o valor esteja fora desse intervalo
[0,1000], emitir a mensagem Valor inválido.
Saldo médio Percentual Crédito
 de 0 a 200 nenhum crédito
 de 201 a 400 20% do valor do saldo médio
 de 401 a 600 30% do valor do saldo médio
 de 601 até 1000 40% do valor do saldo médio*/
#include <stdio.h>

int main(void) {
  int sal, aux;
  float cred;

  printf("Insira o salaro medio do cliente no ultimo ano: ");
  scanf("%d", &sal);

  switch ( sal ){
    case 0 ... 200:
      printf("O salário médio do cliente é R$ %d e o crédito será nulo.\n", sal);
      break;
    
    case 201 ... 400:
      printf("O salário médio do cliente é R$ %d e o crédito será de R$ %.2f.\n", sal, 0.2*sal);
      break;

    case 401 ... 600:
      printf("O salário médio do cliente é RS %d e o crédito será de R$ %.2f.\n", sal, 0.3*sal);
      break;
    
    case 601 ... 1000: 
      printf("O salário médio do cliente é R$ %d e o crédito será de R$ %.2f.\n", sal, 0.4*sal);
      break;
    
    default:
      printf("Valor inválido.\n");
  }

  return 0;
}