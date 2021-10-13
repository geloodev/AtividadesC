/*
 * 3. Faça um programa que leia 10 inteiros e imprima sua média.
 */

#include <stdio.h>

int main(){

	int contador = 0;
	float valor, soma = 0, media;

	while (contador < 10) {

		printf("Digite um número: ");
		scanf("%f", &valor);

		soma = soma + valor;
		contador++;

	}

	media = soma / 10;

	printf(" A soma é: %.1f \n A média destes 10 números é: %.1f", soma, media);

	return 0;

}
