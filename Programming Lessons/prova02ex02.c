/*
2. Desenvolva um programa em Linguagem C para ler um e-mail do usuário. Seu
programa deverá validar o e-mail, considerando as seguintes características:

○ Um e-mail válido possui um, e apenas um, caracter ‘@’.
○ Um e-mail válido possui a finalização ‘.com’ ou ‘.com.br’.
○ Um e-mail válido possui, pelo menos, um caracter antes do ‘@’.
○ Um e-mail válido não inicia com algarismo.

Ao final, o programa deverá apresentar a mensagem “E-mail válido” ou “E-mail inválido”.
*/

#include <stdio.h>
#include <string.h>

int main(){

    char email[31];
    int tamanho, contArroba = 0, verificaArroba = 0, algarismoInicial = 0, verificaComBr = 0; 

    printf("Digite seu e-mail: ");
    scanf("%30[^\n]", email);

    tamanho = strlen(email);

    for(int i = 0; i < tamanho; i++){
        //verifica quantos "@" existem no email
        if(email[i] == '@'){
            contArroba++;
        }
        //verifica se existe no minimo um caracter antes do "@"
        if(email[0] == '@'){
            verificaArroba = 1;
        }
        //verifica se o email inicia em algarismo
        if(email[0] >= 48 && email[0] <= 57){
            algarismoInicial = 1;
        }
    }
     
    //verifica se o email termina em ".com" ou ".com.br"
    for( int i = tamanho; i >= 0; i--){
        if(email[i] == 'm'){
            if(email[i-1] == 'o'){
                if(email[i-2] == 'c'){
                    if(email[i-3] == '.'){
                        verificaComBr = 1;
                    }
                }
            }
        }
        if(email[i] == 'r'){
            if(email[i-1] == 'b'){
                if(email[i-2] == '.'){
                    if(email[i-3] == 'm'){
                        if(email[i-4] == 'o'){
                            if(email[i-5] == 'c'){
                                if(email[i-6] == '.'){
                                    verificaComBr = 1;
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    if(contArroba != 1 || verificaArroba == 1 || algarismoInicial == 1 || verificaComBr != 1){
        printf("E-mail inválido.\n\n");
    } else {
        printf("E-mail válido.\n\n");
    }

    return 0;
}