/*
1. Faça um programa que leia um vetor A[100]. No final, mostre todas as posições do
vetor que armazenam um valor menor ou igual a 10 e o valor armazenado em cada
uma das posições.
*/

#include <stdio.h>

int main(){

    int tamanhoA = 100;
    int A[tamanhoA], posicao[tamanhoA];
    
    
    for(int i = 0; i < tamanhoA; i++){
        posicao[i] = i+1;
        printf("Informe o valor da posição %d do vetor: ", i);
        scanf("%d", &A[i]);
    }

    printf("\n\nLISTA DE POSIÇÕES COM VALOR MENOR OU IGUAL A 10:\nPOS\tVALOR\n");
    
    for(int i = 0; i < tamanhoA; i++){
        if(A[i] <= 10){
            printf("%d\t%d\n", posicao[i], A[i]);
        }
    }
    printf("\n\n");

    return 0;
}