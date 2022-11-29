#include<stdio.h>
#include<math.h>

int main (){
int mes,dia;
while((scanf("%d %d",&mes,&dia))!=EOF){
	if(mes==12 && dia>25) printf("Ja passou!\n");
	else if(mes==12 && dia ==25) printf("E natal!\n");
	else if(mes==12 && dia == 24) printf("E vespera de natal!\n");
	else if(mes==11) printf("Faltam %i dias para o natal!\n",(30+(25-dia)));
    else if(mes==10) printf("Faltam %i dias para o natal!\n",(61+(25-dia)));
    else if(mes==9) printf("Faltam %i dias para o natal!\n",(91+(25-dia)));
    else if(mes==8) printf("Faltam %i dias para o natal!\n",(122+(25-dia)));
    else if(mes==7) printf("Faltam %i dias para o natal!\n",(153+(25-dia)));
    else if(mes==6) printf("Faltam %i dias para o natal!\n",(183+(25-dia)));
    else if(mes==5) printf("Faltam %i dias para o natal!\n",(214+(25-dia)));
    else if(mes==4) printf("Faltam %i dias para o natal!\n",(244+(25-dia)));
    else if(mes==3) printf("Faltam %i dias para o natal!\n",(275+(25-dia)));
    else if(mes==2) printf("Faltam %i dias para o natal!\n",(304+(25-dia)));
    else if(mes==1) printf("Faltam %i dias para o natal!\n",(335+(25-dia)));
    else if(mes==12)printf("Faltam %i dias para o natal!\n",25-dia);
}

return 0;
}