/* Faça um programa que utilize as funções dos exercícios 4 e 5 para:
 Imprimir o cabeçalho definido na função 4.
 Imprimir a matrícula e o conceito de uma lista de alunos cuja média e a
matrícula serão digitadas pelo usuário. Utilize a função do exercício 5. A
quantidade de alunos da lista dever ser digitada pelo usuário*/
#include <stdio.h>

void header(){
  printf("\nCurso - Ciencia da computacao\nDisciplina - Fundamentos de programacao\nUniversidade Federal de Itajuba.\n");
}

char concept(float md){
  if ( md >= 0 && md < 5){
    return 'R';
  } else if (md >= 5 && md < 7){
    return 'E';
  } else if (md >= 7 && md <= 10){
    return 'A';
  } else {return 0;}
}

int main(void) {
  int alunos, i, mtcl;
  float media;

  header();

  printf("\nInsira o numero de alunos: ");
  scanf("%d", &alunos);

  for (i = 1; i <= alunos; i++){
    printf("Insira a media do aluno %d: ", i);
    scanf("%f", &media);
    if (media < 0 || media > 10){break;}
    printf("Insira a matricula do aluno %d: ", i);
    scanf("%d", &mtcl);

    printf("%d - %c\n", mtcl, concept(media));
  }
  return 0;
}