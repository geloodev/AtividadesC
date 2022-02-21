/*
1. Desenvolva um programa em Linguagem C para ler os anos de nascimento de 30
estudantes. Depois de ler todas os anos, o programa deverá apresentar:

○ A posição e o valor do estudante mais velho.
○ A idade média dos estudantes.
○ A listagem dos anos de nascimento anteriores a 2000.
*/

#include <stdio.h>

int main(){
    //declaração da struct Estudantes
    typedef struct{
        int posicao;
        char nome[21];
        int anoNascimento;
    }Estudantes;

    //declaração dos demais tipos de dados
    int nEstudantes = 30;
    int anoAtual = 2021;
    Estudantes estudantes[nEstudantes], estudanteMaisVelho;
    int somaIdades = 0;
    
    //leitura dos dados
    for(int i = 0; i < nEstudantes; i++){

        estudantes[i].posicao = i+1;

        printf("Digite o nome do %dº aluno: ", i+1);
        setbuf(stdin, NULL);
        scanf("%20[^\n]", estudantes[i].nome);

        printf("%s, informe seu ano de nascimento: ", estudantes[i].nome);
        scanf("%d", &estudantes[i].anoNascimento);

        while(estudantes[i].anoNascimento > anoAtual || estudantes[i].anoNascimento < (anoAtual - 100)){
            printf("Ano de nascimento inválido! %s, informe um ano de nascimento válido: ", estudantes[i].nome);
            scanf("%d", &estudantes[i].anoNascimento);
        }

        somaIdades = somaIdades + (anoAtual - estudantes[i].anoNascimento);

        if(i == 0){
            estudanteMaisVelho = estudantes[i];
        }else{
            if(estudantes[i].anoNascimento < estudanteMaisVelho.anoNascimento){
                estudanteMaisVelho = estudantes[i];
            }
        }

        printf("\n");
    }

    //printf do estudante mais velho
    printf("ESTUDANTE MAIS VELHO: \nPOS\tNOME\tNASC \n%d\t%s\t%d \n\n", estudanteMaisVelho.posicao, estudanteMaisVelho.nome, estudanteMaisVelho.anoNascimento);
    //printf dos alunos de antes de 2000
    printf("ESTUDANTES NASCIDOS ANTES DE 2000: \nPOS\tNOME\tNASC \n");
    for(int i = 0; i < nEstudantes; i++){
        if(estudantes[i].anoNascimento < 2000){
            printf("%d\t%s\t%d \n", estudantes[i].posicao, estudantes[i].nome, estudantes[i].anoNascimento);
        }
    }
    printf("\n");
    //printf da idade media dos estudantes
    printf("Idade média dos estudantes = %d anos \n\n", somaIdades / nEstudantes);
    
    return 0;
}