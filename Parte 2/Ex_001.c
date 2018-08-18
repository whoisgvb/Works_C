/*1. Foi realizada uma pesquisa de algumas características físicas de 50 habitantes de uma certa região. De cada habitante foram coletados os seguintes dados: sexo, cor dos olhos (azuis, verdes ou castanhos), cor dos cabelos (louros, pretos ou castanhos) e idade. Faça um procedimento que leia esses dados em um vetor de registro. O vetor de registro deve ser enviado por referência.*/
#include <stdio.h>
#include <stdlib.h>
#define N 50
int main()
{

int i, sexo[N], olhos[N], cabelos[N], idade[N];

for(i=0; i<N; i++)
{
printf("habitante [%d],informe o seu sexo:\n", i+1);
printf("[%d] feminino\n", 1);
printf("[%d] masculino\n", 2);
scanf("%d", &sexo[i]);

printf("\nqual a cor dos seus olhos?\n");
printf("[%d] azuis\n", 1);
printf("[%d] verdes\n", 2);
printf("[%d] castanhos\n", 3);
scanf("%d", &olhos[i]);

printf("\nqual a cor dos seus cabelos?\n");
printf("[%d] louros\n", 1);
printf("[%d] pretos\n", 2);
printf("[%d] castanhos\n", 3);
scanf("%d", &cabelos[i]);

printf("\nqual a sua idade?\n");
scanf("%d", &idade[i]);
}
for(i=0; i<N; i++)
{
printf("\nhabitante [%i] eh do sexo %d\t,tem a cor dos olhos %d\t,tem a cor dos cabelos %d\t,e tem %d anos de idade\n ",i+1, sexo[i], olhos[i], cabelos[i], idade[i]);
}

system("pause");
return 0;
}
