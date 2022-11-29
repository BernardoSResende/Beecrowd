#include<stdio.h>
#include<math.h>

int main (){
unsigned long int n1,n2,contGeral=0;
int contCM1=0,contDM1=0,contM1=0,contCm1=0,contDm1=0,contm1=0,contc1=0,contd1=0,contu1=0;
int contCM2=0,contDM2=0,contM2=0,contCm2=0,contDm2=0,contm2=0,contc2=0,contd2=0,contu2=0;
scanf("%lu %lu",&n1,&n2);
 while(n1!=0 || n2!=0){
 while(n1>=100000000){
 	contCM1++;
 	n1=n1-100000000;
 }
 while(n1>=10000000){
 	contDM1++;
 	n1=n1-10000000;
 }
 while(n1>=1000000){
 	contM1++;
 	n1=n1-1000000;
 }
 while(n1>=100000){
 	contCm1++;
 	n1=n1-100000;
 }
 while(n1>=10000){
 	contDm1++;
 	n1=n1-10000;
 }
  while(n1>=1000){
 	contm1++;
 	n1=n1-1000;
 }
  while(n1>=100){
 	contc1++;
 	n1=n1-100;
 }
  while(n1>=10){
 	contd1++;
 	n1=n1-10;
 }
 contu1=n1;
 
  
  
  while(n2>=100000000){
 	contCM2++;
 	n2=n2-100000000;
 }
 while(n2>=10000000){
 	contDM2++;
 	n2=n2-10000000;
 }
 while(n2>=1000000){
 	contM2++;
 	n2=n2-1000000;
 }
 while(n2>=100000){
 	contCm2++;
 	n2=n2-100000;
 }
 while(n2>=10000){
 	contDm2++;
 	n2=n2-10000;
 }
  while(n2>=1000){
 	contm2++;
 	n2=n2-1000;
 }
  while(n2>=100){
 	contc2++;
 	n2=n2-100;
 }
  while(n2>=10){
 	contd2++;
 	n2=n2-10;
 }
 contu2=n2;
if((contu1+contu2)>=10) {
contGeral++;
contd1++;
}
if((contd1+contd2)>=10) {
contGeral++;
contc1++;
}
if((contc1+contc2)>=10) {
contGeral++;
contm1++;
}
if((contm1+contm2)>=10){
contGeral++;
contDm1++;
}
if((contDm1+contDm2)>=10){
contGeral++;
contCm1++;
}
if((contCm1+contCm2)>=10){
contGeral++;
contM1++;
}
if((contM1+contM2)>=10){
contGeral++;
contDM1++;
}
if((contDM1+contDM2)>=10){
contGeral++;
contCM1++;
}
if((contCM1+contCM2)>=10) {
contGeral++;
}
if(contGeral==0) printf("No carry operation.\n");
else if(contGeral==1) printf("1 carry operation.\n");
else printf("%lu carry operations.\n",contGeral);
contGeral=0;contCM1=0;contCM2=0;contDM1=0;contDM2=0;contM1=0;contM2=0;contCm1=0;contCm2=0;contDm1=0;contDm2=0;contm1=0;contm2=0;contc1=0;contc2=0;contd1=0;contd2=0;contu1=0;contu2=0;
scanf("%lu %lu",&n1,&n2);
}

return 0;
}