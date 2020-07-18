/*Escreva um programa que leia duas cadeias de caractere sem espaço e verifique se as duas
são iguais. Se for, deve ser exibida uma mensagem, caso contrário, a primeira cadeia
digitada deve ser substituída pela primeira. 
*/
#include <stdio.h>
#include <string.h>

int main(void) {
  char pal1[10], pal2[10];

  printf("Insira uma string: ");
  scanf("%s", pal1);
  printf("Insira outra string: ");
  scanf("%s", pal2);

  if(strcmp(pal1, pal2) == 0){
    printf("As palavras sao iguais!!");
  } else {
    strcpy(pal1, pal2);
    printf("%s\n%s",pal1, pal2);
  }

  return 0;
}