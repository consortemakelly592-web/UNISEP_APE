#include <stdio.h>

int main() {
    int numero;
    int soma = 0;

    printf("Digite numeros (0 para parar):\n");

    while(1) {
        scanf("%d", &numero);

        if(numero == 0) {
            break;
        }

        soma = soma + numero;
    }

    printf("Soma dos numeros digitados: %d\n", soma);

    return 0;
}


