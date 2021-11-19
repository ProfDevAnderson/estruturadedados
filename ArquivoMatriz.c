#include <stdio.h>
#include <stdlib.h>
int main() {
    int n_linhas, n_colunas;
    // Matriz dinâmica Ponteiro p/ Ponteiro
    int **mat;

    FILE *ptrArq;

    // Ponteiro para arquivo
    ptrArq = fopen("../matriz.txt", "r");

    if (ptrArq == NULL) {
        printf("Arquivo nao encontrado ou não há memoria disponível");
        printf("\nSaindo do programa");
        exit(1);
    }

    // Ler as dimensões da matriz
    fscanf(ptrArq, "%d %d", &n_linhas, &n_colunas);
    // Agora eu ja sei a dimensão da minha matriz
    // Criar o vetor de ponteiros (LINHAS)
    mat = malloc(n_linhas * sizeof(int*));
    // Alocar o vetor para cada ponteiro (COLUNAS)
    for (int i = 0; i < n_linhas; ++i) {
        mat[i] = malloc(n_colunas * sizeof(int));
    }

    // Percorrer o vetor e adicionar cada numero do arquivo em uma posição da mat
    for (int i = 0; i < n_linhas; ++i) {
        for (int j = 0; j < n_colunas; ++j) {
            fscanf(ptrArq, "%d", &mat[i][j]);
        }
    }

    for (int i = 0; i < n_linhas; ++i) {
        for (int j = 0; j < n_colunas; ++j) {
            printf(" %d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
