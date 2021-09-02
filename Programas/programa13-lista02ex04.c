//4. Faça um programa que leia 2 notas de um aluno, verifique se as notas são validas e exiba na tela a média destas notas.
//Uma nota válida deve ser, obrigatoriamente, um valor entre 0.0 e 10.0.
//Caso a nota não posua um valor válido, este fato deve ser informado ao usuário e o programa termina.

#include <stdio.h>

int main() {

	float nota1, nota2, media;
	setbuf(stdout, NULL);

	printf("=====CALCULADORA DE MÉDIA===== \n\n");
	printf("Informe sua 1ª nota: ");
	scanf("%f", &nota1);

	printf("Informe sua 2ª nota: ");
	scanf("%f", &nota2);

	media = (nota1 + nota2) / 2;


	// || = ou
	// && = e
	if ((nota1 < 0 || nota1 > 10) && (nota2 < 0 || nota2 > 10)){
		printf("As duas notas são inválidas.");
	} else if (nota1 < 0 || nota1 > 10) {
		printf("A primeira nota é inválida. \n");
	} else if (nota2 < 0 || nota2 > 10) {
		printf("A segunda nota é inválida. \n");
	} else {
		printf("Sua média é: %.1f", media);
	}

	printf("\n==============================");

	return 0;

}
