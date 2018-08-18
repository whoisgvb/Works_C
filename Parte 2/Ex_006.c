/*6. Faça um procedimento que recebe 2 vetores A e B de tamanho 10 de inteiros, por parâmetro. Ao final do procedimento B deve conter o fatorial de cada elemento de A. O vetor B deve retornar alterado.*/
#include <stdio.h>
#define N 10
int fatorial(int a){
  int fat, i;
  for(fat = 1; a > 1; a = a - 1){
  fat = fat * a;
  }
}
int main(){
int i, A[N], B[N];
for(i=0; i < 10; i++){
  printf("\nDigite um valor para fatorar: ");

  scanf("%d", &A[i]);
  printf("\nDigitado: %d",A[i]);
  B[i] = A[i];
  printf("\nFatorado: %d\n",fatorial(B[i]));
  }
}
