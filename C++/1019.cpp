#include <stdio.h>

 
int main() {
int N,contH,contM,contS;
 contH=0;
 contM=0;
 contS=0;
 scanf("%d",&N);
 while(N>=3600){
 	contH=contH+1;
 	N=N-3600;
 }
 while(N>=60){
 	contM=contM+1;
 	N=N-60;
 }
 while(N>=1){
 	contS=contS+1;
 	N=N-1;
 }
 printf("%i:%i:%i\n",contH,contM,contS);
 return 0;
 		
   
}