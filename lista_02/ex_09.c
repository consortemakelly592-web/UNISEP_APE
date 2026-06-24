#include <stdio.h>

int main() {
    int num1, num2, i;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("Numeros entre %d e %d:\n", num1, num2);

    if (num1 < num2) {
        for(i = num1; i <= num2; i++) {
            printf("%d\n", i);
        }
    } else {
        for(i = num2; i <= num1; i++) {
            printf("%d\n", i);
        }
    }

    return 0;
}






