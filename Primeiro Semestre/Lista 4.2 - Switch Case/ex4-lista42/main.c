/**/
#include <stdio.h>

int main(void) {
  int cod;

  printf("Digite o codigo correspondente ao cargo do funcionário: ");
  scanf("%d", &cod);

  switch (cod){
    case 1: 
      printf("O cargo do funcionario é 'Escrituário' e ele possui direito a um percentual de aumento de 50%%.\n");
      break;
    
    case 2:
      printf("O cargo do funcionario é 'Secretário' e ele possui direito a um percentual de aumento de 35%%.\n");
      break;

    case 3:
      printf("O cargo do funcionario é 'Caixa' e ele possui direito a um percentual de aumento de 20%%.\n");
      break;

    case 4:
      printf("O cargo do funcionario é 'Gerente' e ele possui direito a um percentual de aumento de 10%%.\n");
      break;

    case 5:
      printf("O cargo do funcionario é 'Diretor' e ele não possui direito a um aumento.\n");
      break;
    
    default:
      printf("O código deve ser de 1 a 5, tente novamente.\n");
  }
  return 0;
}