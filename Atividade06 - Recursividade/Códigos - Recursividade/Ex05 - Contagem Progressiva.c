/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void cp (int n){
    if (n == 0) return;
    cp(n-1);
    printf("%d\n", n);
}

int main(void){
    int n;
    
    printf("Contgem Progressiva\n");
    
    printf("Insira ate qual Numero vai: ");
    scanf("%d", &n);
    cp(n);
    
    return 0;
}
