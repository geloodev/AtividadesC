#include <stdio.h>
#include <string.h>

int main(){

    char nome[11], sobrenome[11], nomeCompleto[22];

    printf("Digite seu nome: ");
    setbuf(stdin, NULL);
    scanf("%10[^\n]", nome);

    printf("Digite seu sobrenome: ");
    setbuf(stdin, NULL);
    scanf("%10[^\n]", sobrenome);
    
    strcpy(nomeCompleto, nome);
    
    //função para concatenar strings
    strcat(nomeCompleto, " "); //nomeCompleto = nomeCompleto + " "
    strcat(nomeCompleto, sobrenome); //nomeCompleto = nomeCompleto + sobrenome

    printf("Nome Completo: %s \n\n", nomeCompleto);

    return 0;
}