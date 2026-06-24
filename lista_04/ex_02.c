#include <stdio.h>

// Função que retorna 1 se for par e 0 se for ímpar
int ehPar(int numero) {
    if(numero % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num, resultado;

    printf("Digite um numero: ");
    scanf("%d", &num);

    resultado = ehPar(num);

    if(resultado == 1) {
        printf("1 (Numero par)\n");
    } else {
        printf("0 (Numero impar)\n");
    }

    return 0;
}



