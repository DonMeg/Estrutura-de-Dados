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

int equal(Lista A, Lista B){
    if(A == NULL && B == NULL){
         return printf("Listas Iguais!\n");
    }
    
    if(A == NULL || B == NULL){
         return printf("Listas Diferentes!\n");
    }
    
    if(A -> item != B -> item){
         return printf("Listas Diferentes!\n");
    }
    
    return equal(A -> prox, B -> prox);
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
   Lista B = no(3,no(1,no(5,NULL)));
   exibe(A);
   exibe(B);
   equal(A, B);
   system("PAUSE");
   return 0;
}
