#include <stdio.h>

int converterSegundos(int valor){
  int segundos, minutos, horas;
  int r;

    horas = valor / 3600;
    valor = valor % 3600;
    minutos = valor / 60;
    valor = valor % 60;
    segundos = valor;
    printf("\n%02d:%02d:%02d",horas, minutos, segundos);
}

int main(int argc, char const *argv[]){
	int s;

	printf("Digite os segundos: ");
	scanf("%d",&s);

	converterSegundos(s);
}
