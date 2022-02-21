/*
No plano cartesiano, a distância entre os pontos A e B pode ser calculado como
distância(A, B) = raiz( (𝑥𝑏−𝑥𝑎)² + (𝑦𝑏−𝑦𝑎)² ).

Sabendo que a origem é o ponto T(0,0) e que temos 5 pontos diferentes no plano cartesiano,
escreva um programa em Linguagem C para ler os dados desses 5 pontos. Cada ponto tem seu
valor em x, seu valor em y e uma letra que representa seu nome.
Seu programa deverá apresentar, ao final, o nome do ponto que está mais próximo da origem.
*/

#include <stdio.h>
#include <math.h>

int main(){

    int x, y;
    char nome, menor_nome;
    setbuf(stdout, NULL);
    float distancia, menor_distancia;

    for (int i = 1; i <= 5; i++){
       
        printf("\n\nInsira o nome (letra maiúscula) do ponto %d: ", i);
        scanf(" %c", &nome);
        
        while(nome < 65 || nome > 90){
            printf("\nCARACTERE INCORRETO!");
            printf("\nInsira o nome (letra maiúscula) do ponto %d: ", i);
            scanf(" %c", &nome);
        }

        printf("\nInsira o valor da coordenada x de %c: ", nome);
        scanf("%d", &x);

        printf("\nInsira o valor da coordenada y de %c: ", nome);
        scanf("%d", &y);

        distancia = sqrt(pow(0 - x, 2) + pow(0 - y, 2));

        if(i == 1){
            menor_nome = nome;
            menor_distancia = distancia;
        }

        if(distancia < menor_distancia){
            menor_distancia = distancia;
            menor_nome = nome;
        }
    }

    printf("\n\nO ponto mais próximo da origem é o Ponto %c! \n\n", menor_nome);

    return 0;
}