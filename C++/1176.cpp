#include <stdio.h>
int main() {
 double num,n[60],numcasos,contgeral,menornum,somatorio,posfib,maiornum,menornumholder;
 contgeral=0;
  scanf("%lf",&numcasos);
  while(contgeral!=numcasos){
  	scanf("%lf",&num);
  	if(num==0) printf("Fib(0) = 0\n");
  	else if(num==1)printf("Fib(1) = 1\n");
  	else{
  		posfib=1;
  		maiornum=1;
  		menornum=0;
  		while(posfib!=num){
  			menornumholder=menornum;
  			menornum=maiornum;
  			maiornum=menornumholder+maiornum;
  			posfib++;
		  }
		  printf("Fib(%.0lf) = %.0lf\n",num,maiornum);
	
  		
  		
	  }
	contgeral++;
  }

 return 0;
}