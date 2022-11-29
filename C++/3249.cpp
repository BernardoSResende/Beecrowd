#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
	int numCasos,contVitorias =0;
	char frase[1001];
	scanf(" %d",&numCasos);
	for(int i = 0;i<numCasos;i++){
		scanf(" %s",frase);
		if(!strstr(frase,"CD")) contVitorias++;
	}
	
	printf("%d\n",contVitorias);
	return 0;
}
