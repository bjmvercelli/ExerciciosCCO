/*Elabore uma função que receba uma hora completa (hora/minuto/segundo) e converta
para segundo. Use a função no programa principal para converter um valor hora
completo fornecido pelo usuário.
Dica: um dos parâmetros recebidos pela função deve ser o endereço da variável que deverá
guardar o resultado da conversão.*/
#include <stdio.h>

void convert (int h, int m, int s, int *pResult){
  *pResult = h*3600 + m*60 + s;
}

int main(void) {
  int hora, minuto, segundo, result;
  printf("Insira a hora, minuto, e segundo: ");
  scanf("%d %d %d", &hora, &minuto, &segundo);
  convert(hora, minuto, segundo, &result);

  printf("O resultado em segundos e %d", result);
  return 0;
}
