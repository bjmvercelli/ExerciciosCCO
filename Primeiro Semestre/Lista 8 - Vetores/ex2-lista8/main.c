/*Escreva um programa que leia um conjunto de notas de 10 alunos e o código desses
alunos (cada código é uma letra) e imprima o código e a nota dos alunos que tiraram
mais que a média.*/
#include <stdio.h>

void quant(){
  float notas[10], media, soma = 0;
  int i, cont;
  char cod[10];

  for(i = 0; i < 10; i++){
    printf("Insira a nota do aluno %d: ", i+1);
    scanf("%f", &notas[i]);
    printf("Insira o codigo do aluno %d: ", i+1);
    scanf(" %c", &cod[i]);

    soma += notas[i];
  } 
  media = soma/10;
  printf("Media = %.2f", media); // Referencia para conferir o resultado

  printf("\nAlunos acima da media: ");
  for (i = 0; i < 10; i++){
    if (notas[i] > media){
      printf("\nCodigo '%c' - Nota %.2f", cod[i], notas[i]);
    }
  }
}

int main(void) {
  
  quant();

  return 0;
}