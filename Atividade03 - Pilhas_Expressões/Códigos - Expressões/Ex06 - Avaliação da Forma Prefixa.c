#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "pilha.h"

int operador(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

int valpre(char *expressao) {
    Pilha conta = pilha(strlen(expressao));
    int tam = strlen(expressao);

    for (int i = tam - 1; i >= 0; i--) {
        if (isdigit(expressao[i])) {
            empilha(expressao[i] - '0', conta);
        } else if (operador(expressao[i])) {
            int aux1 = desempilha(conta);
            int aux2 = desempilha(conta);
            int result;

            switch (expressao[i]) {
                case '+':
                    result = aux1 + aux2;
                    break;
                case '-':
                    result = aux1 - aux2;
                    break;
                case '*':
                    result = aux1 * aux2;
                    break;
                case '/':
                    result = aux1 / aux2;
                    break;
            }

            empilha(result, conta);
        }
    }

    int result = desempilha(conta);
    destroip(&conta);
    return result;
}

int main() {
    char v[100];

    printf("Digite a expressao prefixada: ");
    scanf("%s", v);

    int result = valpre(v);
    printf("Resultado: %d\n", result);

    return 0;
}

