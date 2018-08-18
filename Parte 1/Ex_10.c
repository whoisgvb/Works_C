/*
10. Faça uma função que recebe um valor inteiro e verifica se o valor é par ou ímpar. A função deve retornar um valor booleano.
*/

#define true 1
#define false 0

#include <stdio.h>

int parImpar(int num){
  if(num % 2 == 0){
    printf("Valor Par\n");
    return true;
  }else{
    printf("Valor Impar\n");
    return false;
  }
}
int main(int argc, char const *argv[]) {
  int numero;
  printf("Digite um número: ");
  scanf("%d",&numero);
  return parImpar(numero);
}
