#include<stdio.h>
#include<math.h>

int main (){
int contcasos=1,n,numdigitos=1,numatual=2,contTemp=0;
while((scanf("%d",&n))!=EOF){
int cont=n;
 while(cont!=0){
 	numdigitos=numdigitos+cont;
 	cont--;
 }
	if(n==0) printf("Caso %i: 1 numero\n0\n\n",contcasos);
	else {
	printf("Caso %i: %i numeros\n",contcasos,numdigitos);
    cont=1;
	if(n==1) printf("0 1\n\n");
	else{
		printf("0 1");
		while(cont!=n){
			while(contTemp!=numatual){
				printf(" %i",numatual);
				contTemp++;
			}
			contTemp=0;
			cont++;
			numatual++;
		}
		printf("\n\n");
	}

}
contcasos++;
numdigitos=1;
numatual=2;	
	
}
 return 0;
}
