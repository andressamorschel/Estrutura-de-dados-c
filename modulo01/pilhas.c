#include <stdio.h>
#include <stdlib.h>

#define MAXTAM 100

typedef struct
{
    int Item[MAXTAM];
    int Topo;
} Tpilha;

void Tpilha_iniciar(Tpilha *p){ 
    p->Topo = -1;
}

int Tpilha_vazia (Tpilha *p){
    if(p->Topo  == -1){
        return 1;
    } else {
        return 0;
    }
}

int Tpilha_cheia (Tpilha *p){
    if(p->Topo == MAXTAM-1){
        return 1;
    } else {
        return 0;
    }
}

void Tpilha_inserir (Tpilha *p, int x){
    if(Tpilha_cheia(p) == 1){
        printf("Pilha cheia!");
    } else {
        p->Topo++;
        p->Item[p->Topo] = x;
    }
}

int Tpilha_remover (Tpilha *p){
    int aux;
    if(Tpilha_vazia(p) == 1){
        printf("Pilha vazia!");
    } else {
        aux = p->Item[p->Topo];
        p->Topo--;
        return aux;        
    }
}

int main(){
    Tpilha *p = (Tpilha*)malloc(sizeof(Tpilha));
    Tpilha_iniciar(p);

    Tpilha_inserir(p, 10);
    Tpilha_inserir(p, 20);
    Tpilha_inserir(p, 30);

    int aux;

    aux = Tpilha_remover(p);
    printf("\n Saiu: %d", aux);

    return 0;
}