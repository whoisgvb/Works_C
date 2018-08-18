/*13. Faça um procedimento que recebe, por parâmetro, um vetor A(25) de inteiros e substitui todos os valores negativos de A por zero. O vetor A deve retornar alterado.*/

#include <stdlib.h>
#include <stdio.h>
int main(){
int x[10];
int i;
for (i = 0; i<10; i++){
  printf("Digite o %dº numero: ",i);
  scanf("%d",&x[i]);
  if(x[i] < 0){
    x[i] = 0;
  }
}
  for(i=0;i<10;i++){
    printf(" %d ",x[i]);
  }
}
