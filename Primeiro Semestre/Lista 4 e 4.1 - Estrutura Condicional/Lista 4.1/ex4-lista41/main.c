
#include <stdio.h>

int main(void) {
  int id, grisc;

  printf("Insira a idade do cliente: ");
  scanf(" %d", &id);

  printf("Agora, insira o grupo de risco do cliente (1, 2 ou 3): ");
  scanf(" %d", &grisc);


  if ( id >= 18 && id <=24 && grisc == 1 ){
    printf("A.\n");
  } else if ( id >= 18 && id <=24 && grisc == 2 ){
    printf("B.\n");
  } else if ( id >= 18 && id <=24 && grisc == 3 ){
    printf("C.\n");
  } else if ( id >= 25 && id <=40 && grisc == 1 ){
    printf("D.\n");
  } else if  (id >= 25 && id <=40 && grisc == 2 ){
    printf("E.\n");
  } else if ( id >= 25 && id <=40 && grisc == 3 ){
    printf("F.\n");
  } else if ( id >= 41 && id <=70 && grisc == 1 ){
    printf("G.\n");
  } else if ( id >= 41 && id <=70 && grisc == 2 ){
    printf("H.\n");
  } else if ( id >= 41 && id <=70 && grisc == 3 ){
    printf("I.\n");
  }

  return 0;
}