#include <stdio.h>
#include <stdlib.h>
// Pilha -> struct ponteiro alocação dinâmica
// Struct

struct carro {
    char modelo;
    char cor;
    struct  carro *prox;
};

typedef struct carro Carro;
Carro *topo;

// Inserção na pilha
void  push(char modelo[], char cor[]){
    Carro *c = malloc(sizeof (Carro));
    c->modelo = modelo;
    c->cor = cor;

    c->prox = topo;
    topo = c;
}

// Remoção
void pop(){
    if (topo == NULL){
        printf("Pilha vazia");
    } else{
        Carro *removido = topo;
        topo = topo->prox;
        free(removido);
    }
}

void listar(Carro *c){
    if (c != NULL) {
        printf("Marca %s - Cor %s", c->modelo
        , c->cor);
        listar(c->prox);
    }
}

int main() {
    printf("Hello, World!\n");
    return 0;
}
