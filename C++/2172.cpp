#include<stdio.h>
#include<math.h>
#include<string.h>

int main (){
 long long int multiplicador,valor;
  scanf("%llu %llu",&multiplicador,&valor);
  while(multiplicador!=0 || valor!=0){
  	printf("%llu\n",multiplicador*valor);
  	scanf("%llu %llu",&multiplicador,&valor);
  }
 
 return 0;
}