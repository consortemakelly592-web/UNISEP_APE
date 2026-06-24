#include <stdio.h>

int main() {
    int numero, i;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("Numeros de 1 ate %d:\n", numero);

    for(i = 1; i <= numero; i++) {
        printf("%d\n", i);
    }

    return 0;
}







