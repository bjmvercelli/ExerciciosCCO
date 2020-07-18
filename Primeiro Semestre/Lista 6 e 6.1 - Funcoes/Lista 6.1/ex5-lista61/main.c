/*Faça uma função que receba as 3 notas de um aluno por parâmetro e uma letra. Se a
letra for A, calcula a média aritmética das notas do aluno, se for P, a sua média
ponderada (pesos: 5, 3 e 2). Utilize esta função no programa principal para retornar
a media ponderada de um aluno.*/
#include <stdio.h>

float media (float n1, float n2, float n3, char letra){
  if (letra == 'A'){
    return (n1+n2+n3)/3;
  } else if (letra == 'P'){
    return (5*n1+3*n2+2*n3)/10;
  } else {return 0;}
}

int main(void) {
  float n1, n2, n3;
  char letra;
  printf("Insira as 3 notas: ");
  scanf("%f %f %f", &n1, &n2, &n3);
  printf("Agora insira a letra (A ou P): ");
  scanf(" %c", &letra);
  if(letra != 'A' || letra != 'P'){return 0;}

  printf("%.2f", media(n1, n2, n3, letra));
  return 0;
}