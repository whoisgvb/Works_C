/*19. Faça um procedimento que recebe, por parâmetro, 2 vetores de 15 elementos inteiros e que calcule e retorne, também por parâmetro, o vetor produto dos dois primeiros.*/
#include <stdio.h>
int main(){

int i, vetorA[15], vetorB[15], aux=0;

  for(i=0; i<15; i++){
   printf("\nDigite o %d%c valor do Vetor A : ", i+1, 167);
   scanf("%d", &vetorA[i]);
 }
 for(i=0; i<15; i++){
   printf("\nDigite o %d%c valor do Vetor B : ", i+1, 167);
   scanf("%d", &vetorB[i]);
}


  for(i=0; i<15; i++){
   aux += vetorA[0] * vetorB[0];
 }
   printf("\nO vetor produto é: %d", aux);
}
