#include <stdio.h>
#include <string.h>

void cripto(char frase[]){
  int i = 0;

  for (i = 0; i < strlen(frase); i++){
    if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u'){
      frase[i] = '*';
    }
  }
}

int main(void) {
  char frase[50], i;
  printf("Insira a frase: ");
  scanf("%[^\n]", frase);

  cripto(frase);

  printf("\nA frase criptografada será: ");
  printf("%s", frase);

  return 0;
}