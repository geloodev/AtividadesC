/*
 * Leia 10 números inteiros positivos, ignorando os negativos,
 * e imprima a soma dos positivos no final.
 */

#include <stdio.h>

int main(){

	int valor, contador_positivos = 0, soma = 0;

	while (contador_positivos < 10) {

		printf("Digite um número: ");
		scanf("%d", &valor);

		if (valor > 0) {

			soma = soma + valor;
			contador_positivos++;

		}
	}

	printf("A soma dos números positivos é: %d", soma);

	return 0;

}
