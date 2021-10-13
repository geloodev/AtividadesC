/*
Crie um programa em C para ler 10 valores inteiros do usuário.
Apresente:
- A soma dos valores fornecidos;
- Os valores pares fornecidos;
- Os valores ímpares fornecidos.
*/

#include <stdio.h>

int main(){

    int valor[10], atual, soma = 0, n_pares = 0, n_impares = 0, pares[n_pares],impares[n_impares];

    for(int i = 1; i <= 10; i++){
        printf("Digite o %dº número: ", i);
        scanf("%d", &valor[i-1]);
        soma = soma + valor[i-1];

        if(valor[i-1] % 2 == 0){
            n_pares++;
            pares[n_pares - 1] = i;
        } else if(valor[i-1] % 2 != 0){
            n_impares++;
            impares[n_impares - 1] = i;
        }

    }

    printf("\nA soma dos valores é = %d", soma);

    printf("\n\nNúmeros pares listados: ");
    for(int i = 0; i < n_pares; i++){
        printf("%d  ", pares[i]);
    }

    printf("\n\nNúmeros ímpares listados: ");
    for(int i = 0; i < n_impares; i++){
        printf("%d  ", impares[i]);
    }

    printf("\n\n");

    return 0;
}