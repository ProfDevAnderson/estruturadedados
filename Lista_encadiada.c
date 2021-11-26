#include <stdio.h>
#include <stdlib.h>
// Uma lista é formada de Struct, Ponteiro e Alocação Dinâmica

// Struct
struct ponto {
    int x;
    int y;
    // Apontar para outra struct ponto
    struct ponto *prox;
};

typedef struct ponto Ponto;
// Ponteiro para apontar pro primeiro
    Ponto *primeiro;

// Metodo para adicionar um item no inicio da lista
void addStart(int x, int y){
    Ponto *p = malloc(sizeof (Ponto));
    p->x = x;
    p->y = y;
    // Vira o primeiro
    p->prox = primeiro;
    // Atualiza o valor do primeiro
    primeiro = p;
}

void imprimir(){
    // Desafio - Como imprimir os valores da lista encadeada?
    Ponto *aux = primeiro;
    while (aux != NULL){
        printf("\nPonto(%d - %d)", aux->x, aux->y);
        aux = aux->prox;
    }
}
// Metodo Recursivo -> Metodo que chama ele mesmo
void imprimirRecursivo(Ponto *p){
    printf("\nMetodo recursivo");
    if (p != NULL){
        printf("\nPonto(%d - %d)", p->x, p->y);
        imprimirRecursivo(p->prox);
    }
}

int main() {
    addStart(2, 5);
    addStart(8, 1);
    addStart(7, 3);
    imprimir();
    imprimirRecursivo(primeiro);
    return 0;
}
