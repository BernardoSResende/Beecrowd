#include<stdio.h>
#include<math.h>

int main (){
int numcasos,anoteste,cont=0;
scanf("%d",&numcasos);
 while(cont!=numcasos){
 	scanf("%d",&anoteste);
 	if(anoteste==2015) printf("1 A.C.\n");
 	else if(anoteste<2015) printf("%i D.C.\n",2015-anoteste);
 	else printf("%i A.C.\n",anoteste-2014);
 	cont++;
 }

return 0;
}
