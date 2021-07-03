/*
 * 4. Faça um programa que calcula o salário líquido de um trabalhador. Serão fornecidos o
nome do trabalhador, o valor da hora, número de horas trabalhadas e o % de desconto do
INSS. No final, imprima todos os dados lidos e o salário líquido calculado: (valor da hora *
número de horas trabalhadas ) * (100 - % de desconto do INSS)/100
 */

#include <stdio.h>

int main(){

	char nome[20];
	int horas;
	float valor_hora, inss, liquido;
	setbuf(stdout, NULL);

	printf("Informe seu nome: ");
	gets(nome);

	printf("Informe o valor da hora: ");
	scanf("%f", &valor_hora);

	printf("Informe o número de horas trabalhadas: ");
	scanf("%d", &horas);

	printf("Informe o desconto do INSS, em %: ");
	scanf("%f", &inss);

	liquido = (valor_hora * horas) * (100 - inss) / 100;

	printf("\n NOME: %s \n", nome);
	printf("VALOR DA HORA: R$ %.2f \n", valor_hora);
	printf("HORAS TRABALHADAS: %d \n", horas);
	printf("DESCONTO DO INSS: %.2f%% \n", inss);
	printf("SALÁRIO LÍQUIDO: R$ %.2f \n", liquido);

	return 0;

}
