#include <stdio.h>

int main(){

	float temperaturaC;

	printf("Informe a temperatura em graus Celsius: \n");
	scanf("%f", &temperaturaC);

	printf("%.2f� Celsius equivalem a %.2f� Fahrenheit!", temperaturaC, temperaturaC * (9.0 * 5.0) + 32.0);

	return 0;

}
