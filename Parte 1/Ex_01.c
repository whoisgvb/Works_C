/*
 *  1. Faça uma função que recebe por parametro o raio de uma esfera e calcula o seu volume (v = 4/3.PI .R3 ).
 */

#include <stdio.h>
#include <math.h>

#define PI 3.14

float calculaVolume(float raio){
    float v=(4*PI*raio*raio*raio)/3;
    return v;
}
int main(){
    float Result, Raio;
    printf("Digite o raio da esfera para calcular mostrar volume:");
    scanf("%f",&Raio);
    Result=calculaVolume(Raio);
    printf("O volume é: %.3f\n",Result);
		getchar();
    return 0;
}
