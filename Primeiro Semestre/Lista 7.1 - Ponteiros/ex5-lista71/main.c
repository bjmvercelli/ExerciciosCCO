/*Usando a estratégia acima, escrever uma função que tem como parâmetros de entrada
três valores inteiros a, b e c e retorna a posição do maior e a posição do menor valor.
Exemplo: Se a = 7, b = 1 e c = 5, o procedimento deve retornar 2 como a posição do
menor e 1 como a posição do maior. Use a função no programa principal considerando
três valores digitados pelo usuário.
*/
#include <stdio.h>

void func (int a, int b, int c, int *pMenor, int *pMaior){
  if (a > b){                           
    if (b > c){
    *pMenor = 3;
    *pMaior = 1;
    } else if (a > c){
    *pMenor = 2;
    *pMaior = 1;
    } else {
    *pMenor = 2;
    *pMaior = 3;
    }
  } else if (a > c){                       
    *pMenor = 3;
    *pMaior = 2;
  } else if (b > c){
    *pMenor = 1;
    *pMaior = 2;
  } else{
    *pMenor = 1;
    *pMaior = 3;
  }
}

int main(void) {
  int a, b, c, menor, maior;
  printf("Insira os valores de a, b e c: ");
  scanf("%d %d %d", &a, &b, &c);

  func(a, b, c, &menor, &maior);

  printf("A posicao do menor é %d e do maior é %d", menor, maior);
  return 0;
}