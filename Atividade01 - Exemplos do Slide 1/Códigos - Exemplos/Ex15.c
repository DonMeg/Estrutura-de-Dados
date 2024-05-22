/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

    typedef struct no *Ptr;
    struct no { int item; Ptr prox; };
    Ptr no(int x, Ptr p) {
    Ptr n = malloc(sizeof(struct no));
    n->item = x;
    n->prox = p;
    return n;
}

int main(void) {
    Ptr p = no(3,no(1,no(5,NULL)));
    while( p != NULL ) {
    printf("%d\n",p->item);
    p = p->prox;
    }
    return 0;
}