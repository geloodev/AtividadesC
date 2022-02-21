/*
2. O microblog Twitter é conhecido por limitar as postagens em 140 caracteres.
Conferir se um texto vai caber em um tuíte é sua tarefa.
A entrada é uma linha de texto T (1 ≤ |T| ≤ 500).
A saída é dada em uma única linha. Ela deve ser "TWEET" (sem as aspas) se a
linha de texto T tem até 140 caracteres. Se T tem mais de 140 caracteres, a saída
deve ser "MUTE".
*/

#include <stdio.h>
#include <string.h>

int main(){

    char T[501];
    int tamanho;

    printf("Escreva seu tweet abaixo:\n");
    scanf("%500[^\n]", T);

    tamanho = strlen(T);

    if(tamanho >= 1 && tamanho <= 140){
        printf("\nTWEET\n\n");
    } else {
        printf("\nMUTE\n\n");
    }

    return 0;
}