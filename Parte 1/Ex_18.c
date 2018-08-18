#include <stdio.h>
#include <stdlib.h>
int fatorial(int num){
  int fat;

  for(fat = 1; num > 1; num = num - 1)
  fat = fat * num;

  printf("\nFatorial calculado: %d", fat);
}

int main(int argc, const char * argv[]) {
  int numero;

  printf("Digite um numero: ");
  scanf("%d", &numero);

  return fatorial(numero);
}
