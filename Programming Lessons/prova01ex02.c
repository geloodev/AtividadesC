/*
A maratona de programação possui diversas modalidades de participação,
conforme apresentado na tabela abaixo.

Idade        Curso           Modalidade
até 15       Integrado - I   Junior I
De 16 a 18   Integrado - I   Junior II
De 18 a 21   Superior - S    Sênior I

Ou seja, um aluno do curso integrado poderá participar da modalidade Junior I ou Junior II,
dependendo de sua idade. Caso o estudante tenha mais de 18 anos e esteja no integrado, não há
modalidade na qual ele possa participar. Para os estudantes do curso superior, só poderão
participar da modalidade Sênior I, e apenas se estiverem na faixa de idade entre 18 e 21 anos.

Crie um programa em Linguagem C para ler a idade e o curso (I ou S) de cada um dos 30
participantes inscritos. Seu programa deverá apresentar, ao final, a quantidade de estudantes que
participarão da modalidade Junior I, Junior II, Sênior I e também a quantidade de alunos que se
inscreveram e não poderão participar.
*/

#include <stdio.h>

int main()
{
    int idade, t, junior1 = 0, junior2 = 0, senior1 = 0, restantes = 0; 
    char curso;
    setbuf(stdout, NULL);

    for(t = 1; t <= 30; t++){
        
        printf("\nEstudante %d, informe sua idade: ", t);
        scanf(" %d", &idade);

        printf("Estudante %d, informe seu Curso (I para Integrado ou S para Superior): ", t);
        scanf(" %c", &curso);

        while(curso != 73 && curso != 83 && curso != 105 && curso != 115){
            printf("\nCurso inválido! Tente novamente.");
      
            printf("\nEstudante %d, informe seu Curso (I para Integrado ou S para Superior): ", t);
            scanf(" %c", &curso);
        }


        if(curso == 73 || curso == 105){
            if(idade <= 15){
                 junior1++;
            } else if (idade <= 18){
                junior2++;
            } else {
                restantes++;
            }
        } else if (curso == 83 || curso == 115){
            if(idade >= 18 && idade <= 21){
                senior1++;
            } else {
                restantes++;
            }
        }
    }
    
    printf("\n\n===== NÚMERO DE PARTICIPANTES =====");
    printf("\nModalidade Junior I = %d", junior1);
    printf("\nModalidade Junior II = %d", junior2);
    printf("\nModalidade Sênior I = %d", senior1);
    printf("\nNão-participantes = %d\n\n", restantes);

    return 0;

}