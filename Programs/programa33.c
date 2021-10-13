/*
Crie um programa em C para ler 3 notas para um aluno.
Apresente as três notas lidas.

-> Utilize vetor para resolução.
*/

#include <stdio.h>

int main(){

    int notas[3];

    for(int i = 1; i <= 3; i++){
        printf("Digite a %dª nota: ", i);
        scanf("%d", &notas[i-1]);
    }

    printf("\n");

    for(int i = 1; i <= 3; i++){
        printf("%dª nota = %d\n", i, notas[i-1]);
    }

        printf("\n\n");

    return 0;
}