#include <stdio.h>
#include <stdlib.h>

typedef int Item;
typedef struct no {
   Item item;
   struct no *prox;
} *Lista;

Lista no (Item x, Lista p) {
   Lista n = malloc(sizeof(struct no));
   n->item = x;
   n->prox = p;
   return n;
}

void ins_rsr(Item x, Lista *L) {
    if(*L == NULL || (*L)->item > x){
       *L = no(x,*L);
   }
   
   if((*L)->item == x){
       return;
   }
    ins_rsr(x, &(*L)->prox);
}

void exibe_ri (Lista L){
    if(L == NULL){
        return;
    }
    
    exibe_ri(L -> prox);
    printf("%d\n", L -> item);
}

int main()
{
   Lista I = NULL;
   ins_rsr(1,&I);
   ins_rsr(4,&I);
   ins_rsr(3,&I);
   ins_rsr(1,&I);
   ins_rsr(2,&I);
   ins_rsr(2,&I);
   ins_rsr(8,&I);
   ins_rsr(-4,&I);
   ins_rsr(0,&I);
   ins_rsr(4,&I);
   exibe_ri(I);
   return 0;

    return 0;
}
