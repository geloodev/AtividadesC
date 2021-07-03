#include <stdio.h>

/* tipos de dados alfanuméricos:
 *
 * - caractere => 'a', 'c', '1', '!', ...
 * - string => "Um conjunto de caracteres..."
 * (tecnicamente não existe string em C, mas utiliza-se vetores de caractere para expressar strings
 */

int main() {

	// string: "paulo\0"
	char nome[10]; //armazena 9 caracteres + \0

	printf("Digite seu nome aqui: ");
	gets(nome);

	printf("Seu nome é %s", nome);

	return 0;

}
