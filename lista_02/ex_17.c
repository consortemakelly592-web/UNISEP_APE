#include <stdio.h>

int main() {
    int numero;
    int maior;

    printf("Digite numeros (999 para parar):\n");

    scanf("%d", &numero);
    maior = numero;

    while(numero != 999) {

        if(numero > maior) {
            maior = numero;
        }

        scanf("%d", &numero);
    }

    printf("Maior numero digitado: %d\n", maior);

    return 0;
}

