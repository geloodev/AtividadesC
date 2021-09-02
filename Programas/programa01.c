// Aula sobre variáveis

#include <stdio.h>

int main() { // chave que delimita um  bloco de código (início do bloco)

	//declarar uma variavel
	int idade; //int é inteiro

	//declarar e inicializar variavel
	//int idade = 0;

	// printf é função para escrever algo na saida padrão (console)
	printf("Qual a sua idade?"); //terminando um comando

	fflush(stdout);

	//função para receber os dados
	scanf("%d", &idade);

	printf("A sua idade é %d", idade);
	fflush(stdout);

	return 0;

} // (fim do bloco)
