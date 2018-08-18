/*14. Faça um procedimento que gera os 10 primeiros primos acima de 100 e retorna-os em um vetor X(10), por parâmetro.*/
#include <stdio.h>
#include <stdlib.h>

int primo(int);

int main() {

    int x=0, i;

    for(i=100; x<10; i++)
        if(primo(i)) {
            printf("%d \n", i);
            x++;
        }

    return 0;
}

int primo(int q) {
    int x;
    for(x=2; x<q; x++)
        if( (q%x) == 0 )
        return 0;
        return 1;
}
