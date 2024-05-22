#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int Chave;
typedef int Valor;

typedef struct map {
    Chave chave;
    Valor valor;
    struct map *prox;
} *Map;

Map no_map(Chave c, Valor v, Map p) {
    Map n = malloc(sizeof(struct map));
    n->chave = c;
    n->valor = v;
    n->prox = p;
    return n;
}

void insmr(Chave c, Valor v, Map *M) {
    if (*M == NULL || c < (*M)->chave) {
        *M = no_map(c, v, *M);
    } else if (c == (*M)->chave) {
        (*M)->valor = v;
    } else {
        insmr(c, v, &(*M)->prox);
    }
}

int pertmr(Chave c, Valor *v, Map M) {
    if (M == NULL) {
        return 0; 
    }
    if (c == M->chave) {
        *v = M->valor;
        return 1;  
    }
    if (c < M->chave) {
        return 0;
    }
    return pertmr(c, v, M->prox);
}

void exibem(Map M) {
    printf("[");
    while (M) {
        printf("(%d,%d)", M->chave, M->valor);
        if (M->prox) printf(",");
        M = M->prox;
    }
    printf("]\n");
}

void destroim(Map *M) {
    Map temp;
    while (*M != NULL) {
        temp = *M;
        *M = (*M)->prox;
        free(temp);
    }
}

int main(void) {
    Valor w;
    Map I = NULL;
    
    insmr(36, 100, &I); 
    insmr(15, 200, &I); 
    insmr(42, 300, &I);    
    exibem(I);
   
    if (pertmr(42, &w, I))
        printf("Valor da chave 42: %d\n", w);
    else
        puts("Chave 42 inexistente!");
   
    if (pertmr(10, &w, I))
        printf("Valor: %d\n", w);
    else 
        puts("Chave 10 inexistente!");
   
    printf("\nLista Destruida:");
    destroim(&I);
 
    exibem(I);

    return 0;
}
