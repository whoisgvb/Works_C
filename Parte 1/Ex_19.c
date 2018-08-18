#include <stdio.h>
int main(int argc, char const *argv[]){
    int vetores[50];
    int maior, menor;

    printf("\n\t\tMaior e menor valor de um vetor de inteiros.\n\n");

    // Recebendo os valores do vetor.
    for (int i = 0; i < 50; ++i) {
        printf("Digite o vetor[%d]: ", i);
        scanf("%d", &vetores[i]);
    }


    maior = vetores[0];
    menor = vetores[0];


    for (int i = 0; i < 50; ++i) {
        if (vetores[i] > maior){
          maior = vetores[i];
        }
        else if (vetores[i] < menor){
          menor = vetores[i];
        }
    }

    printf("\n\n Maior: %d\n", maior);
    printf(" Menor: %d", menor);


}
