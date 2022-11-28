#include <stdio.h>
int main() {
 int num1,num2,qtdpares,cont;
  scanf("%d",&qtdpares);
  cont=0;
  while(cont != qtdpares){
  	scanf("%d %d",&num1,&num2);
  	if (num2!=0) printf("%.1f\n",((num1+0.0)/num2));
  	else printf("divisao impossivel\n");
  	cont++;
  }

 return 0;
}