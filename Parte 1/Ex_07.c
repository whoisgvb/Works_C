#include <stdio.h>

int numPerfeito(int num){
  int sum,i;
      sum = 0;
      for (i=1; i < num;i++)
      {
          if((num%i) == 0)
                 sum = sum+i;
      }
      if (sum == num){
         printf("O %d é perfeito\n", num);
         return 1;
      }
      else{
        printf("O %d não é perfeito\n", num);
        return 0;
      }

}
int main(int argc, char const *argv[]) {
  int numero;
  printf("Digite um número: ");
  scanf("%d",&numero);

  return numPerfeito(numero);
}
