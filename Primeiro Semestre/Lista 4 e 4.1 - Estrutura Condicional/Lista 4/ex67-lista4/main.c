/*6. A partir de valores digitados pelo usuário da média de um aluno, informar se ele foi
aprovado (media >= 6), reprovado (media < 3), ou se ficou de exame (3<=media<6). Se
ficou de exame, solicitar a nota do exame e informar se o aluno foi aprovado (nota do
exame >= 6) ou reprovado. Se a nota digitada for < 0 ou >10, escrever nota inválida.
No exercício anterior, você validou o valor da nota do exame? Caso não tenha validado,
pense em como alterar o algoritmo para verificar se a nota do exame também está no
intervalo fechado [0,10]
*/

#include <stdio.h>

int main(void){
  float md, ex;

  printf("Insira a media do aluno: ");
  scanf("%f", &md);

  if (md > 10 || md < 0){
    printf("Nota invalida.\n");
  } else if (md >= 6){
    printf("O aluno foi aprovado.\n");
  } else if (md < 3){
    printf("O aluno foi reprovado.\n");
  } else {
    printf("Insira a nota do exame: ");
    scanf("%f", &ex);
    if(ex < 0 || ex > 10){
      printf("Nota do exame invalida.\n");
    } else if (ex >= 6){
      printf("O aluno foi aprovado no exame.\n");
    } else {
      printf("O aluno foi reprovado no exame.\n");
    }
  }
  return 0;
}
