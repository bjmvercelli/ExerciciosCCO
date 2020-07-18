/*Escreva uma função que receba um vetor de números reais de tamanho máximo = 20, a
quantidade de elementos preenchidos no vetor e um valor de acréscimo (também real) e
modifique os elementos do vetor acrescentando o valor passado. Utilize a função no programa
principal para atualizar a lista de salários de n funcionários que deverão ser digitados pelo
usuário (n<=20).*/
#include <stdio.h>

void acrescenta (float v[], int n, float acrescimo){
  int i;

  for (i = 0; i < n; i++){
    v[i] += acrescimo;
  }
}

int main(void) {
  float v[20], acresc;
  int n, i;

  printf("Insira o numero de funcionarios: ");
  scanf("%d", &n);
  printf("Insira o valor do acréscimo: ");
  scanf("%f", &acresc);

  for (i = 0; i < n; i++){
    printf("Insira o salario do funcionario %d: ", i+1);
    scanf("%f", &v[i]);
  }

  acrescenta(v, n, acresc);

  printf("\n\nO novo vetor será: ");
  for (i = 0; i < n; i++){
    printf("%.1f ", v[i]);
  }
  return 0;
}