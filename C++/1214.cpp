#include<stdio.h>
#include<math.h>

int main (){
int numcasos,numnotas,contcasos=0,contnotas=0,somatorio=0,contAcima=0;
float media,porcentoAcima;
scanf("%d",&numcasos);
 while(contcasos!=numcasos){
 	scanf("%d",&numnotas);
 int notas[numnotas];
 while(contnotas!=numnotas){
 	scanf("%d",&notas[contnotas]);
 	somatorio=somatorio+notas[contnotas];
 	contnotas++;
 }
 media=(somatorio+0.0)/numnotas;
  contnotas=0;

 while(contnotas!=numnotas){
 	if(notas[contnotas]>media) contAcima++;
 	contnotas++;
 }
 printf("%.3f%%\n",(0.0+contAcima)/numnotas*100);
 contcasos++;
 contnotas=0;
 somatorio=0;
 contAcima=0;
 }
return 0;
}