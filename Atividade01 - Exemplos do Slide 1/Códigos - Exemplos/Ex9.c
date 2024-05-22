/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
    int main(void) {
    char s[256];
    printf("Senha? ");
    gets(s);
    if( strcmp(s,"abracadabra")==0 ) puts("Ok!");
    else puts("Senha invalida!");
    return 0;
}
