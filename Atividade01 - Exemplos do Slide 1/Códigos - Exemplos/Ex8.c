/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void barras(int v[], int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<v[i]; j++)
        putchar(220);
        putchar('\n');
    }
}

int main(void) {
    int a[4] = {3,4,2,1};
    int b[3] = {9,4,7};
    barras(a,4);
    getchar();
    barras(b,3);
    return 0;
}
