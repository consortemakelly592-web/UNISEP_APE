#include <stdio.h>

// Função que calcula o fatorial
int fatorial(int n) {
    int i, resultado = 1;

    for(i = 1; i <= n; i++) {
        resultado *= i;
    }

    return resultado;
}

int main() {
    int num, resultado;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num < 0) {
        printf("Nao existe fatorial de numero negativo.\n");
    } else {
        resultado = fatorial(num);
        printf("Fatorial de %d e: %d\n", num, resultado);
    }

    return 0;
}