/*Em uma loja, a forma de pagamento é uma entrada mais duas prestações. A entrada deve ser maior que as demais prestações. Por outro lado, as prestações devem ser inteiras e as maiores possíveis. Por exemplo, se o valor da mercadoria for R$ 270,00, a entrada e as duas prestações são iguais a R$ 90,00; se o valor da mercadoria for R$ 302,75, a entrada é de R$ 102,75 e as duas prestações são iguais a R$ 100,00. Escreva um algoritmo que receba o valor da mercadoria e forneça o valor da entrada e das duas prestações de acordo com as regras acima.*/
#include <stdio.h>
#include <math.h>

int main(void) {
  float val, ent, prest;

  printf("Insira o valor da mercadoria: ");
  scanf("%f", &val);

  prest = floor(val/3);
  ent = val - (2*prest);

  printf("O valor da entrada será de R$ %.2f e o valor das prestaçoes iguais a R$ %.f.\n", ent, prest);

  return 0;
}