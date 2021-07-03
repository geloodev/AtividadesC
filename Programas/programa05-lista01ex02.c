#include <stdio.h>

int main(){

	float valor;

	printf("Informe um número: \n");
	scanf("%f", &valor);

	printf("O quadrado de %.2f é %.2f! \n", valor, valor * valor);

	return 0;

}
