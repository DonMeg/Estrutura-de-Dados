/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
    int main(void) {
    srand(time(NULL));
    int c, n = rand()%7 + 1;
    do {
    printf("Chute entre 1 e 7: ");
    scanf("%d",&c);
    if( c<n ) puts("Baixo!");
    else if( c>n ) puts("Alto!");
    } while( n!=c );
    puts("Acertou!");
    return 0;
}