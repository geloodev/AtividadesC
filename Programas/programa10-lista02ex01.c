// 1. Faça um programa que receba um número inteiro e verifique se este número é par ou impar.

#include <stdio.h>

int main() {

	int x;
	setbuf(stdout, NULL);

	printf("Digite um número inteiro qualquer: ");
	scanf("%d", &x);

	if (x % 2 == 0) { // o operador % verifica se um número é divisível por 2 até chegar no resto 0
		printf("%d é um número par!", x);
	} else {
		printf("%d é um número ímpar!", x);
	}

	return 0;

}
