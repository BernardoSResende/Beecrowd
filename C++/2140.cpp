#include<stdio.h>
#include<math.h>

int main (){
int compra,pago,dif;
scanf("%d %d",&compra,&pago);
while(compra!=0 || pago!=0){
	dif=pago-compra;
	if(dif==4 || dif==7 || dif==12 || dif==22 || dif==52 || dif==102 || dif==10 || dif==15 || dif==25 || dif==55 || dif==105 || dif==20 || dif==30 || dif==60 || dif==110 || dif==40 || dif==70 || dif==120 || dif==100 || dif==150 || dif==200) printf("possible\n");                  
   else printf("impossible\n");
   scanf("%d %d",&compra,&pago);
}

return 0;