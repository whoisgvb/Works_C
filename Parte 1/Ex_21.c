/*21. Faça uma função que recebe, por parâmetro, um valor inteiro e positivo e retorna o número de divisores desse valor.
*/#include <stdio.h>
int maxDivisor(int num, int div){

  if(num >= div)
    {
       if((num % div) == 0)
       printf("%d\n", div);
       maxDivisor(num,div + 1);
    }
 }
int main(int argc, char const *argv[]) {
  int numero;
  printf("Digite um número inteiro: ");
  scanf("%i", &numero);
  return maxDivisor(numero,1);
}
