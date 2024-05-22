#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "pilha.h"

int prio(char o){
    switch(o){
        case '(': return 0;
        case '|': return 1;
        case '&': return 2;
        case '!': return 3;
    }
    return -1;
}

int valor(char *e){
    int i = 0;
    Pilha P = pilha(256);
    for(i = 0; e[i]; i++){
        if(isalpha(e[i])) empilha(e[i] == 'V' ,P);
        else if(strchr("!&|", e[i])){
            int y;
            int x;
            
            if (e[i] == '!'){
                 x = desempilha(P);
                 empilha(!x, P);
            }else{
                  y = desempilha(P);
                  x = desempilha(P);
                  
                  switch (e[i]){
                         case '|': empilha(x || y, P); break;
                         case '&': empilha(x && y, P); break;
                  }
            }
        }
    }
    int z = desempilha(P);
    destroip(&P);
    return z;
}

char *posfixa(char *e){
    static char s[256];
    int j = 0;
    int i = 0;
    
    Pilha P = pilha(256);
    for(i=0; e[i]; i++)
        if (e[i]=='(') empilha ('(', P);
            else if (isalpha (e[i])) s[j++] = e[i];
            else if (strchr ("|&!", e[i])){
                while(!vaziap(P) && prio(topo(P)) >= prio(e[i]))
                    s[j++] = desempilha(P);
                empilha(e[i], P);
            }
            else if (e[i] == ')'){
                while (topo(P) != '(')
                    s[j++] = desempilha(P);
                desempilha(P);
            }
            while (!vaziap(P))
                s[j++] = desempilha(P);
            s[j] = '\0';
            destroip(&P);
            return s;
            
}

int main(void)
{
  char e[513];
  printf("Qual a expressao booleana: ");
  gets(e);
  printf("\nA expressao posfixa eh: %s", posfixa(e));
  printf("\nO valor numerico da expressao eh: %d\n", valor(posfixa(e)));
  system("PAUSE");	
  return 0;
}
