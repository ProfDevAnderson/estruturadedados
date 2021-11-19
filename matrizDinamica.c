#include <stdio.h>
#include <stdlib.h>
int main() {
//    Ponteiro p/ ponteiro
    int **mat = NULL;
    int n_linhas, n_colunas;
    // Perguntar o tamanho da Matriz
    printf("Qtd linhas: ");
    scanf("%d", &n_linhas);
    printf("Qtd colunas: ");
    scanf("%d", &n_colunas);

    // Vetor de ponteiros p/ representar as linhas dinâmicas
    mat = malloc(n_linhas * sizeof(int*));
    if (mat == NULL) {
        printf("Não tem memória disponível");
        printf("Finalizando o programa");
        exit(1);
    }

    // Para cada ponteiro dentro de mat, crie um vetor
    for (int i = 0; i < n_linhas; ++i) {
        mat[i] = malloc(n_colunas * sizeof(int));
    }

    // Laço para inserir dados na matriz dinamica
    for (int i = 0; i < n_linhas; ++i) {
        for (int j = 0; j < n_colunas; ++j) {
            printf("\nMatriz[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    // Laço para exibir os dados da matriz dinâmica
    for (int i = 0; i < n_linhas; ++i) {
        for (int j = 0; j < n_colunas; ++j) {
            printf("\nMatriz[%d][%d]: %d", i, j, mat[i][j]);
        }
    }

    return 0;
}
