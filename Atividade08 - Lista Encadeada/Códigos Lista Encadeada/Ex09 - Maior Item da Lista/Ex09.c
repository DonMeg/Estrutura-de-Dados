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

int tamanho(Lista L) {
   int t = 0;
   while( L ) {
      t++;
      L = L->prox;
   }
   return t; 
}

int maximo(Lista L){
    int aux = L -> item;
    while(L -> prox != NULL){
        L = L -> prox;
        if(L -> item > aux){
             aux = L -> item;
        }  
    }
    return aux;
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
   printf("Tamanho = %d\n",tamanho(A));
   printf("Maior Item da Lista = %d\n", maximo(A));
   system("PAUSE");
   return 0;
}
