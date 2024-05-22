/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
    int main(void) {
    int n, f;
    printf("Numero? ");
    scanf("%d",&n);
    f = 1;
    for(int i=2; i<=n; i++)
    f *= i;
    printf("Fatorial: %d\n",f);
    return 0;
}
