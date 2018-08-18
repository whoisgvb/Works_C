#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[]){
  int a,b,c;

printf("Digite o valor de A: ");
scanf("%i",&a);
printf("Digite o valor de B: ");
scanf("%i",&b);
printf("Digite o valor de C: ");
scanf("%i",&c);

     if(a==b||a==c||b==c){
       printf("O triangulo é equilatero\n");
     }
      else if (a!=b||b==c||c!=a){
         printf("O triangulo é isoceles\n");
       }
        else if (a != b && b != c && b != c){
               printf("É um triangulo qualquer\n");
             }
}
