/*
 * Estruturas de Repetição:
 * => são recursos de linguagem de programação que permitem
 * que um certo trecho de código de um programa seja repetido
 * um certo número de vezes.
 *
 * 3 opções: FOR, WHILE, DO_WHILE
 */

#include <stdio.h>

int main(){

	int contador = 0;

	while (contador < 10) {
		printf("Eu não devo brigar com o meu colega de escola.\n");
		contador++; //mesma coisa que contador = contador + 1;
	}

	return 0;

}
