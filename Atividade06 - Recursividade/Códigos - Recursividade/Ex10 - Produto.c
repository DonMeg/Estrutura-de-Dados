/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int prod (int m, int n){
    if (n < 1) 
        return 0;
    else{
        return m + prod(m, n-1);
    }
}

int main(void){
    int m = 0;
    int n = 0;

    printf("Determinar o Produto\n");
    
    printf("Insira um Numero: ");
    scanf("%d", &m);
    
    printf("Insira outro Numero: ");
    scanf("%d", &n);
 
    printf("O produto eh: %d", prod(m,n));
    
}