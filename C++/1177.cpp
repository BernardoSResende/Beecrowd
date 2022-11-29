#include <stdio.h>
int main() {
 int contgeral=0,contTemp=0,num;
  scanf("%d",&num);
   while(contgeral!=1000){
   	while(contTemp!= (num)){
   		printf("N[%i] = %i\n",contgeral,contTemp);
   		contTemp++;
   		contgeral++;
   		if(contgeral==1000) break;
	   }
	contTemp=0;
	
   }

 return 0;
}