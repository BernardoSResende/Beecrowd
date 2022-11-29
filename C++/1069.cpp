#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
	char eq[1001];
	int contDiamantes=0,contAbre=0,numCasos,contCasos=0;
	int tam,cont=0;
	scanf("%d",&numCasos);
	while(contCasos!=numCasos){
		scanf("%s",eq);
		tam=strlen(eq);
		while(cont!=tam){
			if(eq[cont]=='<'){
				contAbre++;
			}
			if(eq[cont]=='>'){
				if(contAbre>0){
					contAbre--;
					contDiamantes++;
				}
			}
		cont++;	
		}
		printf("%i\n",contDiamantes);
		contAbre=0;
		contDiamantes=0;
		contCasos++;
		cont=0;
	}	
	return 0;
}