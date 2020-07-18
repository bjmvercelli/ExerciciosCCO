/*Utilize as funções dos exercícios 3 e 4 em um programa para preencher uma lista de nomes de
10 (usarei apenas 5 abaixo, porem a logica prevelece) alunos que deverão ser digitados pelo usuário. Em seguida, substituir um nome da lista por
um nome novo também digitado pelo usuário.*/
#include <stdio.h>
#include <string.h>

void func(char nomes[][50], char novoNome[], char oldNome[]){
  int i;

  for (i = 0; i < 5; i ++){
    printf("Insira o %dº nome: ", i+1);
    scanf(" %[^\n]", nomes[i]);
  }

  printf("\nInsira o nome a ser substituido: ");
  scanf(" %[^\n]", oldNome);

  printf("Por fim, insira o nome que o substituirá: ");
  scanf(" %[^\n]", novoNome);

  for (i = 0; i < 5; i ++){
    if (strcmp(oldNome, nomes[i]) == 0){
      strcpy(nomes[i], novoNome);
    }
  }
}

int main(void) {
  char nomes[5][50], novoNome[50], oldNome[50];
  int i;

  func(nomes, novoNome, oldNome);

  printf("Após as substituções, a nova matriz será: \n");
  for (i = 0; i < 5; i ++){
    printf("%s\n", nomes[i]);
  }
  
  return 0;
}