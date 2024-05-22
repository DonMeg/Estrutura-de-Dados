#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "pilha.h"

char *posfixa (char *e){
     static char s[256];
     int j = 0;
     
     Pilha P = pilha(256);
     
     for (int i = 0; e[i]; i++)
         if(isdigit(e[i])) s[j++] = e[i];
         else if(strchr("+*-/", e[i])) empilha(e[i],P);
         else if(e[i] == ')') s[j++] = desempilha(P);
         
     s[j] = '\0';
     
     destroip(&P);
     
     return s;
}

int main(void)
{
	char e[513];
	
	printf("Qual a expressao infixa: ");
	gets(e);
	
	printf("\nA expressao posfixa eh: %s\n", posfixa(e));
	
	system("PAUSE");	
	return 0;
}

