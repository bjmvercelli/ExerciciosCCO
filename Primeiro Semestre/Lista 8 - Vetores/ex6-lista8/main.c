/*Elabore um programa que leia uma sequencia de caractere digitados pelo usuário e
em seguida peça ao usuário que digite uma letra e retorne a quantidade de vezes que
a letra aparece na sequencia de caractere digitados. O tamanho máximo da
sequência é 30*/
#include <stdio.h>

int quant(){
  char seq[10], letra;
  int i, cont;

  for (i = 0; i < 10; i++){
    printf("Insira um caractere: ");
    scanf(" %c", &seq[i]);
  }
  printf("Agora, insira uma letra: ");
  scanf(" %c", &letra);

  for (i = 0; i < 10; i++){
    if (letra == seq[i]){
      cont++;
    }
  }
  return cont;
}

int main(void) {
  int res = quant();

  printf("\nA quantidade de vezes que a letra aparece na sequencia e: %d", res);
  return 0;
}