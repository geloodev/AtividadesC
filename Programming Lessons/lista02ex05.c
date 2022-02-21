/*
5. Deseja-se gerenciar os produtos de um estoque. Cada produto possui um ID,
descrição, preço de compra, preço de venda e quantidade em estoque. Desenvolva
um programa em linguagem C para gerenciar esse estoque, considerando as
seguintes características.
● O estoque conterá, no máximo, 100 produtos. No entanto, em um dado
momento, poderá conter, por exemplo, apenas 3 cadastrados.
● Os produtos serão cadastrados um a um, quando o usuário realizar a escolha
de cadastro no menu.
● Os ids deverão ser gerados automaticamente, começando pelo ID 1.
● O programa deverá apresentar o seguinte menu ao usuário:
    1. Cadastrar produto no estoque.
    2. Listar produtos no estoque.
    3. Verificar os dados do produto em maior quantidade no estoque.
    4. Verificar os dados do produto que gera maior lucro.
    5. Verificar os dados do produto com maior preço.
    6. Verificar os dados do produto com menor preço.
    7. Buscar de um produto por seu ID.
    8. Buscar um produto pela descrição.
    9. Sair.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){

    typedef struct{
        int ID;
        char descricao[25];
        float precoCompra, precoVenda, lucro;
        int qtdEstoque;
    }Produto;

    int nProdutos = 0, maiorEstoque, opcao, buscaID;
    float maiorLucro, maiorVenda, menorVenda;
    char voltar, buscaDescricao[25];
    bool encontrado = 0;
    Produto produtos[101];

    do{
        system("clear");
        
        printf("========================== MENU DE OPÇÕES ==========================\n");
        printf(" 1 - Cadastrar produto no estoque\n");
        printf(" 2 - Listar produtos no estoque\n");
        printf(" 3 - Verificar os dados do produto em maior quantidade no estoque\n");
        printf(" 4 - Verificar os dados do produto que gera maior lucro\n");
        printf(" 5 - Verificar os dados do produto com maior preço de venda\n");
        printf(" 6 - Verificar os dados do produto com menor preço de venda\n");
        printf(" 7 - Buscar um produto por seu ID\n");
        printf(" 8 - Buscar um produto pela descrição\n");
        printf(" 9 - Sair\n");
        printf("====================================================================\n");
        printf(">> Digite a opção desejada: ");
        scanf("%d", &opcao);
        printf("\n");

        switch(opcao){
            case 1: //Cadastrar produto no estoque
                system("clear");

                printf("> CADASTRAR PRODUTO NO ESTOQUE <\n");
                
                produtos[nProdutos].ID = nProdutos + 1;
                printf("\nID do produto: %d\n", produtos[nProdutos].ID);

                printf("\nInforme a descrição do produto (limite de 24 caracteres):\n> ");
                setbuf(stdin, NULL);
                scanf("%24[^\n]", produtos[nProdutos].descricao);

                printf("\nInforme o preço de compra do produto:\n> R$ ");
                scanf("%f", &produtos[nProdutos].precoCompra);

                printf("\nInforme o preço de venda do produto:\n> R$ ");
                scanf("%f", &produtos[nProdutos].precoVenda);

                produtos[nProdutos].lucro = produtos[nProdutos].precoVenda - produtos[nProdutos].precoCompra;

                printf("\nInforme a quantidade de estoque do produto:\n> ");
                scanf("%d", &produtos[nProdutos].qtdEstoque);

                if(nProdutos == 0){
                    
                    maiorEstoque = produtos[nProdutos].qtdEstoque;
                    maiorLucro = produtos[nProdutos].lucro;
                    maiorVenda = produtos[nProdutos].precoVenda;
                    menorVenda = produtos[nProdutos].precoVenda;
                    
                }
                else{
                    if(produtos[nProdutos].qtdEstoque > maiorEstoque){
                        maiorEstoque = produtos[nProdutos].qtdEstoque;
                    }
                    
                    if(produtos[nProdutos].lucro > maiorLucro){
                        maiorLucro = produtos[nProdutos].lucro;
                    }
                    
                    if(produtos[nProdutos].precoVenda > maiorVenda){
                        maiorVenda = produtos[nProdutos].precoVenda;
                    }

                    if(produtos[nProdutos].precoVenda < menorVenda){
                        menorVenda = produtos[nProdutos].precoVenda;
                    }
                }

                nProdutos++;

                printf("\nPRODUTO CADASTRADO!\nAperte ENTER para voltar ao menu: ");
                setbuf(stdin, NULL);
                scanf("%c", &voltar);
                
                break;

            case 2: //Listar produtos no estoque
                system("clear");

                printf("> LISTAR PRODUTOS NO ESTOQUE <\n");

                if(nProdutos == 0){
                    printf("\nNÃO HÁ PRODUTOS CADASTRADOS.\n");
                }
                else {
                    printf("\nID\tDESCRIÇÃO\t\t\tCOMPRA\tVENDA\tQTD\n");
                    for(int i = 0; i < nProdutos; i++){
                        printf("%d\t%-24s\t%.2f\t%.2f\t%d\n", produtos[i].ID, produtos[i].descricao, produtos[i].precoCompra, produtos[i].precoVenda, produtos[i].qtdEstoque);
                    }
                }

                printf("\nAperte ENTER para voltar ao menu: ");
                setbuf(stdin, NULL);
                scanf("%c", &voltar);

                break;
            
            case 3: //Verificar os dados do produto em maior quantidade no estoque
                system("clear");

                printf("> PRODUTO COM MAIOR QUANTIDADE DE ESTOQUE <\n");
                printf("\nID\tDESCRIÇÃO\t\t\tCOMPRA\tVENDA\tQTD\n");
                for(int i = 0; i < nProdutos; i++){
                    if(produtos[i].qtdEstoque == maiorEstoque){
                        printf("%d\t%-24s\t%.2f\t%.2f\t%d\n", produtos[i].ID, produtos[i].descricao, produtos[i].precoCompra, produtos[i].precoVenda, produtos[i].qtdEstoque);
                    }
                }            

                printf("\nAperte ENTER para voltar ao menu: ");
                setbuf(stdin, NULL);
                scanf("%c", &voltar);
                
                break;

            case 4: //Verificar os dados do produto que gera maior lucro
                system("clear");

                printf("> PRODUTO COM MAIOR LUCRO <\n");
                printf("\nID\tDESCRIÇÃO\t\t\tCOMPRA\tVENDA\tQTD\n");
                for(int i = 0; i < nProdutos; i++){
                    if(produtos[i].lucro == maiorLucro){
                        printf("%d\t%-24s\t%.2f\t%.2f\t%d\n", produtos[i].ID, produtos[i].descricao, produtos[i].precoCompra, produtos[i].precoVenda, produtos[i].qtdEstoque);
                    }
                }            

                printf("\nAperte ENTER para voltar ao menu: ");
                setbuf(stdin, NULL);
                scanf("%c", &voltar);
                
                break;

            case 5: //Verificar os dados do produto com maior preço de venda
                system("clear");

                printf("> PRODUTO COM MAIOR PREÇO DE VENDA <\n");
                printf("\nID\tDESCRIÇÃO\t\t\tCOMPRA\tVENDA\tQTD\n");
                for(int i = 0; i < nProdutos; i++){
                    if(produtos[i].precoVenda == maiorVenda){
                        printf("%d\t%-24s\t%.2f\t%.2f\t%d\n", produtos[i].ID, produtos[i].descricao, produtos[i].precoCompra, produtos[i].precoVenda, produtos[i].qtdEstoque);
                    }
                }            

                printf("\nAperte ENTER para voltar ao menu: ");
                setbuf(stdin, NULL);
                scanf("%c", &voltar);
                
                break;


            case 6: //Verificar os dados do produto com menor preço de venda
                system("clear");

                printf("> PRODUTO COM MENOR PREÇO DE VENDA <\n");
                printf("\nID\tDESCRIÇÃO\t\t\tCOMPRA\tVENDA\tQTD\n");
                for(int i = 0; i < nProdutos; i++){
                    if(produtos[i].precoVenda == menorVenda){
                        printf("%d\t%-24s\t%.2f\t%.2f\t%d\n", produtos[i].ID, produtos[i].descricao, produtos[i].precoCompra, produtos[i].precoVenda, produtos[i].qtdEstoque);
                    }
                }            

                printf("\nAperte ENTER para voltar ao menu: ");
                setbuf(stdin, NULL);
                scanf("%c", &voltar);
                
                break;


            case 7: //Buscar um produto por seu ID
                system("clear");
                encontrado = 0;

                printf("> BUSCAR UM PRODUTO PELO SEU ID <\n\ninforme o ID desejado: ");
                scanf("%d", &buscaID);

                for(int i = 0; i < nProdutos; i++){
                    if(produtos[i].ID == buscaID){
                        encontrado = 1;
                        printf("\nID\tDESCRIÇÃO\t\t\tCOMPRA\tVENDA\tQTD\n");
                        printf("%d\t%-24s\t%.2f\t%.2f\t%d\n", produtos[i].ID, produtos[i].descricao, produtos[i].precoCompra, produtos[i].precoVenda, produtos[i].qtdEstoque);
                    }
                } 

                if(encontrado == 0){
                    printf("\nNENHUM PRODUTO ENCONTRADO.");
                }

                printf("\nAperte ENTER para voltar ao menu: ");
                setbuf(stdin, NULL);
                scanf("%c", &voltar);

                break;

            case 8: //Buscar um produto pela descrição
                system("clear");
                encontrado = 0;

                printf("> BUSCAR UM PRODUTO PELA SUA DESCRIÇÃO <\n\nInforme a descrição desejada: ");
                setbuf(stdin, NULL);
                scanf("%24[^\n]", buscaDescricao);

                for(int i = 0; i < nProdutos; i++){
                    if(strcmp(produtos[i].descricao, buscaDescricao) == 0){
                        encontrado = 1;
                    }
                } 

                if(encontrado == 1){
                    printf("\nID\tDESCRIÇÃO\t\t\tCOMPRA\tVENDA\tQTD\n");
                    for(int i = 0; i < nProdutos; i++){
                        if(strcmp(produtos[i].descricao, buscaDescricao) == 0){
                            printf("%d\t%-24s\t%.2f\t%.2f\t%d\n", produtos[i].ID, produtos[i].descricao, produtos[i].precoCompra, produtos[i].precoVenda, produtos[i].qtdEstoque);
                        }
                    }
                } else {
                    printf("\n\nNENHUM PRODUTO ENCONTRADO.");
                }

                printf("\nAperte ENTER para voltar ao menu: ");
                setbuf(stdin, NULL);
                scanf("%c", &voltar);

                break;
            
            case 9: //Sair
                system("clear");
                break;
            
            default:
                system("clear");

                printf("OPÇÃO INVÁLIDA. TENTE NOVAMENTE.");
                printf("\nAperte ENTER para voltar ao menu: ");
                setbuf(stdin, NULL);
                scanf("%c", &voltar);

                break;
        }
    }while(opcao != 9);

    return 0;
}