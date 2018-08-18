/*10. Faça uma função que recebe um vetor X(20) de reais , por parâmetro, e retorna a soma dos elementos de X.*/
#include <stdio.h>
#include <stdlib.h>
int main (){
int vetor[20],soma;

for(int i=1;i<21;++i){
	printf("Digite o %dº numero: ",i);
	scanf("%d",&vetor[i]);
		soma+= vetor[i];

}
printf("O total da soma é: %d\n",soma);
}
