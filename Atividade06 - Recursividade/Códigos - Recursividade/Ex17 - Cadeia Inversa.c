#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void inv(char s[], int p, int u){
	if (p < u){
		char x = s[p];
		s[p] = s[u];
		s[u] = x;	
		
		inv(s, p+1, u-1);
	}
}


int main(int argc, char *argv[]) {
	char s[256];
	int p, u;
	
	printf("Digite o Texto: ");
	fgets(s, sizeof(s), stdin);
	
	u = strlen(s) - 1;
	p = 0;
	
	inv(s, p, u);
	printf("\nTexto Invertido: %s\n", s);
	
	return 0;
	system ("PAUSE");
}

