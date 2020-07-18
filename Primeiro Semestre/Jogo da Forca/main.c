#include <stdio.h>
#include <stdlib.h> //rand() e srand()
#include <string.h> //strcpy()
#include <ctype.h> //toupper()
#include <time.h> //srand()

typedef struct componentesRanking{
  int pontosJogador;
  char nomeJogador[30];
} ranking;

void boneco(int vidas){
  //Usando operador ternario, controlamos o desenho do boneco conforme o usuario perde suas vidas
  //[ (vidas <= 4) ? '(' : ' ' ], por exemplo, pode ser lido da seguinte forma: se o numero de vidas for menor ou igual a 4, o caractere impresso será '(', caso contrario o caractere impresso será ' '.

	printf(" \t___________\n");
	printf(" \t|/        |\n");
	printf(" \t|        %c%c%c \n", (vidas <= 4? '(':' '), (vidas <= 4? '_': ' '), (vidas <= 4? ')': ' '));
	printf(" \t|        %c%c%c\n", (vidas <= 1 ? '\\': ' '), (vidas <= 3 ? '|' : ' '), (vidas <= 1 ? '/' : ' '));
	printf(" \t|         %c\n", (vidas <= 3 ? '|' : ' '));
	printf(" \t|        %c %c \n", (vidas <= 2 ? '/' : ' '), (vidas <= 2 ? '\\' : ' ' ));
	printf(" \t|          \n");
	printf("  __|__          ");
}

char prossegSair(int level){
  //Funçao utilizada nas linhas 240 e 277.
  char res;

  printf("\n\n\n\n");
  printf("   -> Insira 'w' para %s.\n", (level <= 3) ? "prosseguir" : "ver o ranking"); // Caso o jogador nao esteja no ultimo level, imprimiremos "prosseguir", se estiver no ultimo imprimiremos "ver o ranking"
  printf("\n\n\n");
  printf("   -> Insira qualquer outro caractere para sair.\n");
  printf("\n\n\n");

  printf("O que deseja fazer? ");
	scanf(" %c", &res);

  return res;
}

void genPalavra(char *palavra, char *dica, int level, int *agp){
  int i, posEnterP, posEnterD;
	srand((unsigned)time(NULL)); 
		
	// A etapa abaixo impede que as palavras se repitam, ela avalia cada número gerado e se certifica de que nao seja igual a nenhum número gerado anteriormente. Dessa forma, como as palavras estao relacionadas a tais números, estamos certificando que as palavras não se repitam durante uma jogada. 

  if (level == 0){
    agp[0] = rand() % 16 + 1; //Geramos um número no intervalo [1, 16]

  } else if (level == 1){
    agp[1] = rand() % 16 + 1;
    while (agp[1] == agp[0]){
      agp[1] = rand() % 16 + 1;
    }
  } else if (level == 2){
    agp[2] = rand() % 16 + 1;
    while ((agp[2] == agp[1]) || (agp[2] == agp[0])){
      agp[2] = rand() % 16 + 1;
    }
  } else if (level == 3){
    agp[3] = rand() % 16 + 1;
    while ((agp[3] == agp[2]) || (agp[3] == agp[1]) || (agp[3] == agp[0])){
      agp[3] = rand() % 16 + 1;
    }
  } else {
    agp[4] = rand() % 16 + 1;
    while ((agp[4]==agp[3]) || (agp[4]==agp[2]) || (agp[4]==agp[1]) || (agp[4]== agp[0])){
      agp[4] = rand() % 16 + 1;
    }
  }
  //O vetor agp[] foi definido na funçao telaDificuldades() (chamada apenas uma vez no jogo) e passado por referencia, mantendo, dessa forma, seus valores armazenados durante todo jogo.


  FILE *fP;
  FILE *fD;

  //Abrimos os arquivos para leitura.
  fP = fopen("palavras.txt", "r");
  fD = fopen("dicas.txt", "r");

  //Abaixo temos um laço que percore as linhas da lista até o valor gerado. Ao chegar nele as variaveis "palavra" e "dica" recebem as strings correspondentes.
  for (i = 1; i <= agp[level]; i++){

    fgets(palavra, 21, fP);
    fgets(dica, 21, fD);
  }
 
  //A função "strcspn()" nos dará a posição do \n na cadeia de caracteres.
  posEnterP = strcspn(palavra, "\n");
  posEnterD = strcspn(dica, "\n"); 

  //Substituimos o '\n' (através da sua posiçao adquira na lógica acima) por 0 (caractere nulo).
  palavra[posEnterP] = 0; 
  dica[posEnterD] = 0;
  
  //fechamos os arquivos
  fclose(fP); 
  fclose(fD);
     	
}

