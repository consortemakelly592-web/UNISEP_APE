#include <stdio.h>

int main() {
    int numero, i;
    int fatorial = 1;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    for(i = 1; i <= numero; i++) {
        fatorial = fatorial * i;
    }

    printf("O fatorial de %d e: %d\n", numero, fatorial);

    return 0;
}





