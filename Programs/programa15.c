#include <stdio.h>

/*
 * tipos de dados numéricos:
 *
 * - inteiros
 * - reais
 *
 */

int main() {

	//inteiro => 4 bytes
	//int inteiro; //12, 53, 369, ...

	//real => 4 bytes (float) e 8 bytes (double)
	//float media; // 1.53, 23.6, ... (6 casas de precisão)
	//double media2; // 1.53, 23.6, ... (10 casas de precisão)

	//float media = (float) (n1 + n2) / 2; //função cast para mudar o tipo de dado numérico

	double n1, n2;
	scanf("%lf", &n1);
	scanf("%lf", &n2);

	double media = (n1+n2)/2;

	printf("média: %lf", media);

	return 0;

}
