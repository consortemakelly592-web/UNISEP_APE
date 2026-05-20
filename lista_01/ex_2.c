#include <stdio.h>

int main() {

	float salario;
	float resultado;


	printf("Digite seu salário: ");
	scanf("%f", &salario);


	if(salario>3000 ) {
		resultado = salario+ (salario * 0.05);
	}
	else {
		resultado = salario+ (salario * 0.10);
	}
	
	printf("o salario ajustado %.2f", resultado);
	



}



