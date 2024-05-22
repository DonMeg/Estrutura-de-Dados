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

/* int pert(Item x, Lista L){
    while (L != NULL && L -> item < x)
        L = L -> prox;
    return (L != NULL && L -> item == x);
} */

int pert_rec(Item x, Lista L) {
    if (L == NULL) {
        return 0;
    }
    if (L->item == x) {
        return 1;
    }
    if (L->item < x) {
        return pert_rec(x, L->prox);
    }
    return 0;
}

int main(void) {
    
   Lista I = NULL;
   
   ins(4,&I); 
   ins(1,&I); 
   ins(3,&I); 
   ins(2,&I);
   
   printf("%d\n", pert_rec(5,I));
   printf("%d\n", pert_rec(3,I));
   
   return 0;
   
}
