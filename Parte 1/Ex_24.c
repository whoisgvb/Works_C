
/*24. Escreva uma função que recebe por parâmetro um valor inteiro e positivo N e retorna o valor de S. S = 1 + 1/1! + ½! + 1/3! + 1 /N!*/
#include <stdio.h>
float calcularSSS(float num){
  float result=1;
  int i;
  if(num>0){
    for(i=num;i>1;i--){
      result=result * i;
    }
  }
  return result;
}
int main(int argc, char const *argv[]){
  float E=1, numero;
  printf("Digite um numero: ");
  scanf("%f",&numero);
  for(int i=1;i<=numero;i++){
    E+=(pow(calcularSSS(i),-1));
  }
  printf("%f\n\n",E);
  return 0;
}
