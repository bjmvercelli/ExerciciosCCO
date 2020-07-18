/*Utilizando a estrutura do exercício 1, crie um programa para facilitar o gerenciamento das
informações dos alunos de uma turma. A turma tem, no máximo, 50 alunos. A quantidade de
alunos deve ser fornecida pelo usuário. Crie funções para:
a. Preencher a lista de alunos;
b. Imprimir os dados de todos os alunos da lista;
c. Dado um número de matrícula, verificar se o aluno existe na lista. Se existir, imprima o
nome. Caso contrário, imprima uma mensagem de notificação;
d. Dado um nome, imprimir os dados de todos os alunos com o mesmo nome. Considere
que há alunos com nomes repetidos.
e. Dado um nome, retornar a quantidade de alunos com o nome fornecido.*/
#include <stdio.h>
#include <string.h>

typedef struct infoAluno {
  int matricula;
  int codigo;
  float rendimento;
  char nome[100];
} aluno;

void fill(int n){
  aluno al[50];
  int i;

  for (i = 0; i < n; i++)
  printf("Insira a matricula do %dº aluno: ", i+1);
  scanf("%d", &al[i].matricula);
  printf("Insira o codigo do curso do %dº aluno: ", i+1);
  scanf("%d", &al[i].codigo);
  printf("Insira o rendimento do %dº aluno: ", i+1);
  scanf("%f", &al[i].rendimento);
  printf("Insira o nome do %dº aluno: ", i+1);
  scanf(" %[^\n]", al[i].nome);
}

int main(void) {
  int n;

  printf("Insira o numero de alunos: ");
  scanf("%d", &n);

  fill(n);
  

  return 0;
}