/*8. Faça um procedimento que recebe um vetor X de 30 elementos inteiros, por parâmetro, e retorna, também por parâmetro, dois vetores A e B. O vetor A deve conter os elementos pares de X e o vetor B, os elementos ímpares.*/

#include <stdio.h>
#include <stdlib.h>

void vetor ( int *,int * ,int * );
void vetor (int *xp, int *ap , int *bp){
  int i,con_a=0,con_b=0;
for ( i=0 ; i<=29 ; i++ ){
  if ( (xp[i] % 2) == 0 ){
    ap[con_a] = xp[i];
    con_a++;
  }
  else{
    bp[con_b] = xp[i];
    con_b++;
    }
  }
}

int main (){
  int x[30],a[30],b[30],i;
  int *xp,*ap,*bp;

  xp = &x[0];
  ap = &a[0];
  bp = &b[0];

for ( i=0 ; i<=29 ; i++ ){
  printf("Digite o %d Elemento : ",i);
  scanf("%d",&x[i]);
  a[i] = 0;
  b[i] = 0;
  }
  printf("\n\nNumeros pares \n\n");
  vetor ( xp,ap,bp );
  for ( i=0 ; i<=29 ; i++){
    if ( a[i] != 0 ){
      printf(" %d ", a[i]);
    }
  }
  printf("\n\nNumeros impares \n\n");
  for ( i=0 ; i<=29 ; i++ ){
    if ( b[i] != 0 )
    {
  printf(" %d ", b[i]);
    }
  }
}
