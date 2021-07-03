/*
 * EXEMPLO: faça um programa que receba 10 números inteiros
 * do usuário e imprima a soma deles no final.
 */

#include <stdio.h>

int main(){

	/* USANDO WHILE:
	int valor, soma = 0, contador = 0;

	while (contador < 10) {

		printf("Digite um número: ");
		scanf("%d", &valor);

		soma = soma + valor;
		contador++;
	}

	printf("A soma total é: %d", soma);
	*/

	/* USANDO FOR:
	int valor, soma = 0;

	for (int contador = 0; contador < 10; contador++) {

		printf("Digite um número: ");
		scanf("%d", &valor);

		soma = soma + valor;

	}

	printf("A soma total é: %d", soma);
	*/

	//USANDO DO_WHILE:

	int valor, soma = 0, contador = 0;

	do {

		printf("Digite um número: ");
		scanf("%d", &valor);

		soma = soma + valor;
		contador++;

	} while (contador < 10);

	printf("A soma total é: %d", soma);

	return 0;

}
