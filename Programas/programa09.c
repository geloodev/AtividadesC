#include <stdio.h>

int main() {

	int idade;
	setbuf(stdout, NULL);

	printf("Digite sua idade: ");
	scanf("%d0", &idade);

	if (idade < 18) {
		printf("Voc� � menor de idade! \n");
	} else if (idade >= 18 && idade < 60) {
		printf("Voc� � maior de idade e adulto! \n");
	} else {
		printf("Voc� � maior de idade e idoso! \n");
	}

	printf("A sua idade � %d anos.", idade);

	return 0;

}
