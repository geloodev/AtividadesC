#include <stdio.h>
#include <string.h>

int main(){

    char lista[10][31];
    int i;

    for(i = 0; i < 10; i++){
        printf("Nome %d: ", i+1);
        printf("\n");
        setbuf(stdin, NULL);
        scanf("%30[^\n]", lista[i]);
    }

    printf("Todas as listas")
    for(int i = 0; i< 10; i++){
        printf("Nome 1: ")
    }


    return 0;
}