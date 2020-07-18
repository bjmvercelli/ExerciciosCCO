/*
Faça um algoritmo que receba a altura e o sexo de uma pessoa (F ou M), calcule e
imprima o seu peso ideal, utilizando as seguintes fórmulas:
 Para homens: (72.7 * H) – 58
 Para mulheres: (62.1 * H) – 44.7 
*/
#include <stdio.h>

int main(void) {
  char sexo;
  float H, peso;

  printf("Insira a altura da pessoa: ");
  scanf("%f", &H);

  printf("Agora, insira o sexo da pessoa (F ou M): ");
  scanf(" %c", &sexo);

  if (sexo == 'M'){
    peso =(72.7 * H) - 58;
    printf("O peso ideal da pessoa é %.f kg\n", peso);
  } else if (sexo == 'F') {
    peso = (62.1 * H) - 44.7;
    printf("O peso ideal da pessoa é %.f kg\n", peso);
  } else {
    printf("O sexo inserido é invalido.\n");
  }

  return 0;
}