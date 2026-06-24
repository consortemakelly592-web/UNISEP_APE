#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero positivo: ");
    scanf("%d", &numero);

    while(numero <= 0) {
        printf("Numero invalido! Digite um numero positivo: ");
        scanf("%d", &numero);
    }

    printf("Numero valido: %d\n", numero);

    return 0;
}