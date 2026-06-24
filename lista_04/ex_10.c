#include <stdio.h>
#include <string.h>

// Função que conta vogais
int contarVogais(char str[]) {
    int i, contador = 0;

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
           str[i] == 'o' || str[i] == 'u' ||
           str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
           str[i] == 'O' || str[i] == 'U') {
            contador++;
        }
    }

    return contador;
}

int main() {
    char texto[100];
    int resultado;

    printf("Digite uma palavra ou frase: ");
    scanf(" %[^\n]", texto);

    resultado = contarVogais(texto);

    printf("Quantidade de vogais: %d\n", resultado);

    return 0;
}