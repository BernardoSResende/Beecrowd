#include <stdio.h>
int main() {
 int x,contalcool,contgasolina,contdiesel;
 contalcool=0; contgasolina=0;contdiesel=0;
 scanf("%d",&x);
  while(x!=4){
  	if(x==1) contalcool=contalcool+1;
  	if(x==2) contgasolina=contgasolina+1;
  	if(x==3) contdiesel=contdiesel+1;
  	scanf("%d",&x);
  }
  printf("MUITO OBRIGADO\n");
  printf("Alcool: %i\n", contalcool);
  printf("Gasolina: %i\n",contgasolina);
  printf("Diesel: %i\n",contdiesel);
	  

  


 return 0;
}