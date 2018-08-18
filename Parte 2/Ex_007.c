/*7. Faça um procedimento que recebe, por parâmetro, 2 vetores de 10 elementos inteiros e que calcule e retorne, também por parâmetro, o vetor união dos dois primeiros.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
int A[10], B[10], soma[10], i;
printf("Digite 10 numeros para [A] e 10 para [B]:\n");
for(i=0; i<=10; i++){
          printf("A[%d]:",i);
        scanf("%d",&A[i]);
     printf("B[%d]:",i);
        scanf("%d",&B[i]);
        soma[i]=A[i]+B[i];
     }
     printf("A soma entre A+B eh:\n");
for(i=1; i<=5; i++){
       printf("A[%d]+B[%d]= %d\n",i,i,soma[i]);

     }

}
