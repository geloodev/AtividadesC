// Aula sobre vari�veis

#include <stdio.h>

int main() { // chave que delimita um  bloco de c�digo (in�cio do bloco)

	//declarar uma vari�vel
	int idade; //int � inteiro

	//declarar e inicializar vari�vel
	//int idade = 0;

	// printf � fun��o para escrever algo na sa�da padr�o (console)
	printf("Qual a sua idade?"); //terminando um comando

	fflush(stdout);

	//fun��o para receber os dados
	scanf("%d", &idade);

	printf("A sua idade � %d", idade);
	fflush(stdout);

	return 0;

} // (fim do bloco)
