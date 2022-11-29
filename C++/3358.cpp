#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

int main(){
	char frase[44];
	int numCasos;
	scanf(" %d",&numCasos);
	for(int i = 0; i<numCasos;i++){
		int contConsoantes = 0;
		scanf(" %s",frase);
		frase[0] = tolower(frase[0]);
		for(int j=0;j<strlen(frase);j++){
			if(frase[j] == 'a' || frase[j] == 'e' || frase[j] == 'i' || frase[j] == 'o' || frase[j] == 'u'){
				contConsoantes = 0;
			}
			else contConsoantes++;
			if(contConsoantes == 3){
				frase[0] = toupper(frase[0]);
				printf("%s nao eh facil\n",frase);
				break;
			}
		}
		frase[0] = toupper(frase[0]);
		if(contConsoantes<3) printf("%s eh facil\n",frase);
	}
	return 0;
}