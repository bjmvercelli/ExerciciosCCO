/*Faça uma função que receba um valor inteiro como referência e retorne o resto da
divisão deste número por 10. Altere também o valor da variável passada por referência,
dividindo-a por 10.
*/
#include <stdio.h>

void function (float *pRes, int *pVal){
  *pRes = *pVal % 10;
  *pVal /= 10;
}

int main(void) {
  int val;
  float res;

  printf("Insira um inteiro: ");
  scanf("%d", &val);

  function(&res, &val);

  printf("O resto da divisao é %.2f e a divisao dele por 10 é igual a %d ", res, val);
  return 0;
}