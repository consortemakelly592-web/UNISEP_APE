#include <stdio.h>
#include <string.h>

// Função que inverte uma string (char[])
void inverter(char str[]) {
    int i, j;
    char temp;

    j = strlen(str) - 1;

    for(i = 0; i < j; i++) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        j--;
    }
}

int main() {
    char texto[100];

    printf("Digite uma palavra: ");
    scanf("%s", texto);

    inverter(texto);

    printf("Invertido: %s\n", texto);

    return 0;
}