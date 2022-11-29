#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//FEITO POR BERNARDO SERRAVALLE RESENDE E FRANCIELLE ANDRADE CARDOSO

typedef char tp_item;	

char frase[20000] = "",fraseAux[1];
	
typedef struct tp_no{
	struct tp_no *esq;
	tp_item info;
	struct tp_no *dir;
} tp_no; 

typedef tp_no * tp_arvore;

tp_arvore inicializa_arvore()
{
 return NULL;
}


int arvore_vazia(tp_arvore raiz)
{
	if(raiz==NULL) return 1;
	else return 0;
}

tp_no *aloca_no() //aloca e retorna o endereÃ§o
{
	tp_no *no;
	no=(tp_no*)malloc(sizeof(tp_no));
	return no;
}

int insere_no(tp_arvore *raiz, tp_item e)
{	tp_no *pai=NULL, *novo, *p;  //*p=ponteiro auxiliar
	novo=aloca_no();//cria um novo elemento e coloca o endereÃ§o dele no novo
	if(!novo) return 0; //nÃ£o deu para alocar (novo==null)

	novo->info=e;
	novo->esq=NULL;
	novo->dir=NULL;
		
	p = *raiz;
	while(p!=NULL) 
	{//busca a posiÃ§Ã£o onde serÃ¡ inserido o novo nÃ³
		pai=p;
		if( e < p->info)
			p=p->esq;
		else
			p=p->dir;
	}	
	
	if(pai!=NULL) //Qual ponteiro do pai (esq ou dir) irÃ¡ apontar para o novo nÃ³
	{	
		if ( e < pai->info)
		   pai->esq=novo;
		else 
		   pai->dir=novo;
	}
	else 
		*raiz=novo;

	return 1;	
}

void pre_ordem(tp_no *p) //imprime os elementos em pre-ordem
{
	if(p!=NULL)
	{	
		fraseAux[0] = p->info;
		strcat(frase, fraseAux);
		pre_ordem(p->esq);
		pre_ordem(p->dir);
	}
}	
void em_ordem (tp_no *p) {  //imprime os elementos em ordem
  if (p != NULL) {
	em_ordem (p->esq);
	fraseAux[0] = p->info;
	strcat(frase, fraseAux);
	em_ordem (p->dir);
	
    }
}

void pos_ordem (tp_no *p) { //imprime os elementos em pÃ³s-ordem 
	 if (p != NULL) {
	 pos_ordem (p->esq);
	 pos_ordem (p->dir);
	 fraseAux[0] = p->info;
	 strcat(frase, fraseAux);
}
}


tp_no* busca_no (tp_no *p, tp_item e) {
	while (p != NULL) { 
		if (e < p->info) 
			p = p->esq; 
		else 
			if (e > p->info) 
				p = p->dir; 
			else 
				return (p);
	};
 	return (NULL); 
}
tp_arvore busca_no_rec (tp_arvore p, tp_item e) {
	if (p != NULL) { 
		if (e < p->info) 
			return busca_no_rec(p->esq, e); 
		else 
			if (e > p->info) 
				return busca_no_rec(p->dir, e); 
			else 
				return (p);
	}
	else
 		return (NULL); 
}

int altura_arvore(tp_arvore raiz){
	if(raiz == NULL) return 0;
	int alt_esq = altura_arvore(raiz->esq);
	int alt_dir = altura_arvore(raiz->dir);
	if(alt_esq > alt_dir){
		return alt_esq + 1;
	}else{
		return alt_dir + 1;
	}
}



int qtde_nos(tp_arvore raiz){
	if(raiz == NULL) return 0;
	int tot_esq = qtde_nos(raiz->esq);
	int tot_dir = qtde_nos(raiz->dir);
	return (tot_esq + tot_dir + 1);
}


int remove_no (tp_arvore *raiz, tp_item e ) {
	tp_no  *p=*raiz,   *ant=NULL,   *sub,   *pai,   *filho;
	while (p!=NULL && p->info!=e) {
		ant=p;
		if (e < p->info)
			p = p->esq;
		else
			p = p->dir;
	}
	if (p==NULL) /* nÃ£o encontrou */
		return  0;
	/* nÃ³ tem no mÃ¡ximo um filho */
	if (p->esq==NULL)
		sub=p->dir;
	else
		if (p->dir==NULL)
			sub=p->esq;
		else {
		/* nÃ³ tem dois filhos */
			pai=p; sub=p->dir; filho=sub->esq;
			while (filho!=NULL) {
				pai=sub;  sub=filho;  filho=sub->esq;
			}
/* neste ponto, sub Ã© o sucessor em ordem de p */
			if (pai!=p) {
				/*p nÃ£o Ã© o pai de sub e sub==pai->esq */
				pai->esq=sub->dir;
				/* remove o nÃ³ apontado por sub de sua atual 
				 posiÃ§Ã£o e substitui pelo filho direito de rp */
				/* sub ocupa o lugar de p */
				sub->dir=p->dir;
			}
		/*define filho esq de sub para que sub ocupe o lugar de p */
			sub->esq=p->esq;
		}
		/* insere sub na posiÃ§Ã£o ocupada por p */
		if (ant==NULL)
			*raiz=sub; /* p era raiz */
		else
			if (p==ant->esq)
				ant->esq=sub;
			else
				ant->dir=sub;
		free(p);
	return 1;
}


void destroi_no(tp_no *no){
   if(no==NULL) return;
   destroi_no(no->esq);
   destroi_no(no->dir);
 //  printf("\n %d ", no->info);
   free(no);
   no = NULL;
   return;
}

void destroi_arvore(tp_arvore *raiz){
   if(*raiz==NULL) return;
   destroi_no(*raiz);
  // free(*raiz);
   *raiz=NULL;
}







int main(){
	
	char comando[10], letra;
	int tamanho,i;
	tp_arvore arvore = inicializa_arvore();
	
	while(scanf(" %s", comando) != EOF){
		if(!strcmp(comando,"I")){
			scanf(" %c", &letra);
			insere_no(&arvore, letra);
		}
		else if(!strcmp(comando,"INFIXA")){
			strcpy(frase,"");
			em_ordem(arvore);
			for(i = 0; i<strlen(frase);i++){
				printf("%c", frase[i]);
				if(i< (strlen(frase) - 1)) printf(" ");
			}
			printf("\n");
		}
		else if(!strcmp(comando,"PREFIXA")){
			strcpy(frase,"");
			pre_ordem(arvore);
			for(i = 0; i<strlen(frase);i++){
				printf("%c", frase[i]);
				if(i< (strlen(frase) - 1)) printf(" ");
			}
			printf("\n");
		}
		else if(!strcmp(comando,"POSFIXA")){
			strcpy(frase,"");
			pos_ordem(arvore);
			for(i = 0; i<strlen(frase);i++){
				printf("%c", frase[i]);
				if(i< (strlen(frase) - 1)) printf(" ");
			}
			printf("\n");
		}
		if(!strcmp(comando,"P")){
			scanf(" %c", &letra);
			if (busca_no_rec (arvore,letra) == NULL) printf("%c nao existe\n", letra);
			else printf("%c existe\n",letra);
		}
	}
	destroi_arvore(&arvore);
	return 0;
}