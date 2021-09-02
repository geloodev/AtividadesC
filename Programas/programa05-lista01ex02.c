#include <stdio.h>

int main(){

	float valor;

	printf("Informe um número: ");
	scanf("%f", &valor);

	printf("\nO quadrado de %.2f é %.2f! \n", valor, valor * valor);

	return 0;

}
