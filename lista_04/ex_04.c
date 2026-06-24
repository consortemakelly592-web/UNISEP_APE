#include <stdio.h>

// Função que retorna o maior entre três números
int maior(int a, int b, int c) {
    int maior = a;

    if(b > maior) {
        maior = b;
    }

    if(c > maior) {
        maior = c;
    }

    return maior;
}

int main() {
    int num1, num2, num3, resultado;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);

    resultado = maior(num1, num2, num3);

    printf("O maior numero e: %d\n", resultado);

    return 0;
}

