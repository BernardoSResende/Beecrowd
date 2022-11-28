#include <stdio.h>

 
int main() {
double N;
int c100,c50,c20,c10,c5,c2,m1,m05,m025,m01,m005,m001;
  c100=0;
  c50=0;
  c20=0;
  c10=0;
  c5=0;
  c2=0;
  m1=0;
  m05=0;
  m025=0;
  m01=0;
  m005=0;
  m001=0;
  scanf("%lf",&N);
  while(N>=100.000000 ){
  	c100 = c100 +1;
  	N = N -100;
  	
  }
  
  while(N>=50 ){
  	c50 = c50 +1;
  	N = (N-50);
  	
  }
  
    while(N>= 20){
  	c20 = c20 +1;
  	N = N -20;
  	
  }
    while(N>=10 ){
  	c10 = c10 +1;
  	N = N -10;
  	
  }
    while(N>=5 ){
  	c5 = c5 +1;
  	N = N -5;
  	
  }
    while(N>=2 ){
  	c2 = c2 +1;
  	N = N -2;
  	
  }
    while(N>=1){
  	m1 = m1 +1;
  	N = N - 1;
  	
  }
    while(N>=0.5 ){
  	m05 = m05 +1;
  	N = N - 0.5;
  	
  }
    while(N>=0.25 ){
  	m025 = m025 +1;
  	N = N - 0.25;
  	
  }
    while(N>= 0.1 ){
  	m01 = m01 +1;
  	N = N - 0.1;
  	
  }
    while(N>=0.05 ){
  	m005 = m005 +1;
  	N = N - 0.05;
  	
  }
    while(N>0.009000 || N==0.009000 ){
  	m001 = m001 +1;
  	N = N - 0.01;
  	
  }
  
  printf("NOTAS:\n");
  printf("%i nota(s) de R$ 100.00\n",c100);
  printf("%i nota(s) de R$ 50.00\n",c50);
  printf("%i nota(s) de R$ 20.00\n",c20);
  printf("%i nota(s) de R$ 10.00\n",c10);
  printf("%i nota(s) de R$ 5.00\n",c5);
  printf("%i nota(s) de R$ 2.00\n",c2);
  printf("MOEDAS:\n");
  printf("%i moeda(s) de R$ 1.00\n",m1);
  printf("%i moeda(s) de R$ 0.50\n",m05);
  printf("%i moeda(s) de R$ 0.25\n",m025);
  printf("%i moeda(s) de R$ 0.10\n",m01);
  printf("%i moeda(s) de R$ 0.05\n",m005);
  printf("%i moeda(s) de R$ 0.01\n",m001);
  

 return 0;
 		
   
}