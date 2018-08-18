/*23. Uma locadora de vídeos tem guardada, em um vetor A de 500 posições, a quantidade de filmes retirados por seus clientes durante o ano de 1997. Agora, esta locadora está fazendo uma promoção e, para cada 15 filmes retirados, o cliente tem direito a uma locação grátis. Faça um procedimento que receba o vetor A por parâmetro e retorna, também por parâmetro, um vetor contendo a quantidade de locações gratuitas a que cada cliente tem direito.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int locacoes(int vetA[500], int vetB[500]){
    int i;

    for(i = 0; i < 500; i++){
        vetB[i] = vetA[i]/15;
    }
}

int main()
{
    int vetA[500], vetB[500];
    int i;


    srand(time(NULL));
    for(i = 0; i < 500; i++){
        vetA[i] = rand() % 1001;
    }

    locacoes(vetA, vetB);

    for(i = 0; i < 500; i ++){
        printf("A[%d] = %d\tB[%d] = %d\n", i, vetA[i], i, vetB[i]);
    }
    return 0;
}
