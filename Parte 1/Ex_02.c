/*
2. Escreva um procedimento que recebe as 3 notas de um aluno por parâmetro e uma letra.
 Se a letra for A o procedimento calcula a média aritmética das notas do aluno, se for P, a sua média ponderada
  (pesos: 5, 3 e 2) e se for H, a sua média harmônica. A média calculada também deve retornar por parâmetro.
*/

#include <stdio.h>

float media(float n1, float n2,float n3, char l){
   float m;
  if(l == 'A' || l == 'a'){
    m = (n1 + n2 + n3) / 3.0;
    }
  if(l == 'P' || l == 'p'){
    m = (5.0 * n1 + 3.0 * n2 + 2.0 * n3) / 10.0;
    }
  if(l == 'H' || l == 'h'){
    m = 3.0 / (1.0 / n1 + 1.0 / n2 + 1.0 / n3);
    }
   return m;
}

int main() {
  float nota1, nota2, nota3, mediaFinal;
  char alternativa;


   printf("Digite a primeira nota: ");
   scanf("%f",&nota1);
   printf("Digite a segunda nota: ");
   scanf("%f",&nota2);
   printf("Digite a terceira nota: ");
   scanf("%f",&nota3);
   printf("Digite uma letra:\nA - Média aritmética\nP - Média ponderada\nH - Média harmonica\n >> ");
   scanf(" %c",&alternativa);

    mediaFinal=media(nota1,nota2,nota3,alternativa);
    printf("Média final é: %f\n",mediaFinal);
}
