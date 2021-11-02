//Strings

#include <stdio.h>

int main(){

    char palavra[11]; // espaço +1 para armazenar \0

    printf("Digite uma palavra: ");
    //scanf("%s", palavra);   //não precisa de "&" quando for string
    scanf("%10[^\n]", palavra);   //[^\n] significa que o programa irá ler as letras até encontrar um "\n"
    //scanf("%10[^\\w]", palavra);   // nesse caso, irá ler até encontrar um "w"

    printf("Palavra digitada: %s \n\n", palavra);

    return 0;
}