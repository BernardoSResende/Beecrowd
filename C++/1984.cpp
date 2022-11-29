#include<stdio.h>
#include<math.h>

int main (){
long long int a,contB=0,contCM=0,contDM=0,contM=0,contCm=0,contDm=0,contm=0,contc=0,contd=0,contu=0;
scanf("%llu",&a);
while(a>=1000000000){
	contB++;
	a=a-1000000000;
	}
while(a>=100000000){
	contCM++;
	a=a-100000000;
	}
while(a>=10000000){
	contDM++;
	a=a-10000000;
	}
while(a>=1000000){
	contM++;
	a=a-1000000;
	}
while(a>=100000){
	contCm++;
	a=a-100000;
	}
while(a>=10000){
	contDm++;
	a=a-10000;
	}
while(a>=1000){
	contm++;
	a=a-1000;
	}
while(a>=100){
	contc++;
	a=a-100;
	}
while(a>=10){
	contd++;
	a=a-10;
	}
contu=a;
if(contB>0) printf("%llu%llu%llu%llu%llu%llu%llu%llu%llu%llu\n",contu,contd,contc,contm,contDm,contCm,contM,contDM,contCM,contB);
else if(contCM>0) printf("%llu%llu%llu%llu%llu%llu%llu%llu%llu\n",contu,contd,contc,contm,contDm,contCm,contM,contDM,contCM);				
else if(contDM>0)printf("%llu%llu%llu%llu%llu%llu%llu%llu\n",contu,contd,contc,contm,contDm,contCm,contM,contDM);				
else if(contM>0) printf("%llu%llu%llu%llu%llu%llu%llu\n",contu,contd,contc,contm,contDm,contCm,contM);
else if(contCm>0) printf("%llu%llu%llu%llu%llu%llu\n",contu,contd,contc,contm,contDm,contCm);
else if(contDm>0) printf("%llu%llu%llu%llu%llu\n",contu,contd,contc,contm,contDm);
else if(contm>0) printf("%llu%llu%llu%llu\n",contu,contd,contc,contm);
else if(contc>0) printf("%llu%llu%llu\n",contu,contd,contc);
else if(contd>0) printf("%llu%llu\n",contu,contd);
else printf("%llu\n",contu);
return 0;
}