#include<stdio.h>
#include<math.h>

int main (){
double a,b;
scanf("%lf %lf",&a,&b);
printf("%.2lf%%\n",(100*(b+0.0)/a)-100);
return 0;
}