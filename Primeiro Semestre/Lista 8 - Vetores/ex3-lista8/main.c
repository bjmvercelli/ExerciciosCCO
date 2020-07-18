/*Elabore um programa que leia uma lista de notas de N alunos (N <= 50 e deve ser
digitado pelo usuário) e retorne a quantidade de notas maiores que a média*/
#include <stdio.h>

int quant(){
  int n, i, cont = 0;
  float notas[50], soma = 0, media;
  
  printf("Insira a quantidade de alunos: ");
  scanf("%d", &n);

  for (i = 0; i < n; i++){
    printf("Insira a nota do aluno %d: ", i+1);
    scanf("%f", &notas[i]);

    soma += notas[i];
  }
  media = soma/n;
  printf("A media e %.2f", media);

  for (i = 0; i < n; i++){
    if (notas[i] > media){
      cont++;
    }
  }
  return cont;
}

int main(void) {
  int res = quant();

  printf("\nA quantidade de notas maiores que a media e: %d", res);
  return 0;
}