/*
11.Faça uma função que recebe a média final de um aluno por parãmetro e retorna o seu conceito, conforme a tabela abaixo:
0 a 4,9 > D
5 a 6,9 > C
7 a 8,9 > B
9 a 10 > A
*/
#include <stdio.h>

float mediaFinal(float media){
  if(media >= 0 && media <= 4.9){
    printf("Sua nota tem conceito D\n");
  }
  else if(media >= 5 && media <= 6.9){
    printf("Sua nota tem conceito C\n");
  }
  else if(media >= 7 && media <= 8.9){
    printf("Sua nota tem conceito B\n");
  }
  else if(media >= 9 && media <= 10){
    printf("Sua nota tem conceito A\n");
  }else{
    printf("Digite uma média valida!\n");
  }
}
int main(int argc, char const *argv[]) {
  float mf;
  printf("Digite a média final do aluno: ");
  scanf("%f", &mf);
  return mediaFinal(mf);
}
