#include <stdio.h>

int main(){

	float temperaturaF, temperaturaC;

	printf("Informe a temperatura em graus Fahrenheit: \n");
	scanf("%f", &temperaturaF);

	temperaturaC = 5 * (temperaturaF - 32)/9;

	printf("%.2f� Fahrenheit equivalem a %.2f� Celsius!", temperaturaF, temperaturaC);

	return 0;

}
