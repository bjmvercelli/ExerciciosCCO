/*Construa um algoritmo que receba dois números reais e um dos seguintes símbolos: +, -, *
ou /, o qual designará qual operação será aplicada considerando os valores recebidos como
seus operandos. Retorne o resultado da operação.*/
#include <stdio.h>

int main(void) {
  float n1, n2;
  char smb;

  printf("Insira os dois números reais a serem operacionados: ");
  scanf(" %f %f", &n1, &n2); 

  printf("Agora, insira o simbolo da operação (+, -, *, /): ");
  scanf(" %c", &smb);

  switch (smb){
    case '+': 
      printf("A soma dos números é igual a %.2f.\n", n1 + n2);
      break;
    
    case '-':
      printf("A subtração nos números é igual a %.2f.\n", n1 - n2);
      break;

    case '*':
      printf("O produto dos números é igual a %.2f.\n", n1 * n2);
      break;

    case '/':
      printf("A divisão dos números é igual a %.2f.\n", n1 / n2);
      break;
    
    default :
      printf("Por favor, insira um símbolo válido.\n");
      break;
  }

  return 0;
}