/*
 * programa que, para uma matriz 5x5, imprima valores "1"
 * na diagonal e "0" nas demais posições.
 *
 * RESPOSTA:
 * 1 0 0 0 0
 * 0 1 0 0 0
 * 0 0 1 0 0
 * 0 0 0 1 0
 * 0 0 0 0 1
*/

#include <stdio.h>

int main(){

	int linha, coluna;

	linha = 1;
	while (linha <= 5){
		coluna = 1;
		while (coluna <= 5) {
			if (linha == coluna){
				printf("1 ");
			} else {
				printf("0 ");
			}
			coluna++;
		}
		printf("\n");
		linha++;
	}

	return 0;

}
