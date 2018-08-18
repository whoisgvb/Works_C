/*4. Faça um procedimento que receba o vetor de registro definido no exercício anterior (30), por parâmetro, e retorna também por parâmetro: a média de salário entre os habitantes, a menor e a maior idade do grupo e a quantidade de mulheres com 3 filhos que recebe até R$500,00.*/

#include <stdio.h>
#include <stdlib.h>
#define N 2
int main()
{

int i, idade[N], sexo[N], salario[N], nFilhos[N], media, maior, menor, qtdMulheres;

for(i=0; i<N; i++)
{
  printf("\nHabitante [%d], qual a sua idade?\n", i+1);
  scanf("%d", &idade[i]);
  if(i==0){
    maior=idade[i];menor=idade[i];}
  if(idade[i]>maior){
    maior=idade[i];
  }
  else{
    if(idade[i]<menor){
        menor=idade[i];
    }
  }

  printf("\nHabitante [%d], Informe o seu sexo:\n");
  printf("[%d] feminino\n", 1);
  printf("[%d] masculino\n", 2);
  printf("[%d] android\n", 3);
  printf("[%d] outros\n", 4);
  scanf("%d", &sexo[i]);

  printf("\nHabitante [%d], Qual o seu salário?\n");
  scanf("%d", &salario[i]);

  printf("\nHabitante [%d], Quantos filhos você tem?\n");
  scanf("%d", &nFilhos[i]);

  if(sexo[i] == 2 && nFilhos[i] <= 3 && salario[i] < 500){
    qtdMulheres+=1;
  }
  media = salario[i]/500;
  printf("\nA média de salários é: \n", media);
  printf("\nA maior idade  é: \n", maior);
  printf("\nA menor idade é: \n", menor);
  printf("\nA quantidade de mulheres com 3 filhos que recebe até R$500,00 é: \n", qtdMulheres);
}

for(i=0; i<N; i++)
{
printf("\nhabitante [%i] tem %d anos, é do sexo %d, recebe R$%d e tem %d filhos",i+1, idade[i], sexo[i], salario[i], nFilhos[i]);
}

return 0;
}
