#include <stdio.h>

int calcTabuada(int numero){
  int total,i;
  for(i=1; i<11; i++){
    total = numero * i;
    printf("%d X %d = %d\n", numero, i, total);
  }
}
int main(int argc, char const *argv[]) {
  int N;
  printf("Digite um número: ");
  scanf("%i", &N);
  return calcTabuada(N);
}
