//ler um valor de um comprimento em polegadas e apresent�-lo convertido em cent�metros

#include <stdio.h>

int main(){

	//declarar as vari�veis
	//float valorPolegadas, valorCentimetros;

	float valorPolegadas;

	//entrada
	printf("Informe o valor em polegadas:");
	scanf("%f", &valorPolegadas);

	//processamento
	//valorCentimetros = valorPolegadas * 2.54;

	//sa�da
	printf("%.2f polegadas equivalem a %.2f cent�metros.", valorPolegadas, valorPolegadas * 2.54);

	return 0;

}
