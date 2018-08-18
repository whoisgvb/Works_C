#include <stdio.h>
int main(int argc, char const *argv[]){

  int numFilhos=0, numSalarios=0, numPessoas=0, pessoas350=0;
  float mediaSalario=0.0, mediaFilhos=0.0, salario=0.0, maiorSalario=0.0, porcentagem350=0.0;


  for(;;){
    printf("Digite o número de filhos e após o salário: (0 para terminar)\n");
    scanf("%d", &numFilhos);
    if(numFilhos == 0){
      break;
    }
    scanf("%f", &salario);
    numPessoas++;
    if (salario > maiorSalario) maiorSalario = salario;
    if (salario <= 350.0) pessoas350++;
    mediaSalario += salario;
    mediaFilhos += numFilhos;

  }
  if (numPessoas){
    mediaSalario = mediaSalario / numPessoas;
    mediaFilhos = mediaFilhos / numPessoas;
    porcentagem350 = (pessoas350 / (float)numPessoas) * 100.0;
  }

  printf("A media do salário é: %.2f\n", mediaSalario);
  printf("A media do numero de filhos é: %.2f\n", mediaFilhos);
  printf("O maior salário: %.2f\n", maiorSalario);
  printf("O percentual de pessoas com salario até 350 reais: %.2f%%\n", porcentagem350);

}
