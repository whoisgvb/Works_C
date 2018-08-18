/*15. Faça um procedimento que recebe 2 vetores A e B de tamanho 10 de inteiros, por parâmetro. O procedimento deve retornar um vetor C, por parâmetro, que contém os elementos de A e B em ordem decrescente.*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    int vetA[10];
    int vetB[10];
    int vetC[20];

    int i = 0;
    int j = 0;
    int temp = 0;

    printf("Digite os números para o vetor 1: \n");
    for ( i = 0; i < 10; i++ )
        scanf( "%d", &vetA[i] );

    printf("Digite os números para o vetor 2: \n");
    for ( i = 0; i < 10; i++ )
        scanf( "%d", &vetB[i] );

    for ( i = 0; i < 10; i++ )
        vetC[i] = vetA[i];

    for ( i = 5; i < 20; i++ )
        vetC[i] = vetB[i-5];

    printf("[desordenado] vetor3: \n\n");
    for ( i = 0; i < 20; i++ )
        printf( "%d \n", vetC[i] );


    temp = vetC[0];
    for ( i = 0; i < 10; i++ )
        for ( j = i; j < 10; j++ )
            if ( vetC[j] < vetC[i]  )
            {
                temp = vetC[j];
                vetC[j] = vetC[i];
                vetC[i] = temp;
            }

    printf("[Ordenado] vetor3: ");
    for ( i = 0; i < 10; i++ )
            printf( "%d \n", vetC[i] );

    system("PAUSE");

    return 0;
}
