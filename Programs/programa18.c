#include <stdio.h>

/*
 * tipos de dados:
 * - booleanos (verdadeiro/falso) => true/false
 *
 * Na linguagem C, não existe um tipo de dado booleano.
 * Porém se reconhece o valor 0 (zero) como falso (false), e qualquer outro valor como verdadeiro (true)
 */

int main (){

	int valor = 0;

	if (valor) {
		printf("Verdadeiro");
	} else {
		printf("Falso");
	}

	return 0;

}
