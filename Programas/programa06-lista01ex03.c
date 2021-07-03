#include <stdio.h>

int main(){

	float valor;

	printf("Informe um número: \n");
	scanf("%f", &valor);

	printf("A quinta parte de %.2f é %.2f! \n", valor, valor/5);

	return 0;

}
