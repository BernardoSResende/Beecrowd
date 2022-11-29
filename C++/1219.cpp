#include<stdio.h>
#include<math.h>

int main (){
int a,b,c;
double areaT,areac,areaC,p,r,R,girassois,violetas,rosas;
double pi=3.1415926535897;
while((scanf("%d %d %d",&a,&b,&c))!=EOF){
	p=(a+b+c+0.0)/2;
	areaT=sqrt(p*(p-a)*(p-b)*(p-c));
	r=areaT/p;
	areac= pi*r*r;
	R=a*b*c/(4*areaT);
	areaC=pi*R*R;
	girassois=areaC-areaT;
	violetas=areaT-areac;
	rosas=areac;
	printf("%.4lf %.4lf %.4lf\n",girassois,violetas,rosas);
	
}

return 0;
}