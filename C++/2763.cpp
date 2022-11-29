#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
	char frase[15];
	scanf(" %s",frase);
	printf("%c%c%c\n%c%c%c\n%c%c%c\n%c%c\n",frase[0],frase[1],frase[2],frase[4],frase[5],frase[6],frase[8],frase[9],frase[10],frase[12],frase[13]);
	return 0;
}