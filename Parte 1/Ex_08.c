/*
8. Faça um procedimento que recebe a idade de um nadador por parâmetro e retorna,
 também por parâmetro, a categoria desse nadador de acordo com a tabela abaixo:

 5 a 7 > Infantil A
8 a 10 > Infantil B
11 a 13 > Juvenil A
14 a 17 > Juvenil B
maior 18 > Adulto
*/

#include <stdio.h>

float calcIdade(float idade){

  if (idade >= 5 && idade <= 7){
    printf("Sua idade é %.0f e você faz parte do Infantil A\n", idade);
  }
  else if (idade >= 8 && idade <= 10){
    printf("Sua idade é %.0f e você faz parte do Infantil B\n", idade);
  }
  else if (idade >= 11 && idade <= 13){
    printf("Sua idade é %.0f e você faz parte do Juvenil A\n", idade);
  }
  else if (idade >= 14 && idade <= 17){
    printf("Sua idade é %.0f e você faz parte do Juvenil B\n", idade);
  }
  else if (idade >= 18){
    printf("Sua idade é %.0f e você faz parte do Adulto\n", idade);
  }
  else{
    printf("Sua idade é %.0f e não faz parte de nenhuma categoria\n", idade);
  }
}
int main(){
  float I=0;
  printf("Digite sua idade: ");
  scanf("%f",&I);
  return calcIdade(I);
}
