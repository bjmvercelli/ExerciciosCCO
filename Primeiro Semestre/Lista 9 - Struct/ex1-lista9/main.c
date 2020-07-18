/*Crie uma estrutura para representar as informações de um aluno contendo os seguintes dados:
matrícula (inteiro), código do curso (inteiro) e rendimento acadêmico (float).
a. No programa principal, use a estrutura elaborada para preencher as informações de um
aluno com dados digitados no teclado.
b. Imprima estas informações na tela.
c. Crie um campo nome na estrutura que deve ser uma cadeia de caractere de tamanho
máximo = 100.
d. No programa, depois de imprimir as informações do aluno, verifique se o nome do aluno
é “João Jose da Silva”. Se for, imprima a matrícula do aluno. Caso contrário, imprima
“Aluno não encontrado”.*/
#include <stdio.h>
#include <string.h>

typedef struct infoAlunos{
  int matricula;
  int codigo;
  float rendimento;
  char nome[100];

} aluno;

int main(void) {
  aluno a;
  int i;

  printf("Insira a matricula do aluno: ");
  scanf("%d", &a.matricula);
  printf("Insira o codigo do aluno: ");
  scanf("%d", &a.codigo);
  printf("Insira o rendimento do aluno: ");
  scanf("%f", &a.rendimento);

  printf("Matricula: %d\nCodigo: %d\nRendimento: %.2f", a.matricula, a.codigo, a.rendimento);

  printf("\nAgora, insira o nome do aluno: ");
  scanf(" %[^\n]", a.nome);

  if (strcmp(a.nome, "Joao Jose da Silva") == 0){
    printf("\n%d", a.matricula);
  } else {
    printf("Aluno nao encontrado");
  }
  
  return 0;
}