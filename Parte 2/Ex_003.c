/*3. Foi realizada uma pesquisa entre 500 habitantes de uma certa região. De cada habitante foram coletados os dados: idade, sexo, salário e número de filhos. Faça um procedimento que leia esses dados em um vetor de registro. O vetor de registro deve ser enviado por referência. */
#include <stdio.h>
#include <stdlib.h>
#define N 500
int main()
{

int i, idade[N], sexo[N], salario[N], nFilhos[N];

for(i=0; i<N; i++)
{
  printf("\nHabitante [%d], qual a sua idade?\n", i+1);
  scanf("%d", &idade[i]);

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


}
for(i=0; i<N; i++)
{
printf("\nhabitante [%i] tem %d anos, é do sexo %d, recebe R$%d e tem %d filhos",i+1, idade[i], sexo[i], salario[i], nFilhos[i]);
}

system("pause");
return 0;
}
