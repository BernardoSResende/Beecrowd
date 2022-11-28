#include <stdio.h>
int main() {
 float I,J;
  I=.2;
  J=.2;
    printf("I=0 J=1\n");
  	printf("I=0 J=2\n");
  	printf("I=0 J=3\n");
  while((I) < (1)){
  	printf("I=%.1f J=%.1f\n",I,J+1);
  	printf("I=%.1f J=%.1f\n",I,J+2);
  	printf("I=%.1f J=%.1f\n",I,J+3);
  	I=.2+I;
  	J=.2+J;
  	
  }
   printf("I=1 J=2\n");
   printf("I=1 J=3\n");
   printf("I=1 J=4\n");
   I=.2+I;
  	J=.2+J;
   
   while((I) < (2)){
  	printf("I=%.1f J=%.1f\n",I,J+1);
  	printf("I=%.1f J=%.1f\n",I,J+2);
  	printf("I=%.1f J=%.1f\n",I,J+3);
  	I=.2+I;
  	J=.2+J;
}
   
   printf("I=2 J=3\n");
   printf("I=2 J=4\n");
   printf("I=2 J=5\n");
 
 return 0;
}