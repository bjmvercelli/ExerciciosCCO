/*Escreva uma função que receba o ano e escreva o seguinte menu na tela:
Programa de Treinamento em C
Universidade Federal de Itajubá
Curso Ciência da Computação
Nome: (30 espaços) Ano_Recebido*/
#include <stdio.h>

void menu (int ano){
  char esp = ' ';
  printf("Progrma de Treinamento em C\nCurso Ciencia da computação\nNome:%30c %d", esp, ano);
}

int main(void) {
  int yr;
  printf("Insira o ano: ");
  scanf("%d", &yr);
  menu(yr);
  return 0;
}