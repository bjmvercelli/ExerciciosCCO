/*Elabore programa que preencha uma matriz de nomes contendo dois nomes com no máximo 50
caracteres. Imprima os nomes digitados a partir da leitura da matriz.
*/
#include <stdio.h>

int main(void) {
  char nomes[2][50];
  int i;

  for (i = 0; i < 2; i++){
    printf("Insira o nome: ");
    scanf(" %[^\n]", nomes[i]);
  }

  for (i = 0; i < 2; i++){
    printf("%s\n", nomes[i]);
  }
  
  return 0;
}