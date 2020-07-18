/*Escreva um programa que leia um conjunto de notas de 10 alunos em um curso e
retorne a quantidade de alunos que tiraram mais que a média.*/
#include <stdio.h>

int quant(){
  float notas[10], media, soma = 0;
  int i, cont;

  for(i = 0; i < 10; i++){
    printf("Insira a nota do aluno %d: ", i+1);
    scanf("%f", &notas[i]);

    soma += notas[i];
  } 
  media = soma/10;
  printf("Media = %.2f", media); // Referencia para conferir o resultado

  for (i = 0; i < 10; i++){
    if (notas[i] > media){
      cont++;
    }
  }
  return cont;
}

int main(void) {
  int res;

  res = quant();

  printf("\nA quantide de alunos que tiraram mais que a media e: %d", res);

  return 0;
}