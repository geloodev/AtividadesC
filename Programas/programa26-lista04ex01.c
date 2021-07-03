/*
 * 1. Escreva um programa que declare um inteiro,
 * inicialize-o com 0, e incremente de 1000 em
 * 1000, imprimindo seu valor na tela, até que
 * seu valor seja 100.000 (cem mil)
 */

#include <stdio.h>

int main(){

	int valor = 0;

	while (valor <= 100000) {

		printf("Valor: %d \n", valor);

		valor = valor + 1000;

	}

	return 0;

}
