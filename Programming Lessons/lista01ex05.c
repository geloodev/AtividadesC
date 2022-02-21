#include <stdio.h>
#include <math.h>

int main(){

    int x1, y1, x2, y2;
    float distancia;

    printf("Informe o eixo x de P1: ");
    scanf("%d", &x1);
    printf("Informe o eixo y de P1: ");
    scanf("%d", &y1);
    printf("Informe o eixo x de P2: ");
    scanf("%d", &x2);
    printf("Informe o eixo y de P2: ");
    scanf("%d", &y2);

    distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    printf("A distância entre P1 e P2 é de %.4f.", distancia);

    return 0;
}