void rank(ranking r){
  int cont, i, z;
  ranking auxR[100]; //Armazena todos os dados lidos
  ranking help; //Auxilia na troca de posições na ordenação do ranking

  printf("\n\n");
	printf("\t\t*******************************\n");
	printf("\t\t|-----------RANKING-----------|\n");
	printf("\t\t*******************************\n");
	printf("\n\n\n");

  FILE *arq;
  arq = fopen("dados.dat", "a+"); //Abrimos o arquivo para gravacao e leitura, sendo que os dados gravados serao adicionados no final do arquivo

  if (!arq){ //Caso o arquivo nao possa ser aberto
    printf("\nErro no banco de dados!");
    exit(1);
  }

  fwrite(&r, sizeof(r), 1, arq); //Escreve os dados do jogador (campos da struct) no arq.

  rewind(arq); //Voltamos o cursor para o inicio do arquivo

  cont = 0;
  while(!feof(arq)){
    fread(&auxR[cont], sizeof(auxR[cont]), 1, arq); //Lemos os dados do arquivo e os armazenamos no vetor auxR[] de tipo struct componentesRanking.
    cont++; //Contabilizamos os dados
  }

  cont -= 1; // Subtraimos uma unidade do contador (no ultimo loop um dado é contabilizado mas nao ocorre loop seguinte para ocorrer a leitura nessa posição).

  //Abaixo comparamos as todas as pontuações e trocamos as posiçoes de modo que as maiores pontuações (e seus jogadores correspondentes) sejam armazenados em ordem decrescente, pois assim serao impressas.
  for(i = 0; i < cont; i++){
    for(z = i+1; z < cont; z++){
      if( auxR[i].pontosJogador < auxR[z].pontosJogador){
        help = auxR[i]; //a variavel help (de tipo ranking) recebe os valores (nomeJogador e pontosJogador) daquele com a pontuação menor.
        auxR[i] = auxR[z];
        auxR[z] = help;
      }
    }
  }

  //Imprimimos as pontuaçoes
  for(i = 0; i < cont ; i++){
    printf("\t\t %s --------- %d pontos\n", auxR[i].nomeJogador, auxR[i].pontosJogador);
  }

  fclose(arq); //Fechamos o arquivo

}

void Chute_e_Validacao(char *palavra, char *dica, int *acertos, int *vidas, int level, int dif){

  char  progresso[20]; // Armazena as letras acertadas pelo jogador e as imprime na tela
  char letra; // Variavel que armazena a letra inserida
  char auxPalavra[20]; // Vetor auxiliar que nos possibilita contabilizar como errado um chute repetido
  int i, certo;

  strcpy(auxPalavra, palavra); //AuxPalavra recebe a mesma string de palavra 

  for (i = 0; i < strlen(palavra); i++){
		progresso[i] = ' '; // Preenchemos os caracteres do vetor por "espaços", os quais serao substituidos pelas letras acertadas.
	}
		
	while (*vidas >= 0 && *acertos <= strlen(palavra) && letra != '#'){ // Loop com as condiçoes para que o jogo ocorra
		printf("\033[0;0H\033[2J"); //Mesma efeito do system("cls")
		
		printf("\n\t\t Insira '#' para sair do jogo! - Level %d\n\n", level + 1);
		
		printf("\tVidas: %d\n", *vidas); //Mostramos as vidas restantes
				
		boneco(*vidas); // Chamamos a funcao "boneco" com o valor de vidas como parametro
				
		printf("\t\t");
		
		for (i = 0; i < strlen(palavra); i++){
			printf("%c ", progresso[i]); //Imprimimos o progresso na tela
		}
		 
		printf("\n\t\t\t\t\t\t");
		
		for (i = 0; i < strlen(palavra); i++){ 
			printf("%c ", '-'); //Imprimimos os traços que ficam abaixo das letras
		}
		
		if (*acertos == strlen(palavra)){break;} //Se o número de acertos forem igual ao tamanho da palava (i.e, o jogador acertou) o while se encerra aqui.
		
		printf("\n");
		
		if (dif == 1){ // dif = dificuldade
			printf("\t%s%c %s", *vidas <= 5? "DICA" : " ", *vidas <= 5? ':' : ' ', *vidas <= 5 ? dica : " ");
		} else if (dif == 2){
			printf("\t%s%c %s", *vidas <= 3? "DICA" : " ", *vidas <= 3? ':' : ' ', *vidas <= 3 ? dica : " ");	// Condicional para mostrar as dicas 
		}
		
    /*O PROGRAMA NÃO ESTÁ SENDO ENCERRADO, está saindo do loop*/ /*Nos faltou deixar isso implicito, porém, quando o usuário perde todas suas vidas, o programa nao se encerra, mas oferece a ele que insira 'w' para tentar novamente (voltar ao level 1 com sua pontuação total = 0) ou qualquer outro caractere para sair do jogo*/

		if (*vidas == 0){break;} //Caso o jogador chegue em 0 vidas, o WHILE se encerra aqui, sem pedir a proxima letra.
		
		printf("\n\n Insira a letra: "); // Pede ao jogador a letra
		scanf(" %c", &letra);

    certo = 0; //certo = 0 em caso de erro do chute/ certo = 1 em caso de acerto do chute

		for (i = 0; i < strlen(palavra); i++){
			if (auxPalavra[i] == toupper(letra)){ 
				auxPalavra[i] = '!'; // Caso o usuario acerte um chute, substituimos a letra correspondente por um '!' para que caso esse chute se repita, seja considerado errado.
				progresso[i] = toupper(letra); //Atualizamos o vetor progresso com a letra acertada
				*acertos = *acertos + 1; //Contabilizamos os acertos
				certo = 1; 
			} 
		}
		
		if (certo == 0){ //O jogador errou o chute
			*vidas = *vidas -1;	 //Perde vida		
		} 		
	} 

}

