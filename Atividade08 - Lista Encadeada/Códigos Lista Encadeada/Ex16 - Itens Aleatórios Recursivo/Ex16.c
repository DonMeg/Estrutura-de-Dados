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

Lista rnd(int n, int m){ 
   if(n <= 0){
      return NULL;  
   }else{
      Lista L = rnd(n - 1, m);
      return no(rand()%m, L);
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

int main(void){
   int n = 0;
   int m = 0; 
   srand(time(NULL));
   printf("Lista Aleatoria\n");
   printf("Digite o Numero de Itens na Lista: \n");
   scanf("%i", &n);
   printf("Digite o Intervalo Maximo entre os Numeros: \n");
   scanf("%i", &m);
   Lista A = rnd(n,m);
   exibe(A);
   system("PAUSE");
   return 0;
}
