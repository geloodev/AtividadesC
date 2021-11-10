#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 5

typedef struct{
    int ddd;
    char numero[12];   
}Telefone;

typedef struct{
    char nome[30];
    int codigo;
    float salario;
    Telefone telefone;
}Funcionario;

int main(){

    
    Funcionario listaF[MAX];
    int opcao;
    int n = 0;

    do{
        //menu
        system("clear"); //clear output screen
        printf("=============== MENU DE OPÇÕES ===============\n");
        printf("1 - Cadastrar um novo funcionário\n");
        printf("2 - Listar todos os funcionários cadastrados\n");
        printf("3 - Buscar um funcionário pelo nome\n");
        printf("0 - Sair\n");
        printf("==============================================\n\n");
        printf(">>> ESCOLHA UMA DAS OPÇÕES: ");
        scanf("%d", &opcao);
        printf("\n");

        switch(opcao){
            case 1: //cadastrar novo funcionario
                if(n >= MAX){
                    printf("Limite de funcionários atingido!");
                } 
                else {
                    printf("Cadastro do funcionário Nº %d \n", n+1);
                    
                    printf("Nome: ");
                    setbuf(stdin, NULL);
                    scanf("%29[^\n]", listaF[n].nome);

                    printf("Código: ");
                    scanf("%d", &listaF[n].codigo);

                    printf("Salário: ");
                    scanf("%f", &listaF[n].salario);

                    printf("DDD: ");
                    scanf("%d", &listaF[n].telefone.ddd);

                    printf("Número de telefone: ");
                    setbuf(stdin, NULL);
                    scanf("%11[^\n]", listaF[n].telefone.numero);

                    n++; 
                    printf("\nNúmero de funcionários cadastrados = %d", n);
                }
                break;
            
            case 2: //listar todos
                printf("Lista dos funcionários cadastrados:\n");
                for(int i = 0; i < n; i++){
                    printf("%d - %s. R$%.2f. (%d)%s \n", listaF[i].codigo, listaF[i].nome, listaF[i].salario, listaF[i].telefone.ddd, listaF[i].telefone.numero);
                }
                break;
            
            case 3: //buscar pelo nome
                break;
            
            case 0: //sair
                break;
            
            default:
                printf("Opção inválida!");
                break;
        }
        printf("\n\n");
    }while(opcao != 0);

    return 0;
}