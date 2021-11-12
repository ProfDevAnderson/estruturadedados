#include <stdio.h>
// Incluir a biblioteca para lidar com alocação dinâmica
#include <stdlib.h>

int main() {
    // Ponteiro para receber o endereço da memoria alocada dinamicamente
    float *numeros;
    // Variavel para saber quantos numeros inteiros a pessoa quer armazenar
    int n;

    printf("\nQuantos numeros deseja armazenar?");
    scanf("%d", &n);

    // Alocando dinamicamente o tamanho do vetor
    numeros = malloc(n*sizeof(float));

    // Preencher os valores
    for (int i = 0; i < n; i++) {
        printf("\nNumero %d: ", i);
        scanf("%d", &numeros[i]);
    }

    // Mostrar os valores
    printf("Numeros Lidos: ");
    for (int i = 0; i < n; ++i) {
        printf("\n%d", numeros[i]);
    }

    // Liberando o espaço de memoria que foi alocado
    free(numeros);
    return 0;
}
