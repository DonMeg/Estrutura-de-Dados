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

int resto (int m, int n){
    if (m < n) 
        return m;
    else{
        return resto(m - n, n);
    }
}

int main(void){
    int m = 0;
    int n = 0;

    printf("Determinar o Resto\n");
    
    printf("Insira o Dividendo: ");
    scanf("%d", &m);
    
    printf("Insira o Divisor: ");
    scanf("%d", &n);
    
    if(m < 0) m = -m;
    if(n < 0) n = -n;
    
    if (n == 0){
         printf ("Impossivel Dividir com 0");
    }else{
        printf("O Resto eh: %d", resto(m,n));
    }
}