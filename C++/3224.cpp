#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
	char capacidade[1001], requisito[1001];
	scanf(" %s %s",capacidade,requisito);
	if(strlen(capacidade)>= strlen(requisito)) printf("go\n");
	else printf("no\n");
	return 0;
}