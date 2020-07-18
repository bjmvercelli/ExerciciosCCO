/*5. A partir do valor digitado pelo usuário da média de um aluno, informar se ele foi
aprovado (media >= 6), reprovado (media < 3), ou se ficou de exame (3<=media<6). Se
ficou de exame, solicitar a nota do exame e informar se o aluno foi aprovado (nota do
exame >= 6) ou reprovado. Considere que os valores digitados estão sempre no
intervalo fechado entre 0 e 10 [0,10].*/

#include <stdio.h>

int main(void) {
  float md1, md2;

  printf("Insira a media do aluno: ");
  scanf("%f", &md1);

  if (md1 >= 6){
    printf("O aluno foi aprovado\n");
  } else if ( md1 >= 3 && md1 < 6){
      printf("O aluno ficou de exame. Insira a nota do exame: ");
      scanf("%f", &md2);
      if(md2 >= 6){
        printf("O aluno foi aprovado no exame\n");
      } else {
        printf("O aluno foi reprovado no exame\n");
      }
  } else {
    printf("O aluno foi reprovado\n");
  }

  return 0;
}