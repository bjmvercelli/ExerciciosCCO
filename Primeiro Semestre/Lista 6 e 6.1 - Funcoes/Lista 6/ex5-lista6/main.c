/* Faça uma função que recebe a média final de um aluno e retorne o seu
conceito, conforme a regra abaixo:
o 0 <= media < 5, aluno reprovado (retorne R)
o 5 <= media < 7, aluno em exame (retorne E)
o media >= 7, aluno aprovado (retorne A)*/
#include <stdio.h>

char concept(float md){
  if ( md >= 0 && md < 5){
    return 'R';
  } else if (md >= 5 && md < 7){
    return 'E';
  } else if (md >= 7 && md <= 10){
    return 'A';
  } else {return 0;}
}
int main(void) {
  float media;
  printf("Insira a media final do aluno: ");
  scanf("%f", &media);
  printf("%c\n", concept(media));
  return 0;
}