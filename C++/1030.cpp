#include<stdio.h>
#include<stdlib.h>

typedef int tp_item;

typedef struct tp_node_aux{
	tp_item info;
	struct tp_node_aux *prev;
	struct tp_node_aux *next;
} tp_node;

typedef struct{
	tp_node *start;
	tp_node *end;
} tp_llistd;

tp_llistd *init_list_d(){
   tp_llistd *list=(tp_llistd*) malloc(sizeof(tp_llistd));   
   list->start = NULL;   
   list->end = NULL;
   return list;
}

tp_node *allocate_list_d(){
	tp_node* pt;
	pt=(tp_node*) malloc(sizeof(tp_node));
	return pt;
}

int append_list_d (tp_llistd *list, tp_item e){
  tp_node *new_node;   
  new_node = allocate_list_d();
  if (!new_node) return 0;
  new_node->info = e;  
  if ( (list->start == NULL) && (list->end == NULL) ) { 
     new_node->next = NULL;   
     new_node->prev = NULL; 
     list->start = list->end = new_node;
     }  
  else {
     new_node->next = NULL;   
     new_node->prev = list->end; 
     list->end->next = new_node;
     list->end = new_node;
     }  
  //list->size++;   
  return 1;   
}        

void print_list_d(tp_llistd *list, int order) {
     tp_node *current_node;
     
     switch(order){
        case 1: current_node = list->start;
                while (current_node != NULL) {
                   printf("%d ", current_node->info);
                   current_node = current_node->next;           
                   }
                break;   
        case 2: current_node = list->end;
                while (current_node != NULL) {
                   printf("%d", current_node->info);
                   current_node = current_node->prev;           
                   }
                break;   
        default: printf("codigo invalido");        
     }
    printf("\n");
}

int remove_list_d (tp_llistd *list, tp_item e){   
  tp_node *current_node;
  current_node = list->start;
  while((current_node != NULL) && (current_node->info != e)){
  	current_node = current_node->next;
  }
  if (current_node == NULL) return 0;  
  if (list->start == list->end) { 
      list->start = list->end = NULL;
	}
  else {   
   if (list->start == current_node) {  
      list->start = current_node->next;
      current_node->next->prev = NULL;
    } else {
      if (list->end == current_node) { 
       list->end = current_node->prev;
       current_node->prev->next = NULL;              
       }
      else {
        current_node->next->prev = current_node->prev;   
        current_node->prev->next = current_node->next;
        } 
      }
     }   
	printf("%d\n", current_node->info);
   free(current_node);  
  //list->size--;   
  return 1;   
}


        
tp_node* search_list_d(tp_llistd *list, tp_item e){   
  tp_node *current_node;
  current_node = list->start;
  while((current_node != NULL) && (current_node->info != e)){ 
        current_node = current_node->next;}
  return current_node;
}
        
tp_llistd* destroy_list_d(tp_llistd *list){   
  tp_node *current_node;
  current_node = list->start;
  while(current_node != NULL){ 
        list->start = current_node->next;
        free(current_node);
        current_node = list->start;
		}
  free(list);
  return NULL;
}

int Remover_Lista_Posicao(tp_llistd *Lista, int posicao){   
  tp_node *Node_Atual;
  Node_Atual = Lista->start;
  posicao--;
  while((Node_Atual != NULL) && (posicao)){
  Node_Atual = Node_Atual->next;
  posicao--;
  }
  if (Node_Atual == NULL) return 0; 
  if (Lista->end == Node_Atual) { 
  Lista->end = Node_Atual->prev;
  Node_Atual->prev->next = NULL;              
  } 
  else if (Lista->start == Lista->end) { 
  Lista->start = Lista->end = NULL;
  }
  else {   
  if (Lista->start == Node_Atual) {  
  Lista->start = Node_Atual->next;
  Node_Atual->next->prev = NULL;
  } 
  else {
  Node_Atual->next->prev = Node_Atual->prev;   
  Node_Atual->prev->next = Node_Atual->next;
  } 
  }
  free ( Node_Atual );  
  return 1;   
}

int main(){
	int ContCasos=1, ContGeral, IdSoldado, NumCasos, NumPessoas, NumSalto;
	scanf(" %d", &NumCasos);
	int Final[NumCasos];
	while(ContCasos<=NumCasos){
	IdSoldado=1;
	ContGeral=1;
	tp_llistd *Lista;
	Lista = init_list_d();
	scanf(" %d %d", &NumPessoas, &NumSalto);	
	while(ContGeral<=NumPessoas){
	append_list_d(Lista, ContGeral);
	ContGeral++;
	}
	ContGeral=1;
	while(NumPessoas != 1){
	IdSoldado = IdSoldado+(NumSalto-1);
	if(IdSoldado > NumPessoas) IdSoldado = IdSoldado % NumPessoas;
	if(IdSoldado==0) IdSoldado = NumPessoas;
	Remover_Lista_Posicao(Lista, IdSoldado);
	NumPessoas--;
	}
	Final[ContCasos-1] = Lista->start->info;
	destroy_list_d(Lista);
	ContCasos++;
	}
	ContGeral=0;
	while(ContGeral < NumCasos){
		printf("Case %d: %d\n", ContGeral+1, Final[ContGeral]);
		ContGeral++;
	}
	return 0;
}