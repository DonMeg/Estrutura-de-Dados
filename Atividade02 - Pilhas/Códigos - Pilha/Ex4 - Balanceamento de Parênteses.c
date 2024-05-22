#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha.h"

int main(int argc, char *argv[]) {
    printf("Balanceamento de Parenteses\n\n");
    int i;
    int balanceada = 1;
    char c[513];
    Pilha P = pilha(513);

    printf("Qual eh a Expressao: ");
    fgets(c, sizeof(c), stdin);

    for (i = 0; c[i]; i++) {
        if(c[i] == '{' || c[i] == '[' || c[i] == '('){
            empilha(c[i], P);
        } else if(c[i] == '}' || c[i] == ']' || c[i] == ')') {
            char topo = desempilha(P);
            if((c[i] == '}' && topo != '{') ||
               (c[i] == ']' && topo != '[') ||
               (c[i] == ')' && topo != '(')) {
                destroip(&P);
                balanceada = 0;
                break;
            }
        }
    }

    // Verificar se a pilha está vazia
    if (balanceada == 1 && vaziap(P)) {
        printf("A expressao esta balanceada\n\n");
    } else {
        printf("A expressao nao esta balanceada\n\n");
    }

    destroip(&P);

    return 0;
}

