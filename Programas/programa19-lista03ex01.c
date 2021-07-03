//1. Faça um programa que solicita um número decimal e imprime o correspondente em hexa, octal e caracter.

#include <stdio.h>

int main(){

	int num;
	setbuf(stdout, NULL);

	printf("Digite um número inteiro: ");
	scanf("%d", &num);

	printf("TABELA ASCII \n");
	printf("Hexadecimal: %X \n", num);
	printf("Octal: %o \n", num);
	printf("Caractere: %c \n", num);

	return 0;

}
