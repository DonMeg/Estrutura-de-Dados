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

int main(void){
    Fila F = fila(5);
    for(int i = 0; i<=3; i++)
        enfileira('A' + i, F);
    
    while(!vaziaf(F))
        printf("%c\n", desenfileira(F));
        
    destroif(&F);
    
    return 0;
}