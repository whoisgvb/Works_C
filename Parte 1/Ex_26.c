/*26. Escreva uma função que calcule o valor do co-seno de x através de 20 termos da série seguinte: co-seno(x) = 1 - x2 + x4 - x6 + .... 2! 4! 6!*/
#include <stdio.h>
#include <math.h>

int fatorial(int N){
  int i, f=1;
  for (i=1; i<= N; i++){
    f = f * i;
  }
  return f;
}
float calcularCosseno (float x){
  float c = 0.0;
  for (int i=1; i<=20; i++){
    float ang = 45.0;
    ang = 3.141593 * ang/180.0;
    printf("Informe o valor de x: ");
    scanf("%f", &c);
    c = c + pow(-1,i)*pow(x,2*i)/fatorial(2*i);
    printf("co-seno = %f\n", c);
    printf("cosseno = %f\n ", calcularCosseno(ang));
    printf("cos = %f\n ", cos(ang));
  }

}
int main(int argc, char const *argv[]) {
  float X;
  return calcularCosseno(X);

}
