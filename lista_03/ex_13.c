#include <stdio.h>

int main() {
    int vetor[10];
    int i, j;
    int maisRepetido, maiorContagem = 0;

    // Leitura do vetor
    for(i = 0; i < 10; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Verifica qual número mais se repete
    for(i = 0; i < 10; i++) {
        int contagem = 0;

        for(j = 0; j < 10; j++) {
            if(vetor[i] == vetor[j]) {
                contagem++;
            }
        }

        if(contagem > maiorContagem) {
            maiorContagem = contagem;
            maisRepetido = vetor[i];
        }
    }

    printf("\nNumero que mais se repete: %d\n", maisRepetido);
    printf("Repeticoes: %d\n", maiorContagem);

    return 0;
}



