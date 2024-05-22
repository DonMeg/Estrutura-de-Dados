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
#define TIMESLICE 3

int main(void){
    Fila F = fila(5);
    enfileira(17,F);
    enfileira(25,F);
    enfileira(39,F);
    enfileira(46,F);
    
    while(!vaziaf(F)){
        int x = desenfileira(F);
        int p = x/10;
        int t = x%10;
        
        if(t>3) enfileira(p*10+(t-TIMESLICE), F);
        else printf("Processo %d concluido\n", p);
    }
    destroif(&F);
    return 0;
}