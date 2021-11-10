//STRUCTS

#include <stdio.h>
#include <string.h>

//definição de uma struct para representar um aluno
typedef struct{
    //especificar os campos da estrutura Aluno
    char nome[30];
    char matricula[10];
    int anoNascimento;
    char cpf[16];
    char rg[13];
}Aluno;

//outra forma de definição de uma struct
struct Disciplina{
    char nome[30];
    int cargaHoraria;
};

int main(){
    //declarando uma variável do tipo Aluno
    Aluno aluno1;

    printf("Nome do aluno: ");
    setbuf(stdin, NULL);
    scanf("%29[^\n]", aluno1.nome);

    printf("Matrícula do aluno: ");
    setbuf(stdin, NULL);
    scanf("%9[^\n]", aluno1.matricula);

    printf("Ano de nascimento do aluno: ");
    scanf("%d", &aluno1.anoNascimento);

    printf("CPF do aluno: ");
    setbuf(stdin, NULL);
    scanf("%15[^\n]", aluno1.cpf);

    printf("RG do aluno: ");
    setbuf(stdin, NULL);
    scanf("%12[^\n]", aluno1.rg);

    //declarando uma variável do tipo Disciplina
    struct Disciplina disciplina1;

    return 0;
}