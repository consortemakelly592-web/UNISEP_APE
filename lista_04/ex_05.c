#include <stdio.h>

// Função que converte Celsius para Fahrenheit
float celsiusParaFahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

int main() {
    float c, f;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &c);

    f = celsiusParaFahrenheit(c);

    printf("Temperatura em Fahrenheit: %.2f\n", f);

    return 0;
}

