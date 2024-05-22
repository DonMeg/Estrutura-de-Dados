#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int pal(char s[], int p, int u){
	
	while(p < u && isspace(s[p]))
		p++;
		
	while(p < u && isspace(s[u]))
		u--;

    if (p >= u){
        return 1;
    }

    if (toupper(s[p]) != toupper(s[u])){
        return 0;
    }

    return pal(s, p + 1, u - 1);
}

int main(int argc, char *argv[]) {
    char s[256];
    int p, u;

    printf("Digite o Texto: ");
    fgets(s, sizeof(s), stdin);
    u = strlen(s) - 2;
    p = 0;

    if (pal(s, p, u) == 1){
          printf("\nO Texto EH um Palindromo\n");
    }else{
          printf("\nO Texto NAO eh um Palindromo\n");
    }
    
    return 0;
}

