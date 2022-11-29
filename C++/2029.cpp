#include<stdio.h>
#include<math.h>

int main (){
double diametro,volume,pi=3.14;
while((scanf("%lf",&volume))!=EOF){
	scanf("%lf",&diametro);
	printf("ALTURA = %.2lf\n",volume/(pi*(diametro/2)*(diametro/2)));
	printf("AREA = %.2lf\n",pi*(diametro/2)*diametro/2);
	

}
 return 0;
}