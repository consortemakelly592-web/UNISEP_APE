#include <stdio.h>

// Função que retorna 1 se for primo e 0 se não for
int ehPrimo(int n) {
    int i;

    if(n <= 1) {
        return 0;
    }

    for(i = 2; i < n; i++) {
        if(n % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if(ehPrimo(num)) {
        printf("%d e primo\n", num);
    } else {
        printf("%d nao e primo\n", num);
    }

    return 0;
}