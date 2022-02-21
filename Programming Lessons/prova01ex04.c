/*
Faça um programa que leia: (1) a nota do primeiro bimestre; (2) a nota do
segundo bimestre; (3) a quantidade de faltas de vários alunos de uma turma. Sabendo que:

○ A disciplina possui carga horária de 80 aulas.
○ A média final é calculada através da média aritmética entre as notas do primeiro e
segundo bimestre.
○ A média de aprovação é 6.
○ A frequência necessária para aprovação é de 75%.
○ Após a leitura dos dados de um aluno, o programa deverá perguntar ao usuário se um
novo aluno será cadastrado. Em caso positivo, o programa realizará a leitura de novos
dados, caso contrário, seu programa deverá apresentar:
    ■ A quantidade de alunos aprovados na disciplina, considerando a nota e a frequência.
    ■ A quantidade de alunos reprovados por falta.
    ■ A maior média da turma.
    ■ A média das notas do primeiro bimestre.

        80 -- 100
    faltas -- frequencia
*/

#include <stdio.h>

int main(){

    float nota1, nota2, media, maior_media = 0.0, soma1bi = 0.0, media_aprovacao = 6.0, contador = 0.0;
    int faltas, aprovados = 0, reprovados_falta = 0;
    char simnao;
    setbuf(stdout, NULL);

    do{
        printf("\nInsira a nota do 1º bimestre: ");
        scanf("%f", &nota1);

        while(nota1 > 10 || nota1 < 0){
            printf("Nota inválida! Insira novamente: ");
            scanf("%f", &nota1);
        }

        soma1bi = soma1bi + nota1;
        contador++;

        printf("\nInsira a nota do 2º bimestre: ");
        scanf("%f", &nota2);

        while(nota2 > 10 || nota2 < 0){
            printf("Nota inválida! Insira novamente: ");
            scanf("%f", &nota2);
        }

        printf("\nInsira a quantidade de aulas faltas: ");
        scanf("%d", &faltas);

        while(faltas > 80){
            printf("Quantidade inválida! Tente novamente: ");
            scanf("%d", &faltas);
        }

        media = (nota1 + nota2) / 2;

        if(media >= 6.0 && faltas <= 20){
            aprovados++;
        }

        if(faltas > 20){
            reprovados_falta++;
        }

        if(media >= maior_media){
            maior_media = media;
        }

        printf("\nDeseja cadastrar as notas de outro aluno?\n(Digite S para SIM / qualquer outra tecla para NÃO): ");
        scanf(" %c", &simnao);
    }while (simnao == 83 || simnao == 115);

    printf("\nQuantidade de alunos aprovados = %d", aprovados);
    printf("\nQuantidade de alunos reprovados por falta = %d", reprovados_falta);
    printf("\nMaior média da turma = %.1f", maior_media);
    printf("\nMédia de notas do 1º Bimestre = %.1f\n\n", soma1bi / contador);

    return 0;
}