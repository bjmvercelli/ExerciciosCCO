/*Uma empresa possui uma relação de N funcionários (N < 100), cada um contendo: código
(valor inteiro), idade e salário. Decida como as informações serão armazenadas e faça um
programa contendo as seguintes funções:
a. Ler as informações dos N funcionários, considerando que o número máximo de
funcionário é 100 e que o código 0 significa que não existem mais dados.
b. Retornar o código do funcionário mais velho.
c. Imprimir o código e a idade dos funcionários que ganham mais que a média dos
salários.
No programa principal, você deve usar todas as funções. */
#include <stdio.h>

void a(int cod[], int idade[], int sal[], int n){
  int i;
  for (i = 0; i < n; i++){
    printf("Insira o codigo do funcionario %d: ", i+1);
    scanf("%d", &cod[i]);
    if (cod[i] != 0){
      printf("Insira a idade do funcionario %d: ", i+1);
      scanf("%d", &idade[i]);
      printf("Insira o salário do funcionario %d: ", i+1);
      scanf("%d", &sal[i]);
      printf("\n");
    }
  }
}

void b(int cod[], int idade[], int n, int *cMaior, int *mVelho){
  int i;
  
  *mVelho = idade[0];
  for (i = 0; i < n; i++){
    if (idade[i] > *mVelho){
      *mVelho = idade[i];
      *cMaior = cod[i];
    }
  }
  printf("\n\nO codigo do funcionario mais velho é %d.\n\n", *cMaior);
}

void c (int cod[], int idade[], int sal[], float media, int n, int codMaiorSal[], int idMaiorSal[]){
  int i, k = 0;

  for (i = 0; i < n; i++){
    if (sal[i] > media){
      codMaiorSal[k] = cod[i];
      idMaiorSal[k] = idade[i];
      k++;
    }
  }
  printf("Os codigos dos funcionarios que ganham salario acima da média sao: ");
  for (i = 0; i < k; i++){
    printf("%d ", codMaiorSal[i]);
  }
  printf("\nAs idades dos funcionarios que ganham salario acima da media sao: ");
  for (i = 0; i < k; i++){
    printf("%d ", idMaiorSal[i]);
  }
}

int main(void) {
  int cod[100], idade[100], sal[100], n, codMaiorId, maisVelho, codMaiorSal[100], idMaiorSal[100], somaSal = 0, i;
  float mediaSal;

  printf("Insira o valor de N: ");
  scanf("%d", &n);

  a(cod, idade, sal, n);

  b(cod, idade, n, &codMaiorId, &maisVelho);
  
  for (i = 0; i < n; i ++){
    somaSal += sal[i];
  }
  mediaSal = somaSal/n;
  printf("A media dos salarios é %.2f\n\n", mediaSal);

  c(cod, idade, sal, mediaSal, n, codMaiorSal, idMaiorSal);
  return 0;
}