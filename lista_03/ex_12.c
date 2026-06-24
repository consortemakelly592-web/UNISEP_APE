#include <stdio.h>

int main() {
    int vetor[6];
    int i;
    int maior, segundoMaior;

    for(i = 0; i < 6; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Inicializa com os dois primeiros valores
    if(vetor[0] > vetor[1]) {
        maior = vetor[0];
        segundoMaior = vetor[1];
    } else {
        maior = vetor[1];
        segundoMaior = vetor[0];
    }

    // Procura os maiores
    for(i = 2; i < 6; i++) {
        if(vetor[i] > maior) {
            segundoMaior = maior;
            maior = vetor[i];
        } 
        else if(vetor[i] > segundoMaior && vetor[i] != maior) {
            segundoMaior = vetor[i];
        }
    }

    printf("\nSegundo maior valor: %d\n", segundoMaior);

    return 0;
}



