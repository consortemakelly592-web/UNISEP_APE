#include <stdio.h>

// Função que calcula o MDC usando o algoritmo de Euclides
int mdc(int a, int b) {
    int resto;

    while(b != 0) {
        resto = a % b;
        a = b;
        b = resto;
    }

    return a;
}

int main() {
    int num1, num2, resultado;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    resultado = mdc(num1, num2);

    printf("MDC de %d e %d e: %d\n", num1, num2, resultado);

    return 0;
}