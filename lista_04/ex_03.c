#include <stdio.h>

// Função que retorna o quadrado de um número
int quadrado(int numero) {
    return numero * numero;
}

int main() {
    int num, resultado;

    printf("Digite um numero: ");
    scanf("%d", &num);

    resultado = quadrado(num);

    printf("O quadrado de %d e: %d\n", num, resultado);

    return 0;
}



