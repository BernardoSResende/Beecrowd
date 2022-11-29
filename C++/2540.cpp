#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	int num,voto,contagem;
	while(scanf(" %d",&num) != EOF){
		contagem = 0;
		for(int i = 0; i<num;i++){
		scanf(" %d",&voto);
		if(voto == 1) contagem++;
	}
	if(contagem>= (0.666666*num)) printf("impeachment\n");
	else printf("acusacao arquivada\n");
	}
	return 0;
}