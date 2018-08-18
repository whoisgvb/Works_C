#include<stdio.h>
int jogo(){
 int hora1,minuto1,hora2,minuto2,t;
 printf("Digite a hora e depois os minutos iniciais\n");
 scanf("%d%d",&hora1,&minuto1);
 printf("digite a hora e depois os minutos finais\n");
 scanf("%d%d",&hora2,&minuto2);
 if(hora1==hora2&&minuto1==minuto2)
 t=1140;
 else{
  if(minuto1>minuto2){
   if(hora1>hora2)
   t=(((hora2+24)-hora1)*60)+((minuto2+60)-minuto1);
   else
   t=((hora2-hora1)*60)+((minuto2+60)-minuto1);
  }
  else{
   if(hora1>hora2)
   t=(((hora2+24)-hora1)*60)+(minuto2-minuto1);
   else
   t=((hora2-hora1)*60)+(minuto2-minuto1);
  }
 }
 return t;
}
int main(int argc, char const *argv[]) {
 int partida;
 partida=jogo();
 printf("O tempo do jogo foi %d minutos",partida);
 return 0;
}
