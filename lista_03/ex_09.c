#include <stdio.h>

int main() {
    int vetor[10];
    int i;

    for(i = 0; i < 10; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for(i = 0; i < 10; i++) {
        if(vetor[i] < 0) {
            vetor[i] = 0;
        }
    }

    printf("\nVetor apos substituir negativos por zero:\n");

    for(i = 0; i < 10; i++) {
        printf("%d\n", vetor[i]);
    }

    return 0;
}