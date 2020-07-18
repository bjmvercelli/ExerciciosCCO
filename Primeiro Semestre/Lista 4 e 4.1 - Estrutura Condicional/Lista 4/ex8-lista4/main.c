/*Elabore um algoritmo que escreva informações sobre um processo considerando as
seguintes regras:
Se o processo é do tipo A e possui valor maior que R$12000,00, então deve ser
escrito “Processo em andamento com custo alto”
Se o processo tem prazo maior que 12 meses (o prazo é sempre dado em
quantidade de meses) ou o cliente é do tipo E (especial), deve ser escrito
“Processo crítico”
*/
#include <stdio.h>

int main(void) {
  int prazo;
  float val;
  char tp, tc; // Tipo do processo , Tipo do cliente

  printf("Insira o tipo do processo: ");
  scanf("%c", &tp);

  printf("Insira o valor do processo: ");
  scanf("%f", &val);

  if(tp == 'A' && val > 12000.00){
    printf("Processo em andamento com custo alto\n");
  } else {
    printf("Insira o tipo do cliente: ");
    scanf(" %c", &tc);
    
    printf("Insira o prazo do processo(em quantidade de meses): ");
    scanf(" %d", &prazo);

    if(tc == 'E' && prazo > 12){
      printf("Processo critico!\n");
    } else {
      printf("Dados invalidos\n");
    }
  }

  return 0;
}