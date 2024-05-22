#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char Chave[22];
typedef char Valor[22];
typedef struct map {
   Chave chave;
   Valor valor;
   struct map *prox;
} *Map;

Map no_map(Chave c, Valor v, Map p) {
   Map n = malloc(sizeof(struct map));
   strcpy(n->chave,c);
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

unsigned hash(char *c, int m) {
   unsigned s = 0;
   int i = 0;
   for(i=0; c[i]; i++)
      s += (i+1)*c[i];
   return (s % m);
}

void insm(Chave c, Valor v, Map *M) {
   while( *M && c>(*M)->chave ) 
      M = &(*M)->prox;
   if( *M && c==(*M)->chave )
      strcpy((*M)->valor,v);
   else *M = no_map(c,v,*M);
}

void insd(Chave c, Valor v, Dic d) {
   insm(c, v, &d->vet[hash(c, d->tam)]);
}

void exibem(Map M) {
   printf("[");
   while( M ) {
      printf("(%s,%s)",M->chave,M->valor);
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
   Dic D = dic(3);
   insd("bat", "morcego", D);
   insd("pig", "porco", D);
   insd("cat", "gato", D);
   insd("dog", "cachorro", D);
   insd("cow", "vaca", D);
   exibed(D);
   system("PAUSE");
   return 0;
}
