#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int calcBhaskara(float a,float b,float c){
  float x1, x2, delta;

  delta = b*b - 4*a*c;
  x1 = (-b + sqrt(delta)) / (2*a);
  x2 = (-b - sqrt(delta)) / (2*a);

  if(delta < 0) {
  printf("\nA equacao nao possui raizes reais.n");
  } else {
  printf("\nO valor de x1: %.2fn", x1);
  printf("\nO valor de x2: %.2fn", x2);
  }
}
int main(int argc, char** argv)
{
  float A,B,C;

 printf("\nDigite o valor de A: ");
 scanf("%f", &A);
 printf("\nDigite o valor de B: ");
 scanf("%f", &B);
 printf("\nDigite o valor de C: ");
 scanf("%f", &C);

return calcBhaskara(A,B,C);

}
