/*25. Escreva uma função que recebe por parâmetro um valor inteiro e positivo N e retorna o valor de S. S = 2/4 + 5/5 + 10/6 + 17/7 + 26/8 + ... +(n2+1)/(n+3)*/
#include <stdio.h>

float somaSS(float n)
{
  float s=0;
  float i=2, j=2, k=4, l=2;
  for(i=1; i<=n; i++){
    s=s+(j/k)+(((n*n)+1)/(n+3));
    k=k+1;
    j=j+i+l;
    l=l+1;
  }
  return s;
}


int main(int argc, char const *argv[]){
  float n, r;

  printf("Digite um valor positivo e inteiro: ");
  scanf("%f*c", &n);
  r = somaSS(n);
  printf("\nA soma dos valores e: %2.2f", r);
}
