/*22. Escreva uma função que recebe, por parâmetro, um valor inteiro e positivo e retorna o somatório desse valor.*/
#include <stdio.h>
int somatorio(int num){
  int i, somat = 0;
  for (i = 1; i <= num; i++)
        somat = somat + i * (i + 1);
      //  somat += (i*i) + 1;
    printf("%d", somat);
}
int main(int argc, char const *argv[]) {
  int numero;
  printf("Digite um número: ");
  scanf("%i", &numero);
  return somatorio(numero);
}
