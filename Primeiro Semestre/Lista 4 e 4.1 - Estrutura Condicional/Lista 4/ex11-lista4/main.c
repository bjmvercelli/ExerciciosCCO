/*
Construa um algoritmo que receba uma letra que corresponde a um time de futebol e
retorne o código do estado de origem do time. As letras válidas são:
A. São Paulo
B. Palmeiras
C. Flamengo
D. Vasco
E. Atlético Mineiro
F. Cruzeiro
G. Bahia
H. Grêmio
I. Internacional
  Os códigos dos estados são:
1- Minas Gerais
2- São Paulo
3- Rio de Janeiro
4- Bahia
5- Rio Grande do Sul
Exibir uma mensagem caso a letra correspondente ao time seja inválida (diferente dos
valores fornecidos).
*/

#include <stdio.h>

int main(void) {
  char letra;

  printf("Insira a letra correspondente ao time: ");
  scanf("%c", &letra);

  if(letra == 'A' || letra == 'B'){
    printf("O codigo do estado é: 2 (SP)\n");
  } else if (letra == 'C' || letra == 'D'){
    printf("O codigo do estado é: 3 (RJ)\n");
  } else if (letra == 'E' || letra == 'F'){
    printf("O codigo do estado é: 1 (MG)\n");
  } else if (letra == 'G'){
    printf("O codigo do estado é: 4 (BA)\n");
  } else if (letra == 'H' || letra == 'I'){
    printf("O codigo do estado é: 5 (RS)\n");
  }
  return 0;
}