// 1. Fa�a um programa que receba um n�mero inteiro e verifique se este n�mero � par ou impar.

#include <stdio.h>

int main() {

	int x;
	setbuf(stdout, NULL);

	printf("Digite um n�mero inteiro qualquer: ");
	scanf("%d", &x);

	if (x % 2 == 0) { // o operador % verifica se um numero � divisivel por 2 com resto 0
		printf("%d � um n�mero par!", x);
	} else {
		printf("%d � um n�mero �mpar!", x);
	}

	return 0;

}
