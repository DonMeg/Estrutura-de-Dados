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

int count(int x, Lista A){
    if(A == NULL){
         return 0;
    }
    
    if(x == A -> item){
         return 1 + count(x, A -> prox);
    }else{
         return count(x, A -> prox); 
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
   int aux = 0; 
   Lista A = no(3,no(3,no(5,NULL)));
   exibe(A);
   printf("\nDigite um Numero para Descobrir a Quantidade de Ocorrencias na Lista: ");
   scanf("%i", &aux);
   printf("O Numero %i Aparece %i Vezes na Lista\n", aux, count(aux, A));
   system("PAUSE");
   return 0;
}
