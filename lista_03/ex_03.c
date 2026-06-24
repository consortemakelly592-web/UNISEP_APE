#include <stdio.h>

int main() {
    int vetor[8];
    int i, soma = 0;

    for(i = 0; i < 8; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for(i = 0; i < 8; i++) {
        soma = soma + vetor[i];
    }

    printf("\nSoma dos elementos do vetor: %d\n", soma);

    return 0;
}