/*22. Faça um procedimento que receba, por parâmetro um vetor B(50) de reais e calcula o maior valor do vetor. A seguir, o procedimento deve dividir todos os elementos de B pelo maior encontrado. O vetor deve retornar alterado.*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    int a, maior=0, menor=0;
    float b[50];


    for (a=0;a<50;a++){
      printf("Digite o %dº valor: ", a);
      scanf("%f", &b[a]);
      if(a==0){
        maior=b[a];
      }
      else if(b[a]>maior){
        maior=b[a];
      }
      b[a]= b[a]/maior;
    }

    printf("\nO Resultado é: %d\n", b[a]);

}
