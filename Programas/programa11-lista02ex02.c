//2. Faça um programa que receba dois números e mostre qual deles é o maior.

#include <stdio.h>

int main() {

	int a, b;
	setbuf(stdout, NULL);

	printf("Insira o primeiro número: ");
	scanf("%d", &a);

	printf("Insira o segundo número: ");
	scanf("%d", &b);

	if (a > b) {
		printf("%d é maior que %d!", a, b);
	} else if (a < b) {
		printf("%d é maior que %d!", b, a);
	} else {
		printf("%d e %d são iguais!", a, b);
	}
	return 0;

}
