//Na questão 1, considere que será digitada uma frase, podendo ter espaço
#include <stdio.h>
#include <string.h>

int main(void) {
  char pal1[11], pal2[11];

  printf("Insira uma string: ");
  scanf("%[^\n]", pal1);
  printf("Insira outra string: ");
  scanf(" %[^\n]", pal2);

  if(strcmp(pal1, pal2) == 0){
    printf("As palavras sao iguais!!");
  } else {
    strcpy(pal1, pal2);
    printf("%s\n%s",pal1, pal2);
  }

  return 0;
}