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

Lista aleatoria(int n, int m) {
   Lista L = NULL;
   while( n>0 ) {
      L = no(rand()%m, L);
      n--;
   }
   return L;
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
   srand(time(NULL));
   Lista A = aleatoria(10,100);
   exibe(A);
   int aux = A -> item;
   printf("Menor Item da Lista = %d\n", minimum(A, aux));
   system("PAUSE");
   return 0;
}
