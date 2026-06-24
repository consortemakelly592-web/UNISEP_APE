#include <stdio.h>

int main() {
    int idade;
    int soma = 0;
    int contador = 0;
    float media;

    printf("Digite idades (0 para parar):\n");

    while(1) {
        scanf("%d", &idade);

        if(idade == 0) {
            break;
        }

        soma = soma + idade;
        contador++;
    }

    if(contador > 0) {
        media = (float)soma / contador;
        printf("Media das idades: %.2f\n", media);
    } else {
        printf("Nenhuma idade foi digitada.\n");
    }

    return 0;
}

