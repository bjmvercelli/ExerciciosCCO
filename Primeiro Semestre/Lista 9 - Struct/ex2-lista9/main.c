#include <stdio.h>

typedef struct infoLivros{
  int codigo;
  char titulo[100];
  int ano;
} livros;

int main(void) {
  livros l;

  printf("Insira o codigo do livro: ");
  scanf("%d", &l.codigo);
  printf("Insira o titulo do livro: ");
  scanf(" %[^\n]", l.titulo);
  printf("Insira o ano do livro: ");
  scanf("%d", &l.ano);

  printf("Codigo: %d\nTítulo: %s\nAno: %d", l.codigo, l.titulo, l.ano);
  return 0;
}