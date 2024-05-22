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

int sum(Lista L) {
   if(L == NULL){
      return 0;  
   }else{   
      return L->item + sum(L -> prox);   
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
   printf("Soma = %d\n", sum(A));
   system("PAUSE");
   return 0;
}
