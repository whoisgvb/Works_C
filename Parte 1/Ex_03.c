/*
3. Faça uma função que recebe por parâmetro um valor inteiro e positivo e retorna o valor lógico Verdadeiro caso o valor seja primo e Falso em caso contrário.
*/

#include <stdio.h>
#define true 1
#define false 0

int nPrimo(int num)
{
  int primo = true;
     if (num <= 1 || (num != 2 && num % 2 == 0))
     {
       primo = false;
       	printf(" %d nao é primo \n", num);
     }
     else{
       	primo = true;
        	printf("%d é primo \n", num);
     }
}
int main() {
  int numero;

    printf("Digite um número inteiro e positivo: ");
    scanf("%d", &numero);
    numero = nPrimo(numero);
}
