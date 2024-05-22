/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int par (int n){
    if (n == 0) printf("Eh par");
    else if (n == 1) printf("Eh impar");
    else{
        return par(n-2);
    }
}

int main(void){
    int n;
    
    printf("Determinar se eh Par\n");
    
    printf("Insira o Numero: ");
    scanf("%d", &n);
    
    par(n);
    
    return 0;
}
