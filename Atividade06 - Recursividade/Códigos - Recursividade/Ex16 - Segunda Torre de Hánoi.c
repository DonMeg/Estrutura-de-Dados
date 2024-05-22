#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int h(int n){
	if (n == 1){
		return 1;
	}
	else {
		return 2 * h(n - 1) + 1;	
	} 
}

int main(int argc, char *argv[]) {
	int n;
	
	printf("Digite a Quantidade de Discos: ");
	scanf("%d", &n);
	
	h(n);
	
	printf("\nA quantidade minima de movimentos para resolver com %d discos eh: %d\n", n, h(n));
	return 0;
}
