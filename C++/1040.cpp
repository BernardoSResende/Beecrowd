#include <stdio.h>


 
int main() {
 float n1,n2,n3,n4,media1,nf,mediaf;
 
 scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
   media1=(((n1*2)+(n2*3)+(n3*4)+n4)/10);
   printf("Media: %.1f\n",media1);
   if (media1>=7.0) printf ("Aluno aprovado.\n");
   if (media1<5.0) printf ("Aluno reprovado.\n");
   if (media1>=5.0 && media1<7.0){
   	printf("Aluno em exame.\n");
   	scanf("%f",&nf);
   	printf("Nota do exame: %.1f\n",nf);
   	if ((nf+media1)/2>=5) printf ("Aluno aprovado.\n");
   	if ((nf+media1)/2<5) printf ("Aluno reprovado.\n");
   	printf ("Media final: %.1f\n",(nf+media1)/2);
   	
   	return 0;
   	
   	
   }
 
 
 
 
 
 return 0;
 		
   
}