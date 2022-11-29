#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
	int horasB = 0,horasA = 0,horasM = 0,horasD = 0,numCasos,horasTemp;
	char nomeLixo[100];
	char categoria[20];
	int totalPresentes = 0;
	scanf(" %d",&numCasos);
	for(int i=0;i<numCasos;i++){
		scanf(" %s",nomeLixo);
		scanf(" %s",categoria);
		scanf(" %d",&horasTemp);
		if(!strcmp(categoria,"bonecos")){
			horasB += horasTemp;
		}
		else if(!strcmp(categoria,"arquitetos")){
			horasA += horasTemp;
		}
		else if(!strcmp(categoria,"musicos")){
			horasM += horasTemp;
		}
		else if(!strcmp(categoria,"desenhistas")){
			horasD += horasTemp;
		}
	}
	totalPresentes+= int( floor((horasB+0.0)/8.0));
	totalPresentes+= int (floor((horasA+0.0)/4.0));
	totalPresentes+=int (floor((horasD+0.0)/12.0));
	totalPresentes+= int (floor((horasM+0.0)/6.0));
	printf("%d\n",totalPresentes);
	
	
	return 0;
}