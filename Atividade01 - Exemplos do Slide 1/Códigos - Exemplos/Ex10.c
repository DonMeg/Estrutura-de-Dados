/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

typedef struct reg { // cria tipo
    char a;
    float b;
} Reg;
Reg r = {'x',2.5}; // cria variável

    typedef struct { float x; float y; } Ponto;
    int main(void) {
    Ponto p = {1.5,2.5};
    printf("(%.1f,%.1f)\n",p.x,p.y);
    return 0;
}
