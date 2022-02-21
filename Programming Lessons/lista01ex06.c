#include <stdio.h>

int main(){

    int ddd;

    printf("informe o código DDD: ");
    scanf("%d", &ddd);

    switch (ddd)
    {
    case 61:
        printf("\nO DDD %d pertence à Brasília.\n\n", ddd);
        break;
    case 71:
        printf("\nO DDD %d pertence à Salvador.\n\n", ddd);
        break;
    case 11:
        printf("\nO DDD %d pertence à São Paulo.\n\n", ddd);
        break;
    case 21:
        printf("\nO DDD %d pertence ao Rio de Janeiro.\n\n", ddd);
        break;
    case 32:
        printf("\nO DDD %d pertence à Juiz de Fora.\n\n", ddd);
        break;
    case 19:
        printf("\nO DDD %d pertence à Campinas.\n\n", ddd);
        break;
    case 27:
        printf("\nO DDD %d pertence à Vitória.\n\n", ddd);
        break;
    case 31:
        printf("\nO DDD %d pertence à Belo Horizonte.\n\n", ddd);
        break;
    
    default:
        printf("\nDDD não cadastrado.\n\n");
        break;
    }

    return 0;
}