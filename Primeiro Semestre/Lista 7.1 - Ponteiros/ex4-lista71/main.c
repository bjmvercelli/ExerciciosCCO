/*Usando a estratégia acima, escrever uma função que retorne o valor mínimo e máximo
de uma sequência de n valores fornecidos pelo usuário. A leitura dos valores digitados
no teclado deve ser feita dentro da função. Contudo, a quantidade de valores a ser lido
(n) deve ser um parâmetro de entrada da função*/
#include <stdio.h>

void func (int n, int *pMaior, int *pMenor){
  int val, i;
 
  for (i = 1; i <= n; i++){
  
  printf("Insira um valor: ");
  scanf("%d", &val);

  if (i == 1){
    *pMaior = val;
    *pMenor = val;
  } else {
      if (val > *pMaior){
      *pMaior = val;
      } else if (val < *pMenor){
      *pMenor = val;
      } 
    }
  }
}

int main(void) {
  int n, menor, maior;
  
  printf("Insira o valor de 'n': ");
  scanf("%d", &n);

  func (n, &maior, &menor);

  printf("O menor valor e %d e o maior valor e %d", menor, maior);
  return 0;
}