/*23. Escreva uma função que recebe por parâmetro um valor inteiro e positivo N e retorna o valor de S. S = 1 + ½ + 1/3 + ¼ + 1/5 + 1/N.*/
#include <stdio.h>
float contaSS(int num) {
  float result;
  int i;
  for (i=1; i <= num; i++)
    result += 1 / (float)i;
      return result;
}

int main(int argc, char const *argv[]){
  int numero;
  printf("Digite um número: ");
  scanf("%i", &numero);
  printf("\nResultado: %0.3f", contaSS(numero));

}
