#include <stdio.h>

int main() {
    int vetor[10];
    int i;

    for(i = 0; i < 10; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nNumeros pares:\n");

    for(i = 0; i < 10; i++) {
        if(vetor[i] % 2 == 0) {
            printf("%d\n", vetor[i]);
        }
    }

    return 0;
}