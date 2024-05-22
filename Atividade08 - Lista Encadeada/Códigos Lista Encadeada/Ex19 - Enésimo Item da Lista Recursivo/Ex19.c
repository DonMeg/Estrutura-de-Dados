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


int nth(int n, Lista L){
    int aux = 1;
    if(L == NULL){
       return NULL;  
    }else{
       if(n == aux){
         return L -> item; 
       }else{
         return nth(n - 1, L -> prox);    
       }  
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
   int n;
   srand(time(NULL));
   Lista A = aleatoria(10,100);
   exibe(A);
   printf("\nDigite a Posicao do Numero que Deseja Saber: ");
   scanf("%i", &n);
   printf("O %i Item da Lista eh: %i\n", n, nth(n, A));
   system("PAUSE");
   return 0;
}
