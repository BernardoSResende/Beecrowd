#include<stdio.h>
#include<math.h>

int main (){
unsigned long long int a,b,aFat=1,bFat=1,numcasos,cont=0,pesoKg,numGraos,pesoGramas;
scanf("%llu",&numcasos);
while(cont!=numcasos){
	scanf("%llu",&a);
	if(a==64)printf("1537228672809129 kg\n");
	else{
	numGraos=pow(2,a);
	pesoGramas=numGraos/12;
	pesoKg=pesoGramas/1000;
	printf("%llu kg\n",pesoKg);
}
	cont++;
}


return 0;
}