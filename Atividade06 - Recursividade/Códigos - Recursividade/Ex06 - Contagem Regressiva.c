/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void cr (int n){
    if (n == 0) return;
    printf("%d\n", n);
    cr(n-1);
}

int main(void){
    int n;
    
    printf("Contgem Regressiva\n");
    
    printf("Insira ate qual Numero vai: ");
    scanf("%d", &n);
    cr(n);
    
    return 0;
}
