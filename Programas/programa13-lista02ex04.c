//4. Fa�a um programa que leia 2 notas de um aluno, verifique se as notas s�o validas e exiba na tela a m�dia destas notas.
//Uma nota v�lida deve ser, obrigatoriamente, um valor entre 0.0 e 10.0.
//Caso a nota n�o posua um valor v�lido, este fato deve ser informado ao usu�rio e o programa termina.

#include <stdio.h>

int main() {

	float nota1, nota2, media;
	setbuf(stdout, NULL);

	printf("=====CALCULADORA DE M�DIA===== \n\n");
	printf("Informe sua 1� nota: ");
	scanf("%f", &nota1);

	printf("Informe sua 2� nota: ");
	scanf("%f", &nota2);

	media = (nota1 + nota2) / 2;


	// || = ou
	// && = e
	if ((nota1 < 0 || nota1 > 10) && (nota2 < 0 || nota2 > 10)){
		printf("As duas notas s�o inv�lidas.");
	} else if (nota1 < 0 || nota1 > 10) {
		printf("A primeira nota � inv�lida. \n");
	} else if (nota2 < 0 || nota2 > 10) {
		printf("A segunda nota � inv�lida. \n");
	} else {
		printf("Sua m�dia �: %.1f", media);
	}

	printf("\n==============================");

	return 0;

}
