#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){

    char lista[10][31];
    int i;

    /*
    strcpy(lista[0], "Maria");
    strcpy(lista[1], "Alex");
    strcpy(lista[2], "Marta");
    strcpy(lista[3], "João Carlos");
    strcpy(lista[4], "Laura");
    */

    for(i = 0; i <5; i++){
        printf("Nome %d: ", i+1);
        setbuf(stdin, NULL);
        scanf("%30[^\n]", lista[i]);
    }

    printf("\n\nLISTA DE NOMES LIDOS\n");
    for(i = 0; i < 5; i++){
        printf("Nome %d: %s \n", i+1, lista[i]);
    }

    char nomeBusca[31];
    printf("Digite o nome que você deseja buscar: ");
    setbuf(stdin, NULL);
    scanf("%30[^\n]", nomeBusca);

    bool encontrou = 0;
    for(i = 0; i < 5; i++){
        if(strcmp(lista[i], nomeBusca) == 0){
            encontrou = 1;
        }
    }

    /*
    if(encontrou){
        printf("Pessoa cadastrada\n");
    } else {
        printf("Pessoa não cadastrada\n");
    }
    */

    //Outra forma de teste
    // TESTE ? tratamento_V : tratamento_F
    encontrou = 1 ? printf("Pessoa Cadastrada\n") : printf("Pessoa não cadastrada\n");

    //Buscar todos os nomes com a inicial dada pelo usuário
    char inicial;

    printf("Informe a inicial a ser buscada: ");
    setbuf(stdin, NULL);
    scanf("%c", &inicial);

    encontrou = 0;
    printf("\nLISTA DE NOMES COM A INICIAL %c \n", inicial);
    for(i = 0; i < 5; i++){
        if (inicial == lista[i][0]){
            printf("%s \n", lista[i]);
            encontrou = 1;
        }
    }
    if (encontrou == 0){
        printf("Não foram encontrados nomes com essa inicial \n\n");
    }

    return 0;
}