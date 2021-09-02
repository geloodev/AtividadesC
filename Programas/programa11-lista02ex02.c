//2. Faça um programa que receba dois números e mostre qual deles é o maior.

#include <stdio.h>

int main() {

	int a, b;

	printf("Insira o primeiro número: ");
	scanf("%d", &a);

	printf("Insira o segundo número: ");
	scanf("%d", &b);

	if (a > b) {
		printf("%d é maior que %d!\n", a, b);
	} else if (a < b) {
		printf("%d é maior que %d!\n", b, a);
	} else {
		printf("%d e %d são iguais!\n", a, b);
	}
	return 0;

}
