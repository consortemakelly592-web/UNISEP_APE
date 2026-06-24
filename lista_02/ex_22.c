#include <stdio.h>

int main() {
    int numero, i, divisores = 0;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if(numero <= 1) {
        printf("Nao e primo\n");
    } else {
        for(i = 1; i <= numero; i++) {
            if(numero % i == 0) {
                divisores++;
            }
        }

        if(divisores == 2) {
            printf("E primo\n");
        } else {
            printf("Nao e primo\n");
        }
    }

    return 0;
}