/*12. Faça um procedimento que recebe, por parâmetro, um vetor A(50) de reais e retorna-o ordenado em ordem crescente.*/
#include <stdlib.h>
#include <stdio.h>
int main(){
int x[50];
int i, j, temp;
for (i = 0; i<50; i++){
  printf("Digite o %dº numero: ",i);
  scanf("%d",&x[i]);
  }

  for (i=0;i<50; i++)
    for(j=i+1;j<50;j++){
      if (x[i]>x[j]){
        temp=x[i];
        x[i]=x[j];
        x[j]=temp;
      }
    }
printf("Vetores ordenados: \n");
for(i=0;i<50;i++)
printf(" %d ",x[i]);
}
