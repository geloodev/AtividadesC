/*
A profa. Carla comprou um pacote de bala para distribuir entre seus alunos. O
pacote veio com 54 balas e apenas os estudantes presentes na aula receberão balas, em igual
quantidade.
Crie um programa em Linguagem C para ler do usuário a quantidade de estudantes presentes
na aula. Seu programa deverá apresentar a quantidade de balas que cada estudante receberá e
a quantidade de balas que sobraram no pacote.
*/

#include <stdio.h>

int main(){

    int estudantes, balas, resto;

    printf("Digite a quantidade de estudantes na sala: ");
    scanf("%d", &estudantes);

    balas = 54 / estudantes;
    resto = 54 % estudantes;

    printf("\nDas 54 balas, cada estudante receberá = %d balas.", balas);
    printf("\nA quantidade de balas restantes no pacote é = %d \n\n", resto);

    return 0;
}