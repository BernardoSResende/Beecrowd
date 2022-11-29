#include <stdio.h>
int main() {
 int impar[5],par[5],contgeral=0,contimpar=0,contpar=0,n,parametropar=0,parametroimpar=0;
 while(contgeral!=15){
 scanf("%d",&n);
 if((n%2)==0){
 	if(contpar==4){
 		par[contpar]=n;
 		printf("par[0] = %i\n",par[0]);
 		printf("par[1] = %i\n",par[1]);
 		printf("par[2] = %i\n",par[2]);
 		printf("par[3] = %i\n",par[3]);
 		printf("par[4] = %i\n",par[4]);
 		contpar=0;
	 }
	else{
	 par[contpar]=n;
	 contpar++;
	}
 }
 else{
 	if(contimpar==4){
 		impar[contimpar]=n;
 		printf("impar[0] = %i\n",impar[0]);
 		printf("impar[1] = %i\n",impar[1]);
 		printf("impar[2] = %i\n",impar[2]);
 		printf("impar[3] = %i\n",impar[3]);
 		printf("impar[4] = %i\n",impar[4]);
 		contimpar=0;
	 }
	else{
	 impar[contimpar]=n;
	 contimpar++;
	}
	
 }
 contgeral++;
 }
   while(parametroimpar!=contimpar){
   	printf("impar[%i] = %i\n",parametroimpar,impar[parametroimpar]);
   	parametroimpar++;
   }
   while(parametropar!=contpar){
   	printf("par[%i] = %i\n",parametropar,par[parametropar]);
   	parametropar++;
   }
   
 
 return 0;
}