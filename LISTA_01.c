#include<stdio.h>

int main () {
	int num1, num2;
	int resultado;
	printf("digite o primeiro número:");

	scanf("%i", &num1);


	printf ("digite o segundo número:");
	scanf("%i", &num2);


resultado= num1 % num2;
if (resultado ==0){
    printf ("o numero %i é multiplo de %i", num1, num2);}
    else {
        printf("o numero %i nao é multiplo de %i", num1, num2);
    }
}
