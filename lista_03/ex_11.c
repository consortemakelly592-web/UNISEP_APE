#include <stdio.h>

int main() {
    int vetor[10];
    int i, j, aux;

    // Leitura dos valores
    for(i = 0; i < 10; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Ordenação decrescente (Bubble Sort)
    for(i = 0; i < 9; i++) {
        for(j = 0; j < 9 - i; j++) {
            if(vetor[j] < vetor[j + 1]) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }

    // Exibição do vetor ordenado
    printf("\nVetor em ordem decrescente:\n");

    for(i = 0; i < 10; i++) {
        printf("%d\n", vetor[i]);
    }

    return 0;
}