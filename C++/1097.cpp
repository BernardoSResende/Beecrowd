#include <stdio.h>
int main() {
 int I,J;
  I=1;
  J=7;
  while(J!=4){
  	printf("I=%i J=%i\n",I,J);
  	J=(J-1);
  }
  I=I+2;
  J=9;
    while(J!=6){
  	printf("I=%i J=%i\n",I,J);
  	J=(J-1);
  }
  I=I+2;
  J=11;
    while(J!=8){
  	printf("I=%i J=%i\n",I,J);
  	J=(J-1);
  }
  I=I+2;
  J=13;
    while(J!=10){
  	printf("I=%i J=%i\n",I,J);
  	J=(J-1);
  }
  I=I+2;
  J=15;  
  while(J!=12){
  	printf("I=%i J=%i\n",I,J);
  	J=J-1;
  }
 
 return 0;
}