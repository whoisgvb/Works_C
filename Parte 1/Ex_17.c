#include <stdio.h>

float calcularMedia(){
float soma, num, media, i;
soma = 0;
media = 0;
  while(num != 0){
    printf("\nDigite um numero positivo: ");
    scanf("%f", &num);

      if(num <= 0){
        printf("\n*** FIM DA EXECUÇÃO***\n");
        printf("a média final é %0.2f", soma/i);
        }
        soma += num;
        i++;
      }

}
int main(int argc, char const *argv[]) {

  return calcularMedia();
}