void jogo(int dificuldade, int pontuacaoTotal, int level, int AuxGenPalavra[], ranking *r){
	char palavra[21], dica[21]; //Variaveis para armazenar as palavras e dicas geradas
  char res1; //Armazenam as respostas quanto a procedencia do jogo ('w' ou outra...);
	int acertos = 0, vidas = 5, i;
  /*AS VIDAS ESTÀO SENDO RETOMADAS TODA VEZ QUE VOCÊS CHAMAM A FUNCAO, É ISSO MESMO?*/ /*Sim, cada vez que chamamos a função jogo() iniciamos um level e em cada level o jogador tem 5 vidas.*/
	
  //Chamamos a funçao responsável por gerar randomicamente a palavra de cada level.
	genPalavra(palavra, dica, level, AuxGenPalavra);
	
  //Chamamos a funcao responsavel por receber a letra, avaliar se ela existe na palavra gerada, acrescentar os acertos e retirar as vidas (sao alterados, logo sao passados por referencia). Além disso ela imprime as dicas (dependendo da dificuldade) 
	Chute_e_Validacao(palavra, dica, &acertos, &vidas, level, dificuldade);
	
  //Atualizamos a pontuaçao total
	pontuacaoTotal += vidas;

  //Abaixo, avaliamos o numero de acertos e vidas e oferecemos as devidas opçoes ao jogador			
	if (acertos == strlen(palavra)){ //Nesse caso, o jogador acertou a palavra
	  printf("\n\n\nParabens! Voce acertou a palavra. Ainda lhe restava(m) %d vidas.", vidas);
		
		if (level <= 3){ //Enquanto nao for o ultimo level, pedimos ao jogador para prosseguir ou sair
	
				switch (prossegSair(level)){
					case 'w': 
						level ++; //Passamos de level
						printf("\033[0;0H\033[2J");	
            //Chamamos a funçao jogo() novamente com as devidas atualizaçoes dos parametros			
						jogo(dificuldade, pontuacaoTotal, level, AuxGenPalavra, r);					
						break;
				
					default: 
						printf("\033[0;0H\033[2J");
						printf("Obrigado por jogar!");
						exit(1);
						break;				
					}
          
		} else if (level == 4){ //Se for o ultimo level, exibimos a pontuaçao total conforme a dificuldade
			
      printf("\n\n\n\n");
      
      //Abaixo apresentamos a pontuacao total do jogador
			if (dificuldade == 1){
        
				printf("Sua pontuacao total é: %d (= %d x 1)", pontuacaoTotal, pontuacaoTotal);

			} else if (dificuldade == 2){
				printf("Sua pontuacao total é: %d (= %d x 2)", pontuacaoTotal*2, pontuacaoTotal);

        pontuacaoTotal *= 2; //Nesse caso a dificuldade escolhida é médio, logo a pontuacao é multiplicada por 2

			} else if (dificuldade == 3){
				printf("Sua pontuacao total é: %d (= %d x 3)", pontuacaoTotal*3, pontuacaoTotal);

        pontuacaoTotal *= 3; //Nesse caso a dificuldade escolhida é médio, logo a pontuacao é multiplicada por 2

			}

      //Avaliamos o caractere retornado pela funcao possegSair()
      switch (prossegSair(level)){
        case 'w': 
          r->pontosJogador = pontuacaoTotal; //a variavel pontosJogador presente na struct recebe o valor da pontuacao total.
          printf("\033[0;0H\033[2J"); //Limpamos a tela
          rank(*r); //Chamamos a funcao rank() passando, nesse caso, o *valor* da struct.
          break;

        default:
          printf("\033[0;0H\033[2J");
					printf("Obrigado por jogar!");
					exit(1);
					break;
      }

		}	
																																			
	} else if (vidas == 0){ //Nesse caso, o usuario nao acertou a palavra
			printf("\n\n\nVoce perdeu.\n\n A palavra era *%s*", palavra); //Mostramos a palavra correta
			printf("\n\n\n\n");

      //Nesse caso nao podemos usar a funcao possegSair() pois ela só é cabivel para "prosseguir" ou "ver o ranking"
			printf("   -> Insira 'w' para recomeçar o jogo (do primeiro level).\n"); 
			printf("\n\n\n");
			printf("   -> Insira qualquer outro caractere para sair.\n");
			printf("\n\n\n");
			
			printf("O que deseja fazer? ");
			scanf(" %c", &res1);
			switch (toupper(res1)){
				case 'W': // Caso o jogador opte por recomeçar, reiniciamos o level e sua pontuacao total.
					printf("\033[0;0H\033[2J");
					level = 0;
          pontuacaoTotal = 0; 
          //Novamente chamamos a funcao jogo com as devidas atualizacoes dos parametros
					jogo(dificuldade, pontuacaoTotal, level, AuxGenPalavra, r);
					break;
				
				default: 
					printf("\033[0;0H\033[2J");
					printf("Obrigado por jogar!");
					exit(1);
					break;
				
				}
		}
}

