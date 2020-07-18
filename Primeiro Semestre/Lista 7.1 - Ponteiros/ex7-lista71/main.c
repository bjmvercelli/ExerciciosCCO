/*Faça uma função que receba um parâmetro (inteiro por valor) com o total de minutos
passados ao longo do dia e receba também dois parâmetros (inteiros por referência) no
qual deve preencher com o valor da hora e do minuto corrente. Faça um programa que
leia do teclado quantos minutos se passaram desde meia-noite e imprima a hora
corrente (use a sua função).
*/
#include <stdio.h>

void horaAtual (int tMins, int *pHoraCorrente, int *pMinCorrente){
  *pMinCorrente = tMins % 60;
  *pHoraCorrente = tMins/60;
}

int main(void) {
  int tMins, horaCorrente, minCorrente;
  printf("Insira quantos minutos se passaram desde meia-noite: ");
  scanf("%d", &tMins);

  horaAtual(tMins, &horaCorrente, &minCorrente);

  printf("A hora corrente é %d horas e %d mins.", horaCorrente, minCorrente);
  return 0;
}