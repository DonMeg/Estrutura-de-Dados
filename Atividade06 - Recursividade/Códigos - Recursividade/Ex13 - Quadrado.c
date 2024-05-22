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

int quad (int n){
    if (n == 0) 
        return 0;
    else{
        return (2 * n - 1) + quad(n -1);
    }
}

int main(void){
    int n = 0;

    printf("Determinar o Quadrado\n");
    
    printf("Insira um Numero: ");
    scanf("%d", &n);
    
    if(n < 0) n = -n;
    
    printf("O Quadrado eh: %d", quad(n));
}