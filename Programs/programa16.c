#include <stdio.h>

/* tipos de dados alfanuméricos:
 *
 * - caractere => 'a', 'c', '1', '!', ...
 * - string => "Um conjunto de caracteres..."
 * (tecnicamente não existe string em C, mas utiliza-se vetores de caractere para expressar strings
 */

int main(){

	char opcao;
	setbuf(stdout, NULL);

	printf("ESCOLHA UMA OPÇÃO: \n");
	printf("a - Saldo da conta \n");
	printf("b - Extrato da conta \n");
	printf("c - Limite da conta \n");

	scanf("%c", &opcao);

	if (opcao == 'a') {
		printf("Saldo... \n");
	} else if (opcao == 'b') {
		printf("Extrato... \n");
	} else if (opcao == 'c') {
		printf("Limite... \n");
	} else {
		printf("Opção inválida. \n");
	}

	/* USANDO A TABELA ASCII:
	if (opcao == 97) {
		printf("Saldo...");
	} else if (opcao == 98) {
		printf("Extrato...");
	} else if (opcao == 99) {
		printf("Limite...");
	} else {
		printf("Opção inválida.");
	}
	*/

	printf("Você escolheu a opção %c.", opcao);

	return 0;

}
