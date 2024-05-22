 #include <stdio.h>
 #include "pilha.h" // pilha de char *

int main(void) {
	
	Pilha P = pilha(5);
 	char s[11];
 	int i=0;
 	
	for(i=1; i<=3; i++) {
	   printf("Digite um numero: ");
	   gets(s);
	   empilha(s,P);
	}
	
	while( !vaziap(P) ) puts(desempilha(P));
	 	
		return 0;
 }


