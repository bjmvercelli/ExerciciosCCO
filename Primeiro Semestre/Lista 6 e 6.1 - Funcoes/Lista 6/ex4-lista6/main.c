/* Faça uma função que imprima na tela o seguinte cabeçalho:
Curso Ciência da Computacao
Disciplina – Fundamentos de Programação
Universidade Federal de Itajubá
Não é necessário implementar a função principal. Nos demais exercícios, use essa
função para imprimir esse cabeçalho. Com o que sabemos, você vai precisar copiar o
código dessa função para o código dos respectivos programas.*/
#include <stdio.h>

void header(){
  printf("Curso - Ciencia da computacao\nDisciplina - Fundamentos de programacao\nUniversidade Federal de Itajuba.");
}

int main(void) {
  header();
  return 0;
}