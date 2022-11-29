#include <stdio.h>
#include <math.h>

int main(){
    double a,b,porcent = 1.0;
    scanf(" %lf %lf",&a,&b);
    if(a<0) a=((a+100.0)/(100+0.0));
    else a = (((a+0.0)/100) + 1.0);
 // printf("%lf\n",a);
    if(b<0) b=((b+100.0)/100.0);
    else b = (((b+0.0)/100.0) + 1.0);
 // printf("%lf\n",b);
    porcent = porcent*a*b;
  porcent--;
  porcent =porcent*100;
    printf("%.6lf\n",porcent);
    return 0;
}