/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main(void) {
    int n;
    printf("Numero? ");
    scanf("%d",&n);
    int s=0;
    while( n>0 ) {
    s += n%10;
    n /= 10;
    }
    printf("Soma dos digitos = %d\n",s);
    return 0;
}

