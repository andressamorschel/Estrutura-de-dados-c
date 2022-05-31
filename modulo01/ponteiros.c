#include <stdio.h>
#include <stdlib.h>

void main() {
    int *ponteiro;
	ponteiro = (int*) malloc(sizeof(int));
	*ponteiro = 54;
	printf("Endereco ponteiro: %p\n", ponteiro, &ponteiro);
	printf("Valor ponteiro: %d", *ponteiro);
}