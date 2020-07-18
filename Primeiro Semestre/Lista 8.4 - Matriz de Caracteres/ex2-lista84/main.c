/*Elabore uma função que receba uma matriz de nome (tamanho máximo de cada nome = 50) e
um nome (tamanho máximo = 50) e retorne 1 se o nome estiver na matriz e 0, caso contrário. */
#include <stdio.h>
#include <string.h>

int retorno (char mNomes[][50], char nome[]){
  int i, trig = 0;

  for (i = 0; i < 5; i++){
    if (strcmp(mNomes[i], nome) == 0){
      trig = 1;
    }
  }

  switch (trig){
    case 0:
      return 0;
      break;
    default:
      return 1;
  }
}

int main(void) {
  char mNomes[5][50], nome[50];
  int i, aux;

  for (i = 0; i < 5; i++){
    printf("Insira um nome da matriz: ");
    scanf(" %[^\n]", mNomes[i]);
  }
  
  printf("Agora, insira o nome para ser comparado: ");
  scanf(" %[^\n]", nome);

  aux = retorno(mNomes, nome);

  printf("\n%d", aux);

  return 0;
}