#include <stdio.h>

int main(void) {
  char r1[3], r2[3], r3[3], r4[3], r5[3]; 

  printf("É mamifero? ");
  scanf("%s", r1);

  switch (r1[0]){
    case 'S':
      printf("É quadrupede? ");
      scanf("%s", r2);
      switch(r2[0]){
        case 'S':
          printf("É carnivoro? ");
          scanf("%s", r3);
          switch (r3[0]){
            case 'S':
              printf("O animal escolhido foi o leão.\n");
            break;
            case 'N':
              printf("É herbivoro? ");
              scanf("%s", r4);
              switch(r4[0]){
                case 'S': 
                  printf("O animal escolhido foi o cavalo.\n");
                  break;
                default:
                  printf("Não foi possivel identificar o animal.\n"); 
                   
                }             
          }
        break;
        case 'N':
          printf("É bipede? ");
          scanf("%s", r3);
          switch (r3[0]){
            case 'S':
              printf("É onívoro? ");
              scanf("%s", r4);
              switch (r4[0]){
                case 'S':
                  printf("O animal escolhido foi o homem.\n");
                  break;
                case 'N':
                  printf("O animal escolhido foi o macaco.\n");
                  break;
                default:
                  printf("Não foi possivel identificar o animal.\n");
              }
            break;                 
            case 'N':
              printf("É voador? ");
              scanf("%s", r3);
              switch (r3[0]){
                case 'S':
                  printf("O animal escolhido é o morcego.\n");
                  break;
                case 'N':
                  printf("O animal escolhido é a baleia.\n");
                  break;
              }
          }
      }
    break;
    case 'N':
      printf("É ave? ");
      scanf("%s", r2);
      switch (r2[0]){
        case 'S':
          printf("É não-voadora? ");
          scanf("%s", r3);
          switch (r3[0]){
            case 'S':
              printf("É tropical? ");
              scanf("%s", r4);
              switch(r4[0]){
                case 'S':
                  printf("O animal escolhido é o avestruz.\n");
                  break;
                case 'N':
                  printf("O animal escolhido é o pinguim.\n");
                  break;
                default:
                  printf("Não foi possivel indentificar o animal.\n");
                  break;
              }
            break;
            case 'N':
              printf("É nadadora? ");
              scanf("%s", r4);   
              switch (r4[0]){
                case 'S': 
                  printf("O animal escolhido é o pato.\n");
                  break;
                case 'N':
                  printf("O animal escolhido é a águia.\n");
                  break;
                default:
                  printf("Não foi possivel identificar o animal.\n");
                  break;
              }     
            break;
          }
        break;
        case 'N':
          printf("É reptil? ");
          scanf("%s", r3);
          switch (r3[0]){
            case 'S':
              printf("Possui casco? ");
              scanf("%s", r4);
              switch (r4[0]){
                case 'S':
                  printf("O animal escolhido é a tartaruga.\n");
                  break;
                case 'N':
                  printf("É carnivoro? ");
                  scanf("%s", r5);
                  switch (r5[0]){
                    case 'S':
                      printf("O animal escolhido é o crocodilo.\n");
                      break;
                    case 'N':
                      printf("O animal escolhido é a cobra.\n");
                      break;
                    default:
                      printf("Não foi possivel identificar o animal.\n");
                      break;
                  }
              }
          break;
          case 'N':
            printf("Não foi possivel identificar o animal.\n");    
          } 
      }                 
  }
  return 0;
}