#include<stdio.h>
#include<math.h>

int main (){
unsigned long long int a,b,aFat=1,bFat=1;
while((scanf("%llu %llu",&a,&b))!= EOF){
	while(a!=1){
		if(a==0) {
		aFat=1;
		break;
	}
		else{
		aFat=aFat*a;
		a--;
	    }
	}
	while(b!=1){
		if(b==0){
		bFat=1;
		break;
	}
	    else{
		bFat=bFat*b;
		b--;
	    }
}
	printf("%llu\n",aFat+bFat);
	aFat=1;
	bFat=1;
}

return 0;
}
