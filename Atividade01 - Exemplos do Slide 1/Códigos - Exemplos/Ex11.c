/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
    int main(void) {
    int v = 5; // variável simples
    int *p; // variável ponteiro
    p = &v;
    *p = *p + 2;
    printf("v=%d, *p=%d\n",v,*p);
    return 0;
}
