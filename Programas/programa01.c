// Aula sobre variáveis

#include <stdio.h>

int main() { // chave que delimita um  bloco de código (início do bloco)

	//declarar uma variável
	int idade; //int é inteiro

	//declarar e inicializar variável
	//int idade = 0;

	// printf é função para escrever algo na saída padrão (console)
	printf("Qual a sua idade?"); //terminando um comando

	fflush(stdout);

	//função para receber os dados
	scanf("%d", &idade);

	printf("A sua idade é %d", idade);
	fflush(stdout);

	return 0;

} // (fim do bloco)
