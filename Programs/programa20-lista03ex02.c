/* 2. Faça um programa que recebe um número inteiro e imprime “É uma letra”, se o valor
digitado corresponde a uma letra (maiúscula ou minúscula) da Tabela ASCII, caso
contrário, imprime “Não é uma letra”.
*/

#include <stdio.h>

int main(){

	int num;
	setbuf(stdout, NULL);

	printf("Informe um número inteiro: ");
	scanf("%d", &num);

	if ((num >= 65 && num <= 90) || (num >= 97 && num <= 122)) {
		printf("É UMA LETRA!. É a letra %c.", num);
	} else {
		printf("NÃO É UMA LETRA!");
	}

	return 0;

}
