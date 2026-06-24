#include <stdio.h>

// Função que calcula a média de um vetor
float media(int vetor[], int tamanho) {
    int i, soma = 0;

    for(i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }

    return (float)soma / tamanho;
}

int main() {
    int vetor[5];
    int i;
    float resultado;

    for(i = 0; i < 5; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    resultado = media(vetor, 5);

    printf("Media dos elementos: %.2f\n", resultado);

    return 0;
}