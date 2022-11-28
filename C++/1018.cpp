#include <stdio.h>

 
int main() {
 int N,N_Original,cont100,cont50,cont20,cont10,cont5,cont2,cont1;
  scanf("%d",&N_Original);
    cont100=0;
    cont50=0;
    cont20=0;
    cont10=0;
    cont5=0;
    cont2=0;
    cont1=0;
    N=N_Original;
    while (N>=100){
 	    cont100=cont100+1;
		N= N-100;	 	
 	}
	while (N>=50){
   		cont50=cont50+1;
   		N= N-50;
   	}
   	while (N>=20){
   		cont20=cont20+1;
   		N= N-20;
	}
	while (N>=10){
		cont10=cont10+1;
		N= N-10;
	}
	while (N>=5){
		cont5=cont5+1;
		N=N-5;
	}
	while (N>=2){
		cont2=cont2+1;
		N=N-2;
	}
	while (N>=1){
		cont1=cont1+1;
		N=N-1;
	}   
	printf("%i\n",N_Original);
	printf("%i nota(s) de R$ 100,00\n",cont100);
	printf("%i nota(s) de R$ 50,00\n",cont50);
	printf("%i nota(s) de R$ 20,00\n",cont20);
	printf("%i nota(s) de R$ 10,00\n",cont10);
	printf("%i nota(s) de R$ 5,00\n",cont5);
	printf("%i nota(s) de R$ 2,00\n",cont2);
	printf("%i nota(s) de R$ 1,00\n",cont1);
	return 0;
	
	   		
   
}