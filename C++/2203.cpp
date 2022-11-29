#include<stdio.h>
#include<math.h>
#include<string.h>

int main (){
 int xiF,yiF,xiI,yiI,vI,Rult,Rcorvos;
 double dist,distFinal;
 while((scanf("%d %d %d %d %d %d %d",&xiF,&yiF,&xiI,&yiI,&vI,&Rult,&Rcorvos))!=EOF){
 dist= sqrt(((xiF-xiI)*(xiF-xiI)) + ((yiF-yiI)*(yiF-yiI)));
 distFinal= dist + (vI*1.5);
 if((Rult+Rcorvos)>=distFinal)printf("Y\n");
 else printf("N\n");
}
  
 return 0;
}