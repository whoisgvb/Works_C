/*20. Faça um procedimento que receba, por parâmetro, um vetor K(15) e retorna, também por parâmetro, um vetor P contendo apenas os valores primos de K.*/
#include <stdio.h>
#include <stdlib.h>
#define N 5

void VerificaPrimos(int k[], int *p);
int Primo(int a);

int main()
{
	int k[N], *p;
	int i;
	for(i=0;i<N;i++)
	{
		printf("Digite um valor para V[%d]: ",i);
		scanf("%d",&k[i]);
		p = '\0';
	}
	VerificaPrimos(k,p);
	for(i=0;i<N;i++)
	{
		printf("\nPrimos do vetor: %d",p[i]);
	}
	free(p);
	return 0;
}
void VerificaPrimos(int k[], int *p)
{
	int i;
	int qtd = 1;
	for(i=0;i<N;i++)
	{
		if(Primo(k[i]) == 1)
		{
			p = (int*)calloc(qtd,sizeof(int));
			if(p == NULL)
			{
				printf("\nESTOURO DE MEMORIA!");
				exit(0);
			}
	qtd++;
	p[i] = k[i];
		}
	}
}
int Primo(int a)
{
	int i;
	int qtd_primos = 0;
	for(i=2;i<=a;i++)
	{
		if(a%i == 0)
		{
			qtd_primos++;
		}
	}
	if(qtd_primos == 1)
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
