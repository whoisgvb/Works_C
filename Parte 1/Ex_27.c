/*27. Escreva uma função que recebe, por parâmetro, dois valores X e Z e calcula e retorna Xz . (sem utilizar funções ou operadores de potência prontos)*/
#include <stdio.h>

int potenciacao(int x, int z) {
  int i,pot = 1;
  for (i=1; i<=z; i++)
     pot *= x;
  return pot;
}

int main(int argc, char const *argv[]){
  int i, j;
  printf("Informe um número: ");
  scanf("%d", &i);
  printf("Informe o exponente: ");
  scanf("%d", &j);
  printf("%d ^ %d = %d\n", i, j, potenciacao(i, j));
}
