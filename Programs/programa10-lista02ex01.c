// 1. Faça um programa que receba um número inteiro e verifique se este número é par ou impar.

#include <stdio.h>

int main() {

	int x;
	setbuf(stdout, NULL);

	printf("Digite um número inteiro qualquer: ");
	scanf("%d", &x);

	if (x % 2 == 0) { // o operador % verifica se um numero é divisivel por 2 com resto 0
		printf("%d é um número par! \n", x);
	} else {
		printf("%d é um número ímpar! \n", x);
	}

	return 0;

}
