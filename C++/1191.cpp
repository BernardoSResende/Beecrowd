#include<stdlib.h>
#include<stdio.h>
#include <string.h>

int posicao = 0;	
typedef char tp_item;	
	
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

tp_no *aloca_no(char a) //aloca e retorna o endereÃ§o
{
	tp_no *no;
	no=(tp_no*)malloc(sizeof(tp_no));
	no->info= a;
	no->esq=NULL;
	no->dir=NULL;
	return no;
}

/*int insere_no(char infixo[], char prefixo[], int ini, int fim){
	tp_no *pai=NULL, *novo, *p;  //*p=ponteiro auxiliar
	novo=aloca_no();//cria um novo elemento e coloca o endereÃ§o dele no novo
	if(!novo) return 0; //nÃ£o deu para alocar (novo==null)

	
		
	
	

	return 1;	
}*/

void pre_ordem(tp_no *p) //imprime os elementos em pre-ordem
{
	if(p!=NULL)
	{	printf("\n%d\n",p->info);
		pre_ordem(p->esq);
		pre_ordem(p->dir);
	}
}	
void em_ordem (tp_no *p) {  //imprime os elementos em ordem
  if (p != NULL) {
	em_ordem (p->esq);
	printf("\n%d\n",p->info);
	em_ordem (p->dir);
    }
}

void pos_ordem (tp_no *p) { //imprime os elementos em pÃ³s-ordem 
	 if (p != NULL) {
	 pos_ordem (p->esq);
	 pos_ordem (p->dir);
	printf("%c",p->info);
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

	int encontra_pos(int pos_ini, int pos_fim, char *string, char a){
		int i = pos_ini;
		
		while(i<=pos_fim){
			if(string[i] == a)
			return i;
			i++;
		}
		return -9999;
	}
	
	tp_no *constroi_arv(int pos_ini, int pos_fim, char *pref, char *inf){
	    int posAtual;
	    if(pos_ini>pos_fim) return NULL;
	 
	    tp_no *no= aloca_no(pref[posicao]);
	    posicao++;
	    if(pos_ini==pos_fim) return no;
	  
	    posAtual = encontra_pos(pos_ini,  pos_fim, inf, no->info);
	    no->esq = constroi_arv(pos_ini, posAtual-1, pref, inf);
	    no->dir = constroi_arv(posAtual+1, pos_fim, pref, inf);
	    return no;
	}


int main(){
	char pref[30], inf[30];

	int tam;
	while(scanf(" %s %s", pref,inf) != EOF){
	
		tam = strlen(inf) - 1;
		
		tp_arvore Arvore = constroi_arv(posicao,tam,pref,inf);
	
		pos_ordem(Arvore);
		printf("\n");
	
		posicao = 0;
		destroi_arvore (&Arvore);
	}
	return 0;
}