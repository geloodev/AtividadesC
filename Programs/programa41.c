//  VETORES DE STRUCTS

#include <stdio.h>
#include <string.h>

//definição de uma struct para representar um aluno
typedef struct{
    //especificar os campos da estrutura Aluno
    char nome[5][30];
    char matricula[5][10];
    int anoNascimento;
    char cpf[5][16];
    char rg[5][13];
}Aluno;

int main(){
    //declarando uma variável do tipo Aluno, com 5 alunos
    Aluno alunos[5];

    //entrada de dados
    for(int i = 0; i < 5; i++){
        printf("Aluno %d: \n", i+1);

        printf("Nome do aluno: ");
        setbuf(stdin, NULL);
        scanf("%29[^\n]", alunos[i].nome);

        printf("Matrícula do aluno: ");
        setbuf(stdin, NULL);
        scanf("%9[^\n]", alunos[i].matricula);

        printf("Ano de nascimento do aluno: ");
        scanf("%i", &alunos[i].anoNascimento);

        printf("CPF do aluno: ");
        setbuf(stdin, NULL);
        scanf("%15[^\n]", alunos[i].cpf);

        printf("RG do aluno: ");
        setbuf(stdin, NULL);
        scanf("%12[^\n]", alunos[i].rg);

        printf("\n");        
    }

    //saida de dados
    printf("\n\nLISTA DE ALUNOS CADASTRADOS\n");
    printf("Nome\t\tMatricula\tNascimento\tCPF\t\tRG \n");
    for(int i = 0; i < 5; i++){
        printf("%s\t\t%s\t\t%d\t\t%s\t\t%s \n", alunos[i].nome, alunos[i].matricula, alunos[i].anoNascimento, alunos[i].cpf, alunos[i].rg);
    }
    printf("\n");
    return 0;
}