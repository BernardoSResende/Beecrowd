#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char jog1[10],jog2[10];
	int numCasos,index1,index2;
	
	scanf(" %d",&numCasos);
	for(int i=0;i<numCasos;i++){
		scanf(" %s %s",jog1,jog2);
		if(!strcmp(jog1,"ataque")) index1=2;
		else if (!strcmp(jog1,"pedra")) index1=1;
		else if(!strcmp(jog1,"papel")) index1=0;
		
		if(!strcmp(jog2,"ataque")) index2=2;
		else if (!strcmp(jog2,"pedra")) index2=1;
		else if(!strcmp(jog2,"papel")) index2=0;
		
		if(index1 == index2){
			if(index1 == 0) printf("Ambos venceram\n");
			else if(index1 == 1) printf("Sem ganhador\n");
			else printf("Aniquilacao mutua\n");
		}
		else if(index1>index2) printf("Jogador 1 venceu\n");
		else printf("Jogador 2 venceu\n");
	}
	return 0;
}