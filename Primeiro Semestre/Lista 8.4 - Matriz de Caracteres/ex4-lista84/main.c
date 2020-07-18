/*Elabore uma função que receba dois nomes (origem e destino), uma matriz de nomes (máximo
50 nomes) , a quantidade de nomes preenchidos na matriz e substitua toda ocorrência do nome
origem pelo nome destino. O tamanho máximo de cada nome é 100.*/
#include <stdio.h>
#include <string.h>

void func(char origem[], char destino[], char mNomes[][100], int n){
  int i;

  for (i = 0; i < n; i ++){
    if (strcmp(origem, mNomes[i]) == 0){
      strcpy(mNomes[i], destino);
    }
  }

}

int main(void) {
  char origem[100], destino[100], mNomes[50][100];
  int n, i;

  printf("Insira a quantidade de nomes: ");
  scanf("%d", &n);

  printf("Insira um nome(origem): ");
  scanf(" %[^\n]", origem);
  printf("Insira um nome(destino): ");
  scanf(" %[^\n]", destino);

  printf("\nAgora, preencheremos a matriz de nomes...\n");

  for (i = 0; i < n; i++){
    printf("Insira o %dº nome: ", i+1);
    scanf(" %[^\n]", mNomes[i]);
  }

  func(origem, destino, mNomes, n);

  printf("Com as substituicoes, a matriz de nomes será:\n");

  for (i = 0; i < n; i++){
    printf("%s\n", mNomes[i]);
  }

  return 0;
}