// programa que simula o lançamento de 2 dados, n vezes,
// e apresenta o número de cada dado, e a relação entre
// eles (<, >, ==), em cada um dos lançamentos.

#include <stdio.h>
#include <stdlib.h> //biblioteca para se utilizar rand()
#include <time.h> // biblioteca para se utilizar time()
int main() {

	int lancamentos, dado1, dado2;

	printf("Informe o número de vezes que os dados serão lançados: ");
	scanf("%d", &lancamentos);

	srand(time(NULL)); // srand é a semente que inicia a randomização, nesse caso usamos um tempo

	for (int cont = 0; cont < lancamentos; cont++) {

		dado1 = rand() % 6;
		dado2 = rand() % 6;

		if (dado1 == 0) { //estrutura para evitar que o rand() apresente zero
			dado1 = 1;
		} else if (dado2 == 0) {
			dado2 = 1;
		}

		if (dado1 > dado2) {
			printf("%d > %d \n", dado1, dado2);
		} else if (dado1 < dado2) {
			printf("%d < %d \n", dado1, dado2);
		} else {
			printf("%d = %d \n", dado1, dado2);
		}
	}

	return 0;

}
