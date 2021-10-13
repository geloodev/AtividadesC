// usuário informa quantos números deseja que sejam lidos,
// informa esses números e o programa mostra o maior deles.

#include <stdio.h>

int main() {

	int valor, quantidade, maior, contador = 0;

	printf("Quantos números deseja informar?: ");
	scanf("%d", &quantidade);

	if (quantidade > 0) {

		while (contador < quantidade) {

			printf("Informe um número: ");
			scanf("%d", &valor);

			if (contador == 0) {
				maior = valor;
			} else if (valor > maior) {
				maior = valor;
			}

			contador++;
		}

		printf("Entre estes %d números, o maior é %d.", quantidade, maior);

	} else {
		printf("QUANTIDADE INVÁLIDA.");
	}

	return 0;

}
