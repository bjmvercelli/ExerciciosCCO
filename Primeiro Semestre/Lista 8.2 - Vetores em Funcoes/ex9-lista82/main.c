#include<stdio.h>
 // A função imprimeEnderecos imprime vários endereços de memória.
 //Cada endereço representa o "local" na memória que uma determinada variável foi alocada
 // %p é o formato para impressão de endereços de memória
 // em C, o vetor v é um ponteiro estático que guarda o endereço do primeiro elemento do vetor
 // ponteiro estático é assim chamado porque o endereço apontado por ele nunca muda, ou seja,
 //um ponteiro estático aponta sempre para o mesmo endereço
 // Logo v vai guardar sempre o mesmo endereço durante a execução da função imprimeEnderecos
 // Já vimos o conceito de ponteiro e já trabalhamos com ele. Mas diferente de um vetor, uma variável declarada como
//ponteiro representa um ponteiro dinâmico que pode apontar para vários "locais" (endereços)
 //diferentes da memória durante a execução de uma mesma função. A única condição é que o endereço apontado pelo
//ponteiro seja um endereço válido para o programa
void imprimeEnderecos(int v[2]){

 // Antes de cada comando da função, o comentário descreve o que será impresso
 // o endereço apontado por v = o endereço armazenado em v
 printf("\nO endereço apontado por v na funcaoTeste = %p", v); // linha 5
 // o endereço do primeiro elemento do vetor v
 printf("\nO endereço do primeiro elemento de v na funcaoTeste = %p", &v[0]); // linha 6
}
int main (){
 int v[] = {10,20};
 // Antes de cada comando, o comentário descreve o que será impresso
 // o endereço apontado por v = o endereço armazenado em v
 printf("\nO endereço apontado por v na main = %p", v); // linha 2
 // o endereço apontado por v = o endereço armazenado em v
 printf("\nO endereço do primeiro elemento de v na main = %p", &v[0]); //linha 3
 imprimeEnderecos(v);
 
 return 0;
}