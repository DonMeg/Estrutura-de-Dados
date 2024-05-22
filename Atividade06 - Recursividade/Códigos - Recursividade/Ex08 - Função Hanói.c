#include <stdio.h>
#include <stdlib.h>

void hanoi(int n, char origem, char auxiliar, char destino){
	if(n == 1){
		printf ("Mova o disco %d de %c para %c\n", n, origem, destino);
		return;
	}
	
	hanoi(n-1, origem, destino, auxiliar);
	printf("Mova o disco %d de %c para %c\n", n, origem, destino);
	
	hanoi(n-1, auxiliar, origem, destino);
}

int main(int argc, char *argv[]) {
    int n;

    printf("Digite a Quantidade de Discos: ");
	scanf("%d", &n);

    hanoi(n, 'A', 'B', 'C');
    
    return 0;
}
