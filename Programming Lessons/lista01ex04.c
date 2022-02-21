/*
4.Lanche (1038 URI)
Com base na tabela abaixo, escreva um programa que leia o código de um item e a
quantidade deste item. A seguir, calcule e mostre o valor da conta a pagar.

1 | Cachorro Quente | R$4.00
2 | X-Salada        | R$4.50
3 | X-Bacon         | R$5.00
4 | Torrada Simples | R$2.00
5 | Refrigerante    | R$1.50

*/

#include <stdio.h>
int main(){

    int opcao;
    float cachorro, salada, bacon, torrada, refri;

    printf("=== MENU ===\n");
    printf("\n1 | Cachorro Quente | R$4.00");
    printf("\n2 | X-Salada        | R$4.50");
    printf("\n3 | X-Bacon         | R$5.00");
    printf("\n4 | Torrada Simples | R$2.00");
    printf("\n5 | Refrigerante    | R$1.50"); 
    printf("\n\nDigite o código do produto que você deseja: ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            printf("Informe a quantidade de Cachorro Quente desejada: ");
            scanf("%f", &cachorro);
            printf("\nValor total a pagar: R$%.2f.\n\n", cachorro * 4.00);
            break;
        case 2:
            printf("Informe a quantidade de X-Salada desejada: ");
            scanf("%f", &salada);
            printf("\nValor total a pagar: R$%.2f.\n\n", salada * 4.50);
            break;
        case 3:
            printf("Informe a quantidade de X-Bacon desejada: ");
            scanf("%f", &bacon);
            printf("\nValor total a pagar: R$%.2f.\n\n", bacon * 5.00);
            break;
        case 4:
            printf("Informe a quantidade de Torrada Simples desejada: ");
            scanf("%f", &torrada);
            printf("\nValor total a pagar: R$%.2f.\n\n", torrada * 2.00);
            break;
        case 5:
            printf("Informe a quantidade de Refrigerante desejada: ");
            scanf("%f", &refri);
            printf("\nValor total a pagar: R$%.2f.\n\n", refri * 1.50);
            break;
        default:
            printf("\nOPÇÃO INVÁLIDA.\n\n");
            break;
    }

    return 0;
}