#include <stdio.h>

int main() {
    int numero;
    int contador = 0;

    printf("Digite numeros (numero negativo para parar):\n");

    while(1) {
        scanf("%d", &numero);

        if(numero < 0) {
            break;
        }

        contador++;
    }

    printf("Quantidade de numeros digitados: %d\n", contador);

    return 0;
}

