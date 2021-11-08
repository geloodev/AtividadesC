#include <stdio.h>
#include <string.h>

int main(){

    char frase[51];

    printf("Digite um texto: ");
    setbuf(stdin, NULL);
    scanf("%50[^\n]", frase);

    printf("Palavra lida: %s \n", frase);

    //função para retomar o tamanho da string
    int tamanho = strlen(frase);
    printf("Tamanho da frase: %d \n", tamanho);

    //contar quantas vezes a letra A aparece na frase
    int i, contA = 0;
    for(i = 0; i < tamanho; i++){
        if(frase[i] == 'a' || frase[i] == 'A'){
            contA++;
        }
    }
    printf("Número de A's da string: %d \n", contA);

    //função para copiar string
    char copiaFrase[tamanho+1];
    strcpy(copiaFrase, frase); // copiaFrase = frase
    printf("Cópia da frase: %s \n", copiaFrase);

    //função para comparar strings
    char frase2[51];
    printf("Digite um segundo texto: ");
    setbuf(stdin, NULL);
    scanf("%50[^\n]", frase2);

    /*
    int retornoComparacao = strcmp(frase, frase2)       //if(frase == frase2)
    retornoComparacao == 0  --> frase e frase2 são identicos
    retornoComparacao < 0   --> frase < frase2 --> frase vem antes alfabeticamente de frase2
    retornoComparacao > 0   --> frase > frase2 --> frase vem depois alfabeticamente de frase2
    */

    if(strcmp(frase, frase2) == 0){ // if(frase = frase2)
        printf("As duas frases são iguais\n\n");
    } else {
        printf("As duas frases não são iguais\n\n");
    }

    return 0;
}