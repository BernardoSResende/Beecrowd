#include<stdio.h>
#include<math.h>
#include<string.h>

int main (){
 int a,b,c,tempoA,tempoB,tempoC;
 scanf("%d %d %d",&a,&b,&c);
 tempoA=(b*2)+(c*4);
 tempoB=(a*2)+(c*2);
 tempoC=(b*2)+(a*4);
 if(tempoA<=tempoB && tempoA<=tempoC) printf("%i\n",tempoA);
 else if(tempoB<=tempoA && tempoB<=tempoC) printf("%i\n",tempoB);
 else if(tempoC<=tempoB && tempoC<=tempoA) printf("%i\n",tempoC);
 
 
 
return 0;
}