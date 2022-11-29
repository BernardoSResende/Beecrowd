#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
	char eq[10001];
	int tam,cont=0,ParentesisAberto=0,ParentesisFechado=0;
	while(scanf(" %[^\n]s", eq)!=EOF){
	
	tam=strlen(eq);
	while(cont!=tam){
		if(eq[cont]=='(') ParentesisAberto++;
		if(eq[cont]==')'){
			ParentesisFechado++;
			if(ParentesisFechado>ParentesisAberto){
				printf("incorrect\n");
				break;
			}
		}
		cont++;
	}
	if(ParentesisAberto==ParentesisFechado){
		printf("correct\n");
	}
	else if(ParentesisFechado<ParentesisAberto){
		printf("incorrect\n");
	}
	ParentesisAberto=0;
	ParentesisFechado=0;
	cont=0;
}
	return 0;
	
}