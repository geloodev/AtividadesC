/*
 * 4. Faça um programa em que o usuário informe
 * a quantidade de números que deseja somar,
 * depois leia a quantidade indicada por ele, e
 * no final imprima a soma dos números.
 */

#include <stdio.h>

int main(){

	int valor, quantidade, soma = 0, contador = 0;

	printf("Informe a quantidade de números que você deseja somar: ");
	scanf("%d", &quantidade);

	do {

		printf("Informe o número: ");
		scanf("%d", &valor);

		soma = soma + valor;
		contador++;

	} while (contador < quantidade);

	printf("A soma é: %d", soma);

	return 0;

}
