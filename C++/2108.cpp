#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
//Bernardo Serravalle Resende; Pedro Martins de Oliveira Menezes
int main(){
	char frase[101];
	char zero[2]="0";
	char* palavra;
	char maior_palavra[101];
	scanf("%[^\n]c",frase);
	while(strcmp(frase,zero)!=0){
	palavra=strtok(frase, " ");
	while(palavra != NULL){
		if(strlen(palavra)>=strlen(maior_palavra)) strcpy(maior_palavra,palavra);
		printf("%d",strlen(palavra));
		palavra=strtok(NULL," ");
		if(palavra==NULL) printf("\n");
		else printf("-");
	}
	scanf(" %[^\n]c",frase);
}

printf("\nThe biggest word: %s\n",maior_palavra);
return 0;
}