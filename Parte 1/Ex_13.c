/*
13. Faça um procedimento que recebe 3 valores inteiros por parâmetro e retorna-os ordenados em ordem crescente.
*/
#include <stdio.h>

int maiordeTRES(int n1,int n2,int n3){
    if(n1 > n2 && n2 > n3){
      printf("%i -- %i -- %i\n", n1, n2, n3);
    }
   else if(n1 > n3 && n3 > n2){
      printf("%i -- %i -- %i\n", n1, n3, n2);
    }
    else if(n2 > n1 && n1 > n3){
      printf("%i -- %i -- %i\n", n2, n1, n3);
    }
    else if(n2 > n3 && n3 > n1){
      printf("%i -- %i -- %i\n", n2, n3, n1);
    }
    else if(n3 > n1 && n1 > n2){
      printf("%i -- %i -- %i\n", n3, n1, n2);
    }
    else if(n3 > n2 && n3 > n1){
      printf("%i -- %i -- %i\n", n3, n2, n1);
    }else {
      printf("Digite Valores diferentes!\n");
    }
}
int main(int argc, char const *argv[]) {
  int num1, num2, num3;
  printf("Digite o primeiro número: ");
  scanf("%i", &num1);
  printf("Digite o segundo número: ");
  scanf("%i", &num2);
  printf("Digite o terceiro número: ");
  scanf("%i", &num3);
  return maiordeTRES(num1,num2,num3);
}
