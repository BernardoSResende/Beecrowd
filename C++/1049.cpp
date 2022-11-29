#include <stdio.h>
#include <string.h>

int main(){
	char frase1[20],frase2[20],frase3[20];
	scanf(" %s",frase1);
	scanf(" %s",frase2);
	scanf(" %s",frase3);
	if(!strcmp(frase1,"vertebrado")){
		if(!strcmp(frase2,"ave")){
			if(!strcmp(frase3,"carnivoro")) printf("aguia\n");
			else printf("pomba\n");
		}
		else{
			if(!strcmp(frase3,"onivoro")) printf("homem\n");
			else printf("vaca\n");
		}
	}
	else {
		if(!strcmp(frase2,"inseto")){
			if(!strcmp(frase3,"hematofago")) printf("pulga\n");
			else printf("lagarta\n");
		}
		else{
			if(!strcmp(frase3,"hematofago")) printf("sanguessuga\n");
			else printf("minhoca\n");
		}
	}
	return 0;
}