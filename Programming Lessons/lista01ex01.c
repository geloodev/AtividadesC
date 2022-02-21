/* 
1.Distância entre carros (1016 URI)

Dois carros (X e Y) partem em uma mesma direção. O carro X sai com velocidade
constante de 60 Km/h e o carro Y sai com velocidade constante de 90 Km/h.
Em uma hora (60 minutos) o carro Y consegue se distanciar 30 quilômetros do carro
X, ou seja, consegue se afastar um quilômetro a cada 2 minutos.
Leia a distância (em Km) e calcule quanto tempo leva (em minutos) para o carro Y
tomar essa distância do outro carro.
*/

#include <stdio.h>

int main(){

    int distancia, tempo;

    printf("Informe a distância, em Km: ");
    scanf("%d", &distancia);

    tempo = distancia * 2;

    printf("\nO carro Y estará %d Km a frente do carro X em: %d minutos.\n\n", distancia, tempo);
 
    return 0;
}