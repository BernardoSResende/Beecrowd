#include<stdio.h>
#include<math.h>
#include<string.h>

int main (){
 int numcasos,cont=0,velanterior=0,vel,primeiraqueda=0;
 scanf("%d",&numcasos);
 int velocidades[numcasos];
 while(cont!=numcasos){
 	scanf("%d",&velocidades[cont]);
 	if(velocidades[cont]>=velanterior){
 		velanterior=velocidades[cont];		
	 }
	else if(primeiraqueda==0){
		primeiraqueda=cont+1;
	}
	cont++;
	 
 }
 printf("%i\n",primeiraqueda);
return 0;
}