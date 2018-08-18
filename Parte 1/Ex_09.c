/*
9. Faça uma função que recebe um valor inteiro e verifica se o valor é positivo ou negativo. A função deve retornar um valor booleano.
*/

#define true 1
#define false 0

#include <stdio.h>
int verificaValor(int num){
  if(num >= 0){
    printf("Valor positivo\n");
    return true;
  }else{
    printf("Valor negativo\n");
    return false;
  }
}
int main(int argc, char const *argv[]) {
  int numero;
  printf("Digite um número: ");
  scanf("%d", &numero);
  return verificaValor(numero);
}
