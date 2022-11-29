#include<stdio.h>
#include<math.h>

int main (){
int a,b,resultAbsoluto,resultAbsolutoholder,resto;
scanf("%d %d",&a,&b);

if(a>0 && b>0)resultAbsoluto=floor((a+0.0)/b);
else if(a<0 && b<0)resultAbsoluto=ceil((a+0.0)/b);
else if(a>0 && b<0)resultAbsoluto=ceil((a+0.0)/b);
else if(a<0 && b>0)resultAbsoluto=floor((a+0.0)/b);
resto=abs(a - (b*resultAbsoluto));
 printf("%i %i\n",resultAbsoluto,resto);
return 0;
}