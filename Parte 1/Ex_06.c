/*
6. Faça uma função que recebe a idade de uma pessoa em anos, meses e dias e retorna essa idade expressa em dias.
*/
#include <stdio.h>

int totalIdade(int anos, int meses, int dias){
    int idadeFinal;
    idadeFinal = (anos * 365) + (meses * 12) + dias;
    printf("Sua idade final em dias é %i \n", idadeFinal);

}
int main(int argc, char const *argv[]) {
  int a, m, d, idadeFinal;
  printf("Digite quantos anos você tem: ");
  scanf("%i",&a);
  printf("Digite quantos meses você tem: ");
  scanf("%i",&m);
  printf("Digite quantos dias você tem: ");
  scanf("%i",&d);
  return totalIdade(a,m,d);
}
