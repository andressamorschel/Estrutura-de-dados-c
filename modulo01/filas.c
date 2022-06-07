#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define N 3

typedef struct T_fila{
    int dados[N];
    int fim;
}T_fila;

void iniciarFila(T_fila *f){
    int i;
    for(i=0; i<N;i++){
         f->dados[i] = 0;
    }
    f->fim = 0;
}

void enfileirar(int elemento, T_fila *f){
    if(f->fim == N){
        printf("Fila cheia \n");
        return;
    } else {
        f->dados[f->fim] = elemento;
        f->fim++;
    }

}

int desinfileirar(T_fila *f){
    int dado, i;
    if(f->fim == 0){
        printf("Fila vazia \n");
        return;
    } else {
        dado = f->dados[0];
        for(i=0;i<f->fim;i++){
            f->dados[i] = f->dados[i+1];
        }
        f->fim--;
        return dado;
    }
}

void imprimirFila(T_fila *f){
    int i;
    for(i=0;i<f->fim;i++){
        printf("%d \n", f->dados[i]);
    }
}


void main() {
	T_fila f1;

    iniciarFila(&f1);
    enfileirar(10, &f1);
    enfileirar(50, &f1);
    enfileirar(40, &f1);

    imprimirFila(&f1);

    desinfileirar(&f1);

    imprimirFila(&f1);
}
