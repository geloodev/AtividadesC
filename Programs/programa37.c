#include <stdio.h>

int main(){

    char frase[51];

    printf("Digite um texto: ");
    setbuf(stdin, NULL);
    scanf("%50[^\n], frase");

    

    return 0;
}