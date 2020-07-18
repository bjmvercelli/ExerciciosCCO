#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float peso, h;
  int imc;

  printf("Digite o peso do individuo: ");
  scanf("%f", &peso);

  printf("Digite a altura do individuo: ");
  scanf("%f", &h);

  imc = peso / (h * h);

  switch ( imc ){
    case 0 ... 19: 
      printf("Abaixo do peso.\n");
      break;
    
      case 20 ... 24:
      printf("Peso normal.\n");
      break;

    case 25 ... 29:
      printf("Sobre peso.\n");
      break;

    case 30 ... 39 :
      printf("Obeso.\n");
      break;
    
    case 40 ... 75:
      printf("Obeso morbito.\n");
  }


  return 0;
}