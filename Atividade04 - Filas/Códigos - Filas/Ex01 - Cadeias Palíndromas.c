/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <ctype.h>
#include "pilha.h"
#include "fila.h"

int main(void)
{
    char s[256];
    char w[256];
    Fila F = fila(256);
    Pilha P = pilha(256);
    
    printf("Qual a frase: ");
    gets(s);
    
    for (int i = 0; s[i]; i++)
        if (isalpha(s[i])){
            w[i] = toupper(s[i]);
            enfileira(w[i], F);
            empilha(w[i], P);
        }
    while (!vaziaf(F) && desenfileira(F) == desempilha(P));
    
    if(vaziaf(F)) puts ("\nA frase eh um palindromo!\n");
    else puts ("\nA frase nao eh um palindromo!\n");
    
    destroif(&F);
    destroip(&P);
    return 0;
}

