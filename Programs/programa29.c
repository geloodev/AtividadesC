// usuário informa a quatidade de números pares que deve ser somada

#include <stdio.h>

int main(){

	int pares, valor = 0,contador_pares = 0, soma = 0;

	printf("Informe a quantidade de números pares que devem ser somados: ");
	scanf("%d", &pares);

	while (contador_pares <= pares){
		if (valor % 2 == 0){
			soma = soma + valor;
			contador_pares++;
		}
		valor++;
	}

	printf("A soma dos primeiros %d números pares é: %d", pares, soma);

	return 0;

}
