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

Lista inversa(Lista A) {
   Lista B = NULL;
   while(A != NULL) {
      B = no(A -> item, B);
      A = A -> prox;
   }
   return B;
}

int tamanho(Lista L) {
   int t = 0;
   while( L ) {
      t++;
      L = L->prox;
   }
   return t; 
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
   int n;
   srand(time(NULL));
   Lista A = aleatoria(10,100);
   exibe(A);
   printf("Tamanho = %d\n", tamanho(A));
   Lista B = inversa(A);
   printf("\nLista Inversa:\n");
   exibe(B);
   system("PAUSE");
   return 0;
}
