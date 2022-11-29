#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
	int numCasos,numExtensores;
	scanf(" %d",&numCasos);
	for(int i=0;i<numCasos;i++){
		scanf(" %d",&numExtensores);
		int somatorio = 0;
		int temp;
		for(int j=0;j<numExtensores;j++) {
			scanf(" %d",&temp);
			somatorio += temp;	
		}
		somatorio = somatorio - (numExtensores-1);
		printf("%d\n",somatorio);
		
	}
	return 0;
}