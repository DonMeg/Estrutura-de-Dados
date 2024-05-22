#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha.h"

void ordenarPilha(Pilha A, Pilha B) {
    while (!vaziap(A)) {
        int aux = desempilha(A);
        while (!vaziap(B) && topo(B) < aux) {
        	
            empilha(desempilha(B), A);
        }
        if(vaziap(B) || topo(B) != aux)
        	empilha(aux, B);
    }
    while (!vaziap(B)) {
        empilha(desempilha(B), A);
    }
}

int main(void) {
    int n = 0;
    int i = 0;
    
    printf("Digite a quantidade de numeros a serem ordenados: ");
    scanf("%d", &n);

    Pilha A = pilha(n);
    Pilha B = pilha(n); 

    for (i = 0; i < n; i++) {
        int num;
        printf("Digite o %do numero: ", i + 1);
        scanf("%d", &num);
        empilha(num, A);
    }

    ordenarPilha(A, B);

    printf("Numeros ordenados de forma crescente:\n");
    while (!vaziap(A)) {
        printf("%d\n", desempilha(A));
    }
    return 0;
}
