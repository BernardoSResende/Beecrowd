#include<stdio.h>
#include<math.h>
#include<string.h>

int main (){
  int consumo,participantes;
  double media;
  scanf("%d %d",&consumo,&participantes);
  media=(consumo+0.0)/participantes;
  printf("%.2lf\n",media);
    
 return 0;
}