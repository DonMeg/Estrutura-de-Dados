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

Lista intervalo(int p, int u) {
   int i;
   Lista L = NULL;
   if(p <= u){
       for(i = p; i <= u; i++){
          L = no(i, L);   
       }
   }else{
       printf("\nLista Vazia!");        
   }
   return L;
}

Lista inversa(Lista A) {
   Lista B = NULL;
   while(A != NULL) {
      B = no(A -> item, B);
      A = A -> prox;
   }
   return B;
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
   int p = 0;
   int u = 0;
   printf("Intervalo de P ate U");
   printf("\nDigite o valor de P: ");
   scanf("%i", &p);
   printf("Digite o valor de U: ");
   scanf("%i", &u);
   Lista A = intervalo(p, u);
   Lista B = inversa(A);
   exibe(B);
   system("PAUSE");
   return 0;
}
