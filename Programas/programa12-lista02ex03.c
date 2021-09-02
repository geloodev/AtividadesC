//3. Leia um numero real (com casas decimais) fornecido pelo usuário.
//Se esse número for positivo, calcule a raiz quadrada do número.
//e o número for negativo, mostre uma mensagem dizendo que o número é inválido.

#include <stdio.h>
#include <math.h>

int main() {

	float x, raiz;
	setbuf(stdout, NULL);

	printf("Digite um número real qualquer: ");
	scanf("%f", &x);

	raiz = sqrt(x);

	if (x >= 0) {
		printf("\nA raíz quadrada de %.0f é %f.\n", x, raiz);
	} else {
		printf("\nEste número é inválido.\n");
	}

	return 0;

}
