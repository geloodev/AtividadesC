//2. Fa�a um programa que receba dois n�meros e mostre qual deles � o maior.

#include <stdio.h>

int main() {

	int a, b;
	setbuf(stdout, NULL);

	printf("Insira o primeiro n�mero: ");
	scanf("%d", &a);

	printf("Insira o segundo n�mero: ");
	scanf("%d", &b);

	if (a > b) {
		printf("%d � maior que %d!", a, b);
	} else if (a < b) {
		printf("%d � maior que %d!", b, a);
	} else {
		printf("%d e %d s�o iguais!", a, b);
	}
	return 0;

}
