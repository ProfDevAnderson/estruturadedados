#include <stdio.h>
int buscaBinariaWhile() {
    int vetor[10] = {0, 5, 7, 8, 9, 10, 15, 24, 36, 40};

    int len = sizeof(vetor) / sizeof(vetor[0]);
    printf("Tamanho do vetor: %d", len);
    int inicio = 0;
    int fim = sizeof(vetor) / sizeof(int);
    int numero = 36;

    while (inicio <= fim) {
        // Calcular o Meio do vetor
        int meio = (inicio + fim) / 2;
        // Verifica se o meio é o valor procurado
        if (vetor[meio] == numero) {
            printf("Numero encontrado");
            return 0;
        }
        // Verificar se vou buscar a direita ou a esquerda do meio
        if (vetor[meio] < numero) {
            inicio = meio + 1;
        }
        if (vetor[meio] > numero) {
            fim = meio - 1;
        }
    }
}
int buscaBinaria(int vetor[10], int inicio, int fim, int numero){

    int meio = (inicio + fim) / 2;

    if (inicio > fim) {
        return  -1;
    }
    if (vetor[meio] == numero){
        return meio;
    }
    if (vetor[meio] < numero){
        return buscaBinaria(vetor, meio+1, fim, numero);
    } else {
        return buscaBinaria(vetor, inicio, meio-1, numero);
    }
}

int main() {
    int vetor[10] = {0, 5, 7, 8, 9, 10, 15, 24, 36, 40};
    int inicio = 0;
    int fim = sizeof(vetor)/sizeof(int);
    int numero = 55;

    int resultado = buscaBinaria(vetor, inicio, fim, numero);
    if (resultado == -1) {
        printf("Item nao encontrado");
    } else {
        printf("Item encontrado na posicao %d", resultado);
    }

    return 0;
}




