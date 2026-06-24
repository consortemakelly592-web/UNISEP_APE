#include <stdio.h>

int main() {
    int vetor[6];
    int i, maior;

    for(i = 0; i < 6; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];

    for(i = 1; i < 6; i++) {
        if(vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    printf("\nMaior valor do vetor: %d\n", maior);

    return 0;
}