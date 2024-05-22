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

Lista replace(int x, int y, Lista L){
      if(L == NULL){
           return NULL;     
      }
      
      if (L -> item == x){
         L -> item = y;
      }
      
      replace(x, y, L -> prox);
      return L;
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
   int n, m; 
   Lista A = no(3,no(3,no(5,NULL)));
   exibe(A);
   printf("\nDigite o Numero que sera Substituido: ");
   scanf("%i", &n);
   printf("Digite o Numero que ira Substituir: ");
   scanf("%i", &m);
   replace(n, m, A);
   printf("Nova Lista:\n");
   exibe(A);
   system("PAUSE");
   return 0;
}
