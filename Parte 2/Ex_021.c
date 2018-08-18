/*21. Faça um procedimento que receba um vetor A(100) de inteiros e retorna esse mesmo vetor compactado, ou seja, sem os seus valores nulos(zero) e negativos.*/
#include <stdlib.h>
#include <stdio.h>
int main(){
int a[100];
int i;
for (i = 0; i<100; i++){
  printf("Digite o %dº numero: ",i);
  scanf("%d",&a[i]);
  if(a[i] < 0){
    a[i] = NULL;
  }
}
  for(i=0;i<100;i++){
    printf(" %d ",a[i]);
  }
}
