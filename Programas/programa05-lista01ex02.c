#include <stdio.h>

int main(){

	float valor;

	printf("Informe um n�mero: \n");
	scanf("%f", &valor);

	printf("O quadrado de %.2f � %.2f! \n", valor, valor * valor);

	return 0;

}
