// ler o valor total de um pedido de venda e apresentar esse valor e as op��es de pagamento com desconto de 5% e 10%

#include <stdio.h>

int main(){

	//Declarar vari�veis
	float valorTotalVenda;

	//entrada
	printf("Informe o total de venda: ");
	scanf("%f", &valorTotalVenda);

	//sa�da
	printf("INFORMATIVO DE VENDA \n");
	printf("==================== \n");
	printf("Valor Total: %.2f \n", valorTotalVenda);
	printf("Valor com desconto de 5%%: %.2f \n", valorTotalVenda * 0.95);
	printf("Valor com desconto de 10%%: %.2f \n", valorTotalVenda * 0.90);


	return 0;

}
