#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "pilha.h"

int prio(char o){
    switch(o){
        case '(': return 0;
        case '+': return 1;
        case '-': return 1;
        case '*': return 2;
        case '/': return 2;
    }
    return -1;
}

char *prefixa(char *e){
    static char s[256];
    int j = 0;
    int i = 0;
    
    Pilha P = pilha(256);
    for(i = strlen(e)-1; i >= 0; i--)
        if (e[i]==')') empilha (')', P);
            else if (isdigit (e[i])) s[j++] = e[i];
            else if (strchr ("+-/*", e[i])){
                while(!vaziap(P) && prio(topo(P)) >= prio(e[i]))
                    s[j++] = desempilha(P);
                empilha(e[i], P);
            }
            else if (e[i] == '('){
                while (topo(P) != ')')
                    s[j++] = desempilha(P);
                desempilha(P);
            }
            
            while (!vaziap(P))
                s[j++] = desempilha(P);
            s[j] = '\0';
            destroip(&P);
            
            _strrev(s);
            return s;
            
}

int main(void)
{
  char e[513];
  printf("Qual a expressao infixa: ");
  gets(e);
  printf("\nA expressao prefixa eh: %s\n", prefixa(e));
  system("PAUSE");	
  return 0;
}
