#include <stdio.h>
#include <stdlib.h>

typedef int Item;
typedef struct no{
   Item item;
   struct no *prox;
} *Lista;

Lista no(Item x, Lista p) {
   Lista n = malloc(sizeof(struct no));
   n->item = x;
   n->prox = p;
   return n;
}

void ins(Item x, Lista *L) {
   while( *L != NULL && (*L)->item < x ) 
      L = &(*L)->prox;
   *L = no(x,*L);
}

int osd(Lista L) {
    if (L == NULL || L->prox == NULL) {
        return 1;
    }
    if (L->item < L->prox->item) {
        return 0;
    }
    return osd(L->prox);
}

int main(void) {
    
   Lista I = NULL;
   
   ins(1,&I); 
   ins(2,&I); 
   ins(3,&I); 
   ins(4,&I);
   
   printf("%d\n", osd(I));
   
   return 0;
   
}
