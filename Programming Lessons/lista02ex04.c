/*
4. Deseja-se cadastrar os dados de diversos atletas no sistema. Cada atleta deve ser
cadastrado considerando o nome, o peso, a altura, a idade e o CPF. Desenvolve um
programa em linguagem C para cadastrar N atletas. Após o cadastro, o sistema
deverá apresentar o seguinte menu ao usuário:
1. Listar todos os atletas cadastrados.
2. Buscar um atleta por nome.
3. Buscar um atleta por CPF.
4. Buscar atletas por intervalo de peso.
5. Buscar atletas por intervalo de altura.
6. Buscar atletas por intervalo de idade.
7. Sair
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int opcao, nAtletas = 2, encontrado = 0;
    char nomeBusca[33], voltar;
    int minimo, maximo;
    float minimoF, maximoF;
    
    typedef struct{
        int numero;
        char nome[27];
        int idade;
        float peso, altura;
        int CPF[12];
    }Atleta;

    Atleta atletas[nAtletas];
    
    for(int i = 0; i < nAtletas; i++){
        printf("> CADASTRO DO %dº ATLETA <\n", i+1);
        
        atletas[i].numero = i+1;
        
        printf("Informe o nome: ");
        setbuf(stdin, NULL);
        scanf("%26[^\n]", atletas[i].nome);

        printf("Informe idade: ");
        scanf("%d", &atletas[i].idade);

        printf("Informe o peso (em Kg): ");
        scanf("%f", &atletas[i].peso);

        printf("Informe a altura (em Metros): ");
        scanf("%f", &atletas[i].altura);

        printf("Informe o CPF (apenas números): ");
        setbuf(stdin, NULL);
        scanf("%11[^\n]", &atletas[i].CPF);
        
        printf("\n\n");
    }
   
    do{
        system("clear");
        
        printf("================ MENU DE OPÇÕES ================\n");
        printf("1 - Listar todos os atletas cadastrados\n");
        printf("2 - Buscar um atleta por nome\n");
        printf("3 - Buscar um atleta por CPF\n");
        printf("4 - Buscar atletas por intervalo de peso\n");
        printf("5 - Buscar atletas por intervalo de altura\n");
        printf("6 - Buscar atletas por intervalo de idade\n");
        printf("7 - Sair\n");
        printf("================================================\n");
        printf(">> Digite a opção desejada: ");
        scanf("%d", &opcao);
        printf("\n");

        switch(opcao){
            case 1: //cadastrar novo atleta
                system("clear");

                printf("> ATLETAS CADASTRADOS <\nNUM\tNOME\t\t\t\tIDADE\tPESO\tALTURA\tCPF\n");
                printf("===========================================================================\n");
                for(int i = 0; i < nAtletas; i++){
                    printf("%d\t%-26s\t%d\t%.2f\t%.2f\t%s\n", atletas[i].numero, atletas[i].nome, atletas[i].idade, atletas[i].peso, atletas[i].altura, atletas[i].CPF);
                }

                printf("\nAperte ENTER para voltar ao menu: ");
                setbuf(stdin, NULL);
                scanf("%c", &voltar);

                break;

            case 2: //Buscar um atleta por nome
                system("clear");
                encontrado = 0;

                printf("> BUSCAR ATLETA POR NOME <\n");

                do{
                    printf("Digite o nome a ser procurado (deve ser idêntico ao nome cadastrado): ");
                    setbuf(stdin, NULL);
                    scanf("%26[^\n]", nomeBusca);

                    for(int i = 0; i < nAtletas; i++){
                        if(strcmp(atletas[i].nome, nomeBusca) == 0){
                            encontrado = 1;
                        }
                    }
                    
                    if(encontrado == 1){
                        printf("\n> ATLETAS ENCONTRADOS <\nNUM\tNOME\t\t\t\tIDADE\tPESO\tALTURA\tCPF\n");
                        printf("===========================================================================\n");
        
                        for(int i = 0; i < nAtletas; i++){
                            if(strcmp(atletas[i].nome, nomeBusca) == 0){
                                printf("%d\t%-26s\t%d\t%.2f\t%.2f\t%s\n", atletas[i].numero, atletas[i].nome, atletas[i].idade, atletas[i].peso, atletas[i].altura, atletas[i].CPF);
                            }
                        }
                    } else {
                        printf("\nNENHUM ATLETA ENCONTRADO. TENTE NOVAMENTE.\n");
                    }

                }while(encontrado == 0);

                printf("\nAperte ENTER para voltar ao menu: ");
                setbuf(stdin, NULL);
                scanf("%c", &voltar);

                break;
            
            case 3: //Buscar um atleta por CPF
                system("clear");
                encontrado = 0;

                printf("> BUSCAR ATLETA POR CPF <\n");

                do{
                    printf("Digite o CPF a ser procurado (deve ser idêntico ao CPF cadastrado): ");
                    setbuf(stdin, NULL);
                    scanf("%26[^\n]", nomeBusca);

                    for(int i = 0; i < nAtletas; i++){
                        if(strcmp(atletas[i].CPF, nomeBusca) == 0){
                            encontrado = 1;
                        }
                    }
                    
                    if(encontrado == 1){
                        printf("\n> ATLETAS ENCONTRADOS <\nNUM\tNOME\t\t\t\tIDADE\tPESO\tALTURA\tCPF\n");
                        printf("===========================================================================\n");
        
                        for(int i = 0; i < nAtletas; i++){
                            if(strcmp(atletas[i].CPF, nomeBusca) == 0){
                                printf("%d\t%-26s\t%d\t%.2f\t%.2f\t%s\n", atletas[i].numero, atletas[i].nome, atletas[i].idade, atletas[i].peso, atletas[i].altura, atletas[i].CPF);
                            }
                        }
                    } else {
                        printf("\nNENHUM ATLETA ENCONTRADO. TENTE NOVAMENTE.\n");
                    }

                }while(encontrado == 0);

                printf("\nAperte ENTER para voltar ao menu: ");
                setbuf(stdin, NULL);
                scanf("%c", &voltar);

                break;

            case 4: //Buscar atletas por intervalo de peso
                system("clear");
                encontrado = 0;

                printf("> BUSCAR ATLETAS POR INTERVALO DE PESO <\n");

                do{
                    printf("Insira o peso mínimo: ");
                    scanf("%f", &minimoF);

                    printf("Insira o peso máximo: ");
                    scanf("%f", &maximoF);

                    for(int i = 0; i < nAtletas; i++){
                        if(atletas[i].peso >= minimoF && atletas[i].peso <= maximoF){
                            encontrado = 1;
                        }
                    }

                    if(encontrado == 1){
                        printf("\n> ATLETAS ENCONTRADOS <\nNUM\tNOME\t\t\t\tIDADE\tPESO\tALTURA\tCPF\n");
                        printf("===========================================================================\n");
        
                        for(int i = 0; i < nAtletas; i++){
                            if(atletas[i].peso >= minimoF && atletas[i].peso <= maximoF){
                                printf("%d\t%-26s\t%d\t%.2f\t%.2f\t%s\n", atletas[i].numero, atletas[i].nome, atletas[i].idade, atletas[i].peso, atletas[i].altura, atletas[i].CPF);
                            }
                        }
                    } else {
                        printf("\nNENHUM ATLETA ENCONTRADO. TENTE NOVAMENTE.\n");
                    }

                }while (encontrado = 0);

                printf("\nAperte ENTER para voltar ao menu: ");
                setbuf(stdin, NULL);
                scanf("%c", &voltar);

                break;

            case 5: //Buscar atletas por intervalo de altura
                system("clear");
                encontrado = 0;

                printf("> BUSCAR ATLETAS POR INTERVALO DE ALTURA <\n");

                do{
                    printf("Insira a altura mínima: ");
                    scanf("%f", &minimoF);

                    printf("Insira a altura máxima: ");
                    scanf("%f", &maximoF);

                    for(int i = 0; i < nAtletas; i++){
                        if(atletas[i].altura >= minimoF && atletas[i].altura <= maximoF){
                            encontrado = 1;
                        }
                    }

                    if(encontrado == 1){
                        printf("\n> ATLETAS ENCONTRADOS <\nNUM\tNOME\t\t\t\tIDADE\tPESO\tALTURA\tCPF\n");
                        printf("===========================================================================\n");
        
                        for(int i = 0; i < nAtletas; i++){
                            if(atletas[i].altura >= minimoF && atletas[i].altura <= maximoF){
                                printf("%d\t%-26s\t%d\t%.2f\t%.2f\t%s\n", atletas[i].numero, atletas[i].nome, atletas[i].idade, atletas[i].peso, atletas[i].altura, atletas[i].CPF);
                            }
                        }
                    } else {
                        printf("\nNENHUM ATLETA ENCONTRADO. TENTE NOVAMENTE.\n");
                    }

                }while (encontrado = 0);

                printf("\nAperte ENTER para voltar ao menu: ");
                setbuf(stdin, NULL);
                scanf("%c", &voltar);

                break;

            case 6: //Buscar atletas por intervalo de idade
                system("clear");
                encontrado = 0;

                printf("> BUSCAR ATLETAS POR INTERVALO DE IDADE <\n");

                do{
                    printf("Insira a idade mínima: ");
                    scanf("%d", &minimo);

                    printf("Insira a idade máxima: ");
                    scanf("%d", &maximo);

                    for(int i = 0; i < nAtletas; i++){
                        if(atletas[i].idade >= minimo && atletas[i].idade <= maximo){
                            encontrado = 1;
                        }
                    }

                    if(encontrado == 1){
                        printf("\n> ATLETAS ENCONTRADOS <\nNUM\tNOME\t\t\t\tIDADE\tPESO\tALTURA\tCPF\n");
                        printf("===========================================================================\n");
        
                        for(int i = 0; i < nAtletas; i++){
                            if(atletas[i].idade >= minimo && atletas[i].idade <= maximo){
                                printf("%d\t%-26s\t%d\t%.2f\t%.2f\t%s\n", atletas[i].numero, atletas[i].nome, atletas[i].idade, atletas[i].peso, atletas[i].altura, atletas[i].CPF);
                            }
                        }
                    } else {
                        printf("\nNENHUM ATLETA ENCONTRADO. TENTE NOVAMENTE.\n");
                    }

                }while (encontrado = 0);

                printf("\nAperte ENTER para voltar ao menu: ");
                setbuf(stdin, NULL);
                scanf("%c", &voltar);

                break;

            case 7:
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
    }while(opcao != 7);

    return 0;
}