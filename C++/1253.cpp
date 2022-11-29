#include <stdio.h>
#include <string.h>

int main(){
	char frase[60],frase2[60];
	int cesar,contCasos, cont = 0,cont2 = 0;
	scanf("%d",&contCasos);
		while(cont<contCasos){
			scanf(" %s",frase);
			scanf(" %d",&cesar);
			cont2 = 0;
			while(cont2 < (strlen(frase))){
				if((frase[cont2]-cesar) < 65){
					frase2[cont2] = (frase[cont2] - cesar + 26);
				}
				else frase2[cont2] = (frase[cont2] - cesar);
				cont2++;
			}
			frase2[cont2] = '\0';
			printf("%s\n",frase2);
			cont++;
		}
	
	return 0;
}