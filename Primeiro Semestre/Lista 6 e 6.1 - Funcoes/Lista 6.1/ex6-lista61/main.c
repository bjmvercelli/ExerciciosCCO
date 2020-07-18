/*Faça uma função que receba, por parâmetro, a altura (alt) e o sexo de uma pessoa e
retorna o seu peso ideal. Para homens, calcular o peso ideal usando a fórmula peso
ideal = 72.7 x alt - 58 e, para mulheres, peso ideal = 62.1 x alt - 44.7. Utilize esta
função no programa principal para retornar o peso ideal de uma lista de pessoas. O
programa deve ser finalizado quando a altura digitada for menor ou igual a 0*/
#include <stdio.h>

float ideal (float altura, char sexo){
  for (;altura != 0;){
    if (sexo == 'M'){
      printf("%.2f", (72.7*altura) - 58);
    } else if (sexo == 'F'){
      printf("%.2f", (62.1*altura) - 44.7);
    } else{
      return 0;
    } 
    printf("\nInsira a altura: ");
    scanf("%f", &altura);
    printf("Insira o sexo (M ou F): ");
    scanf(" %c", &sexo);
  }
  return 0;
}

int main(void) {
  float altura;
  char sexo;
  printf("Insira a altura: ");
  scanf("%f", &altura);
  printf("Insira o sexo (M ou F): ");
  scanf(" %c", &sexo);

  ideal(altura, sexo);

  return 0;
}