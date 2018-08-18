/*5. Faça um procedimento que retorna, por parâmetro, um vetor A(5) com os 5 primeiros números perfeitos.*/
#include <stdio.h>

// Retorna 1 se for perfeito ou 0 se não for
int checaperfeito(int num) {
  int divisores=0,i;
  for (i=1; i<num; i++) {
    if ((num%i) == 0) {
      divisores += i;
    }
}
  if(divisores) {
    if(divisores==num) return 1;
  }
  return 0;
}

  int main() {
    int i,j;
    while(j!=6) {
      printf("%d\n",i);
      j++;
    }
    i++;
  }
}
