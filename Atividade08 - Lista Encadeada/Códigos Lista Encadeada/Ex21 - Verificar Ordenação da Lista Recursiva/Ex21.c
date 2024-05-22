#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef int Item;
typedef struct no {
   Item item;
   struct no *prox;
} *Lista;

Lista no(Item x, Lista p) {
   Lista n = malloc(sizeof(struct no));
   n->item = x;
   n->prox = p;
   return n;
}

int sorted(Lista L){
    if(L -> prox == NULL){
         return printf("Lista Ordenada!\n");
    }
    
    if(L -> item <= L -> prox -> item){
         return sorted(L -> prox);
    }else{
          return printf("Lista Nao Ordenada!\n");
    }
}

int minimum(Lista L, int aux){
    if(L != NULL){
       if(L -> item < aux){
            aux = L -> item;
       }
       return minimum(L -> prox, aux);   
    }else{
       return aux;   
    }
}

void exibe(Lista L) {
   printf("[");
   while( L != NULL ){
      printf("%d",L->item);
      L = L->prox;
      if (L != NULL){
         printf(",");
      }
   }
   printf("]\n");
}

int main(void) {
   Lista A = no(3,no(1,no(5,NULL)));
   exibe(A);
   sorted(A);
   system("PAUSE");
   return 0;
}
