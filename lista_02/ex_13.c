#include <stdio.h>

int main() {
    int numero, i;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("Contagem regressiva:\n");

    for(i = numero; i >= 0; i--) {
        printf("%d\n", i);
    }

    return 0;
}


