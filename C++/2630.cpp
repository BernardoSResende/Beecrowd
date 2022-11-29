#include<stdio.h>
#include<math.h>
#include<string.h>

int main (){
 int numcasos,cont=0,a,b,c;
 char str[5], min[4]="min",mean[5]="mean",eye[4]="eye",max[4]="max";
 scanf("%d",&numcasos);
 while(cont!=numcasos){
 	scanf("%s",&str);
 	scanf("%d %d %d",&a,&b,&c);
 	
 	if(strcmp(str,min)==0){
 		if(a<=b && a<=c) printf("Caso #%i: %i\n",cont+1,a);
 		else if(b<=a && b<=c) printf("Caso #%i: %i\n",cont+1,b);
 		else if(c<=b && c<=a) printf("Caso #%i: %i\n",cont+1,c);

	 }
	else if(strcmp(str,max)==0){
		if(a>=b && a>=c) printf("Caso #%i: %i\n",cont+1,a);
 		else if(b>=a && b>=c) printf("Caso #%i: %i\n",cont+1,b);
 		else if(c>=b && c>=a) printf("Caso #%i: %i\n",cont+1,c);
		
	}
	else if(strcmp(str,mean)==0){
		printf("Caso #%i: %.0f\n",cont+1,floor((a+b+c+0.0)/3));
	}
	else if(strcmp(str,eye)==0) printf("Caso #%i: %.0f\n",cont+1,floor((a*0.3)+(b*0.59)+(c*0.11)));
 	cont++;
 }
  
 return 0;
}