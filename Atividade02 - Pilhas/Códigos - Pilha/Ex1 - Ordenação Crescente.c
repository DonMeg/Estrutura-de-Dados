#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha.h"  // Inclui o arquivo de cabeçalho da biblioteca de pilhas

// Função para ordenar a pilha A utilizando a pilha B como auxiliar
void ordenarPilha(Pilha A, Pilha B) {
    // Enquanto a pilha A não estiver vazia
    while (!vaziap(A)) {
        // Desempilha o topo da pilha A e armazena em aux
        int aux = desempilha(A);

        // Enquanto a pilha B não estiver vazia e o topo da pilha B for maior que aux
        while (!vaziap(B) && topo(B) > aux) {
            // Move o elemento do topo da pilha B de volta para a pilha A
            empilha(desempilha(B), A);
        }

        // Empilha o valor de aux na pilha B
        empilha(aux, B);
    }

    // Move todos os elementos de volta da pilha B para a pilha A
    while (!vaziap(B)) {
        empilha(desempilha(B), A);
    }
}

int main(void) {
    int n = 0;  // Número de elementos a serem ordenados
    int i = 0;  // Variável de controle para loops

    // Solicita ao usuário a quantidade de números a serem ordenados
    printf("Digite a quantidade de numeros a serem ordenados: ");
    scanf("%d", &n);

    // Cria duas pilhas com capacidade n
    Pilha A = pilha(n);
    Pilha B = pilha(n); 

    // Solicita ao usuário que insira os números na pilha A
    for (i = 0; i < n; i++) {
        int num;
        printf("Digite o %do numero: ", i + 1);
        scanf("%d", &num);
        empilha(num, A);
    }

    // Ordena a pilha A utilizando a pilha B
    ordenarPilha(A, B);

    // Imprime os números ordenados (em ordem crescente)
    printf("Numeros ordenados de forma crescente:\n");
    while (!vaziap(A)) {
        printf("%d\n", desempilha(A));
    }

    return 0;  // Retorna 0 para indicar que o programa terminou corretamente
}

