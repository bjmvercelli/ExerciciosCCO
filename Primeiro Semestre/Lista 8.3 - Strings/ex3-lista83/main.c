/*Escreva um programa que leia uma cadeia de caractere com espaço e uma letra e imprima a
quantidade de vezes que a letra ocorre na cadeia de caractere*/
#include <stdio.h>
#include <string.h>

int main(void) {
  char frase[30], letra;
  int i, cont = 0;

  printf("Insira uma frase: ");
  scanf("%[^\n]", frase);

  printf("Agora, insira uma letra: ");
  scanf(" %c", &letra);

  for (i = 0; i < strlen(frase); i++){
    if (frase[i] == letra){
      cont++;
    }
  }

  printf("Essa letra aparece %d vezes na frase!", cont);
  return 0;
}