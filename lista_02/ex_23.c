#include <stdio.h>

int main() {
    int valor;

    int notas100, notas50, notas20, notas10, notas5, notas1;

    printf("Digite o valor para saque: ");
    scanf("%d", &valor);

    notas100 = valor / 100;
    valor = valor % 100;

    notas50 = valor / 50;
    valor = valor % 50;

    notas20 = valor / 20;
    valor = valor % 20;

    notas10 = valor / 10;
    valor = valor % 10;

    notas5 = valor / 5;
    valor = valor % 5;

    notas1 = valor;

    printf("\nNotas necessarias:\n");
    printf("100: %d\n", notas100);
    printf("50 : %d\n", notas50);
    printf("20 : %d\n", notas20);
    printf("10 : %d\n", notas10);
    printf("5  : %d\n", notas5);
    printf("1  : %d\n", notas1);

    return 0;
}