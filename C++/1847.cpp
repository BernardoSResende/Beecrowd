#include<stdio.h>
#include<math.h>

int main (){
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
 if(a<b){
 	if(b>=c)printf(":(\n");
 	else{
 		if((c-b)<(b-a)) printf(":(\n");
 		else printf(":)\n");
	 }
 }
 else if(a>b){
 	if(b<=c) printf(":)\n");
 	else if(abs(c-b)<abs(b-a)) printf(":)\n");
 	else printf(":(\n");
 	
 }
 else if (c>b) printf(":)\n");
 else printf(":(\n");
return 0;
}