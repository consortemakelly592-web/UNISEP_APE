#include <stdio.h>

int main() {
    int vetor[5];
    int i;

    for(i = 0; i < 5; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nValores digitados:\n");

    for(i = 0; i < 5; i++) {
        printf("%d\n", vetor[i]);
    }

    return 0;
}