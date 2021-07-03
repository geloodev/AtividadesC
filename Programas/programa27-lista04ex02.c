/*
 * 2. Faça um programa utilizando o comando FOR
 * que mostre uma contagem regressiva na tela,
 * iniciando em 10 e terminando em 0. Mostrar uma
 * mensagem “FIM!” após a contagem.
 */

# include <stdio.h>

int main(){

	for (int x = 10; x >= 0; x--) {

		printf("Contagem regressiva: %d \n", x);
	}

	printf("FIM!");

	return 0;

}
