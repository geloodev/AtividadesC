#include <stdio.h>

int main(){

	int valor01;
	int valor02;
	int valor03;

	printf("Informe o primeiro número: ");
	scanf("%d", &valor01);

	printf("Informe o segundo número: ");
	scanf("%d", &valor02);

	printf("Informe o terceiro número: ");
	scanf("%d", &valor03);

	printf("A soma destes três números é %d!\n", valor01 + valor02 + valor03);

	return 0;

}
