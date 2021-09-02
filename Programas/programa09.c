#include <stdio.h>

int main() {

	int idade;
	setbuf(stdout, NULL);

	printf("Digite sua idade: ");
	scanf("%d0", &idade);

	if (idade < 18) {
		printf("Você é menor de idade! \n");
	} else if (idade >= 18 && idade < 60) {
		printf("Você é maior de idade e adulto! \n");
	} else {
		printf("Você é maior de idade e idoso! \n");
	}

	printf("A sua idade é %d anos.\n", idade);

	return 0;

}
