#include <stdio.h>
#include <stdlib.h>

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

Lista intervalo(int n) {
   int i;
   Lista L = NULL;
   for(i = n; i > 0; i--){
       L = no(i, L);   
   }
   return L;
}

void exibe(Lista L) {
   printf("\n[");
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
   int n = 0;
   printf("Intervalo de 1 ate N");
   printf("\nDigite o valor de N: ");
   scanf("%i", &n);
   Lista A = intervalo(n);
   exibe(A);
   system("PAUSE");
   return 0;
}

