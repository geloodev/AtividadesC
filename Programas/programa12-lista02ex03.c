//3. Leia um n�mero real (com casas decimais) fornecido pelo usu�rio.
//Se esse n�mero for positivo, calcule a raiz quadrada do n�mero.
//e o n�mero for negativo, mostre uma mensagem dizendo que o n�mero � inv�lido.

#include <stdio.h>
#include <math.h>

int main() {

	float x, raiz;
	setbuf(stdout, NULL);

	printf("Digite um n�mero real qualquer: ");
	scanf("%f", &x);

	raiz = sqrt(x);

	if (x >= 0) {
		printf("A ra�z quadrada de %.0f � %f.", x, raiz);
	} else {
		printf("Este n�mero � inv�lido.");
	}

	return 0;

}
