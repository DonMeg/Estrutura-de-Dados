/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void troca(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
}

int main(void) {
    int x = 5, y = 10;
    troca(&x, &y);
    printf("x = %d, y = %d\n", x, y);
    return 0;
}