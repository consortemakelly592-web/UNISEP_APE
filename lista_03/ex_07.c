#include <stdio.h>

int main() {
    int vetor[10];
    int i, soma = 0;
    float media;

    for(i = 0; i < 10; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for(i = 0; i < 10; i++) {
        soma = soma + vetor[i];
    }

    media = soma / 10.0;

    printf("\nMedia dos valores: %.2f\n", media);

    return 0;
}