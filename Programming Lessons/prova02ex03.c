/*
3/ Um professor está com dificuldades em gerenciar as notas de sua turma. Para
tanto, precisa de um sistema para auxiliá-lo. Desenvolva um programa em Linguagem C
considerando as seguintes características: (*UTILIZE STRUCTS)

○ O programa deverá gerenciar os dados de, no máximo, 40 estudantes.
○ Cada estudante possuirá nome completo, nota 1, nota 2, média final e situação
(APROVADO OU REPROVADO).
○ O professor realizará o cadastro dos alunos um a um, não sendo necessário cadastrar
todos ao mesmo tempo.
○ O programa deverá apresentar o seguinte menu:
    1. Cadastrar um novo estudante.
    2. Listar todos os dados dos estudantes cadastrados.
    3. Buscar estudante por nome.
    4. Alterar notas de um estudante cadastrado (realiza a busca pelo nome do
    estudante).
    5. Listar estudantes aprovados.
    6. Listar estudantes reprovados.
    7. Apresentar dados do estudante com maior nota.
    8. Sair.
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

int main(){
    typedef struct{
        int numero;
        char nome[17];
        char sobrenome[17];
        float nota1;
        float nota2;
        float mediaFinal;
        char situacao[12];
    }Estudante;

    int nEstudantes = 3;
    Estudante estudantes[nEstudantes], estudanteMaiorNota;
    int opcao, j = 0;
    char nomeBusca[16];
    char voltar[2];
    bool encontrado = 0;

    do{
        system("clear");
        
        printf("==================== MENU DE OPÇÕES ====================\n");
        printf("1 - Cadastrar um novo estudante\n");
        printf("2 - Listar todos os dados dos estudantes cadastrados\n");
        printf("3 - Buscar estudante por nome\n");
        printf("4 - Alterar notas de um estudante cadastrado\n");
        printf("5 - Listar estudantes aprovados\n");
        printf("6 - Listar estudantes reprovados\n");
        printf("7 - Apresentar dados do estudante com maior nota\n");
        printf("8 - Sair\n");
        printf("========================================================\n");
        printf(">> Digite a opção desejada: ");
        scanf("%d", &opcao);
        printf("\n");

        switch (opcao){
        case 1: //Cadastrar um novo estudante
            system("clear");

            printf("CADASTRO DE UM NOVO ESTUDANTE\n");
            
            estudantes[j].numero = j+1;

            printf("Informe o nome do estudante: ");
            setbuf(stdin, NULL);
            scanf("%30[^\n]", estudantes[j].nome);
            
            printf("Informe o sobrenome do estudante: ");
            setbuf(stdin, NULL);
            scanf("%15[^\n]", estudantes[j].sobrenome);

            printf("Informe a 1ª nota do estudante: ");
            scanf("%f", &estudantes[j].nota1);

            printf("Informe a 2ª nota do estudante: ");
            scanf("%f", &estudantes[j].nota2);

            estudantes[j].mediaFinal = (estudantes[j].nota1 + estudantes[j].nota2) / 2.0;

            if(estudantes[j].mediaFinal >= 6.0){
                strcpy(estudantes[j].situacao, "APROVADO");
            } else {
                strcpy(estudantes[j].situacao, "REPROVADO");
            }

            if(j == 0){
                estudanteMaiorNota = estudantes[j];
            } else if(estudantes[j].mediaFinal > estudanteMaiorNota.mediaFinal){
                estudanteMaiorNota = estudantes[j];
            }

            j++;
            break;
        
        case 2: //Listar todos os dados dos estudantes cadastrados
            system("clear");
            
            printf("LISTA DE ALUNOS CADASTRADOS: \n");
            printf("Nº\tNOME\t\tSOBRENOME\tNOTA 1\tNOTA 2\tMÉDIA\tSITUAÇÃO\n");
            printf("=========================================================================\n");
            for(int i = 0; i < j; i++){
                printf("%d\t%-16s%-16s%.2f\t%.2f\t%.2f\t%s\n", estudantes[i].numero, estudantes[i].nome, estudantes[i].sobrenome, estudantes[i].nota1, estudantes[i].nota2, estudantes[i].mediaFinal, estudantes[i].situacao);
            }
            
            printf("\nAperte ENTER para voltar ao Menu: ");
            setbuf(stdin, NULL);
            scanf("%1[^\n]", voltar);
            printf("\n");
            break;

        case 3: //Buscar estudante por nome
            system("clear");
            encontrado = 0;

            printf("Informe o nome que você deseja buscar: ");
            setbuf(stdin, NULL);
            scanf("%15[^\n]", nomeBusca);

            printf("Nº\tNOME\t\tSOBRENOME\tNOTA 1\tNOTA 2\tMÉDIA\tSITUAÇÃO\n");
            printf("=========================================================================\n");
            for(int i = 0; i < nEstudantes; i++){
                if(strcmp(estudantes[i].nome, nomeBusca) == 0){
                    printf("%d\t%-16s%-16s%.2f\t%.2f\t%.2f\t%s\n", estudantes[i].numero, estudantes[i].nome, estudantes[i].sobrenome, estudantes[i].nota1, estudantes[i].nota2, estudantes[i].mediaFinal, estudantes[i].situacao);
                    encontrado = 1;
                }
            }
            if (encontrado == 0){
                printf("NENHUM ESTUDANTE ENCONTRADO\n");
            }

            printf("\nAperte ENTER para voltar ao Menu: ");
            setbuf(stdin, NULL);
            scanf("%1[^\n]", voltar);
            break;
        
        case 4: //Alterar notas de um estudante cadastrado
            system("clear");
            encontrado = 0;

            printf("Informe o nome do estudante: ");
            setbuf(stdin, NULL);
            scanf("%15[^\n]", nomeBusca);

            printf("Alunos encontrados: \n");
            printf("Nº\tNOME\t\tSOBRENOME\tNOTA 1\tNOTA 2\tMÉDIA\tSITUAÇÃO\n");
            printf("=========================================================================\n");
            for(int i = 0; i < nEstudantes; i++){
                if(strcmp(estudantes[i].nome, nomeBusca) == 0){
                    
                    printf("%d\t%-16s%-16s%.2f\t%.2f\t%.2f\t%s\n", estudantes[i].numero, estudantes[i].nome, estudantes[i].sobrenome, estudantes[i].nota1, estudantes[i].nota2, estudantes[i].mediaFinal, estudantes[i].situacao);
                    encontrado = 1;
                }
            }
            if (encontrado == 1){
                do{
                    printf("\nDigite o número do estudante a ser editado: ");
                    scanf("%d", &opcao);

                    if(strcmp(estudantes[opcao-1].nome, nomeBusca) == 0){
                        printf("\nInforme a 1ª nota do estudante: ");
                        scanf("%f", &estudantes[opcao-1].nota1);

                        printf("Informe a 2ª nota do estudante: ");
                        scanf("%f", &estudantes[opcao-1].nota2);

                        estudantes[opcao-1].mediaFinal = (estudantes[opcao-1].nota1 + estudantes[opcao-1].nota2) / 2.0;

                        if(estudantes[opcao-1].mediaFinal >= 6.0){
                            strcpy(estudantes[opcao-1].situacao, "APROVADO");
                        } else {
                            strcpy(estudantes[opcao-1].situacao, "REPROVADO");
                        }

                    } else {
                        printf("ESTUDANTE INEXISTENTE\n");
                    }
                }while(strcmp(estudantes[opcao-1].nome, nomeBusca) != 0);
                
            } else {
                printf("NENHUM ESTUDANTE ENCONTRADO\n");
            }

            for(int i = 0; i < j; i++){
                if(i == 0){
                    estudanteMaiorNota = estudantes[i];
                } else if(estudantes[i].mediaFinal > estudanteMaiorNota.mediaFinal){
                    estudanteMaiorNota = estudantes[i];
                }
            }  

            printf("\nAperte ENTER para voltar ao Menu: ");
                setbuf(stdin, NULL);
                scanf("%1[^\n]", voltar);
            break;
        
        case 5: //Listar estudantes aprovados
            system("clear");
            
            printf("LISTA DE ALUNOS APROVADOS: \n");
            printf("Nº\tNOME\t\tSOBRENOME\tNOTA 1\tNOTA 2\tMÉDIA\tSITUAÇÃO\n");
            printf("=========================================================================\n");
            for(int i = 0; i < j; i++){
                if(strcmp(estudantes[i].situacao, "APROVADO") == 0){
                    printf("%d\t%-16s%-16s%.2f\t%.2f\t%.2f\t%s\n", estudantes[i].numero, estudantes[i].nome, estudantes[i].sobrenome, estudantes[i].nota1, estudantes[i].nota2, estudantes[i].mediaFinal, estudantes[i].situacao);
                }
            }
            printf("\nAperte ENTER para voltar ao Menu: ");
            setbuf(stdin, NULL);
            scanf("%1[^\n]", voltar);
            printf("\n");
            break;
        
        case 6: //Listar estudantes reprovados
            system("clear");
            
            printf("LISTA DE ALUNOS REPROVADOS: \n");
            printf("Nº\tNOME\t\tSOBRENOME\tNOTA 1\tNOTA 2\tMÉDIA\tSITUAÇÃO\n");
            printf("=========================================================================\n");
            for(int i = 0; i < j; i++){
                if(strcmp(estudantes[i].situacao, "REPROVADO") == 0){
                    printf("%d\t%-16s%-16s%.2f\t%.2f\t%.2f\t%s\n", estudantes[i].numero, estudantes[i].nome, estudantes[i].sobrenome, estudantes[i].nota1, estudantes[i].nota2, estudantes[i].mediaFinal, estudantes[i].situacao);
                }
            }
            printf("\nAperte ENTER para voltar ao Menu: ");
            setbuf(stdin, NULL);
            scanf("%1[^\n]", voltar);
            printf("\n");
            break;
        
        case 7: //Apresentar dados do estudante com maior nota
            system("clear");
            
            printf("ESTUDANTE COM A MAIOR NOTA: \n");
            printf("Nº\tNOME\t\tSOBRENOME\tNOTA 1\tNOTA 2\tMÉDIA\tSITUAÇÃO\n");
            printf("=========================================================================\n");
            printf("%d\t%-16s%-16s%.2f\t%.2f\t%.2f\t%s\n", estudanteMaiorNota.numero, estudanteMaiorNota.nome, estudanteMaiorNota.sobrenome, estudanteMaiorNota.nota1, estudanteMaiorNota.nota2, estudanteMaiorNota.mediaFinal, estudanteMaiorNota.situacao);
            
            printf("\nAperte ENTER para voltar ao Menu: ");
            setbuf(stdin, NULL);
            scanf("%1[^\n]", voltar);
            printf("\n");
            break;
        
        case 8: //Sair
            break;
        
        default:
            system("clear");
            
            printf("OPÇÃO INVÁLIDA. TENTE NOVAMENTE. ");
            printf("Aperte ENTER para voltar ao Menu: ");
            setbuf(stdin, NULL);
            scanf("%1[^\n]", voltar);
            break;
        }

        printf("\n\n");
    }while(opcao != 8);
    
    return 0;
}