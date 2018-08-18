/*
12. Faça uma função que recebe, por parâmetro, a altura (alt) e o sexo de uma pessoa e retorna o seu peso ideal.
 Para homens, calcular o peso ideal usando a fórmula peso ideal = 72.7 x alt - 58 e, para mulheres, peso ideal = 62.1 x alt - 44.7.
*/
#include <stdio.h>

float pesoIdeal(float altura, char sexo){
  float pesoIdeal;
  if(sexo == 'M' || sexo == 'm'){
      pesoIdeal=(62.1 * altura) - 44.7;
      printf("\nO peso ideal é: %.1f",pesoIdeal);
  }else if(sexo == 'H' || sexo == 'h'){
      pesoIdeal=(72.7 * altura )- 58;
      printf("\nO peso ideal é: %.1f",pesoIdeal);
  }else{
      printf("Digite um sexo válido\n");
  }
}
int main(int argc, char const *argv[]) {
  float alt;
  char sex;
  printf("Digite seu sexo: ");
  scanf("%c", &sex);
  printf("Digite sua altura: ");
  scanf("%f", &alt);
  return pesoIdeal(alt, sex);
}
