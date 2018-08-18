/*9.Faça uma função que recebe um vetor X(15) de inteiros , por parâmetro, e retorna a quantidade de valores pares em X.*/
#include <stdio.h>
#include <stdlib.h>
int main (){
int vetor[15],par;

for(int i=1;i<16;++i){
	printf("Digite o %dº numero: ",i);
	scanf("%d",&vetor[i]);
	if((vetor[i] % 2)==0){
		par++;
	}
}
printf("O total de numeros pares é : %d\n",par);
}
