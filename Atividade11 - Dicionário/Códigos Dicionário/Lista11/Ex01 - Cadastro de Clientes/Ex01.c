#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int Chave;
typedef char Valor[22];
typedef struct map {
   Chave chave;
   Valor valor;
   struct map *prox;
} *Map;

Map no_map(Chave c, Valor v, Map p) {
   Map n = malloc(sizeof(struct map));
   n->chave = c;
   strcpy(n->valor,v);
   n->prox = p;
   return n;
}

typedef struct dic {
   int tam;
   Map *vet;
} *Dic;

Dic dic(int m) {
   int i = 0; 
   Dic d = malloc(sizeof(struct dic));
   d->tam = m;
   d->vet = malloc(m*sizeof(Map));
   for(i=0; i<m; i++) d->vet[i] = NULL;
   return d;
}

int hash(int c, int m) {
   return (c % m);
}

void insm(Chave c, Valor v, Map *M) {
   while( *M && c>(*M)->chave ) 
      M = &(*M)->prox;
   if( *M && c==(*M)->chave )
      strcpy((*M)->valor,v);
   else *M = no_map(c,v,*M);
}

void insd(Chave c, Valor v, Dic d) {
   insm(c, v, &d->vet[hash(c,d->tam)]);
}

void exibem(Map M) {
   printf("[");
   while( M ) {
      printf("(%d,%s)",M->chave,M->valor);
      if( M->prox ) printf(",");
      M = M->prox;
   }
   printf("]\n");
}

void exibed(Dic d) {
   int i = 0;  
   for(i=0; i<d->tam; i++) {
      printf("%d: ", i);
      exibem(d->vet[i]);
   }
}

int main(void) {
   Dic D = dic(5);
   insd(59, "Bia", D);
   insd(48, "Eva", D);
   insd(25, "Ivo", D);
   insd(17, "Ana", D);
   insd(83, "Leo", D);
   exibed(D);
   system("PAUSE");
   return 0;
}