void telaDificuldades(ranking *r){
  int dificuldade, pontuacaoTotal = 0, level = 0;
  int AuxGenPalavra[5]; // (agp) Aqui definimos essa variavel que será utilizada na funcao genPalavra().

	printf("\n\n    ESCOLHA A DIFICULDADE:");
	printf("\n\n\n\n\n");

  //ABAIXO DESCREVEMOS CADA DIFICULDADE
	printf("-> Insira '1' para jogar na dificuldade *FACIL* (Dica durante todo o jogo - Pontuação Final x1).\n");
	printf("\n\n\n\n\n");

	printf("-> Insira '2' para jogar na dificuldade *MEDIO* (Dica quando lhe restarem tres ou menos vidas - Pontuação Final x2).\n");
	printf("\n\n\n\n\n");

	printf("-> Insira '3' para jogar na dificuldade *DIFICIL* (Voce nao terá dicas - Pontuação Final x3).\n");
	printf("\n\n\n\n\n");
	printf("   ***  A PONTUAÇÃO FINAL SERÁ A SOMA DAS VIDAS RESTANTES EM CADA LEVEL! ***\n\n\n\n\n");
	
	printf("Em qual dificuldade deseja jogar? ");
	scanf("%d", &dificuldade);
	
  //Chamamos a funcao jogo passando como parametro os valores de dificuldade, pontuacaoTotal e level. Além do vetor auxGenPalavra e o endereco de memória da struct 'r'.
  jogo(dificuldade, pontuacaoTotal, level, AuxGenPalavra, r);		
}

void telaInicial(){

	printf("\n\n");
	printf("\t\t*************************************\n");
	printf("\t\t|-----------JOGO DA FORCA-----------|\n");
	printf("\t\t*************************************\n");
	printf("\n\n\n");
	
	printf(" \t___________\n");
	printf(" \t|/        |\n");
	printf(" \t|        (_) \n");
	printf(" \t|        \\|/\n");
	printf(" \t|         |\n");
	printf(" \t|        / \\\n");
	printf(" \t|          \n");
	printf("  __|__          \n");
	
	printf("\n\n\n\n");
	
}

int main(void){
  //Alocamos a struct ranking na variavel 'r'
  ranking r;

  //Chamamos a funcao tela inicial
	telaInicial(); 

  //Pedimos o nome do jogador (que será utilizado no ranking)
  printf("   -> Insira seu nome para prosseguir: ");
  scanf(" %[^\n]", r.nomeJogador);

  //Limpamos a tela e chamamos a funçao telaDificuldades(&r) passando a struct por referencia.
  printf("\033[0;0H\033[2J");
	telaDificuldades(&r);
}