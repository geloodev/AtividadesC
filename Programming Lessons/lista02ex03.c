/*
3. Neste problema estamos interessados na frequência das letras em uma dada linha
de texto.
Especificamente, deseja-se saber qual(is) a(s) letra(s) de maior frequência do texto,
ignorando o “case sensitive”, ou seja maiúsculas ou minúsculas (sendo mais claro,
“letras” referem-se precisamente às 26 letras do alfabeto).
A entrada consiste em uma única linha de texto. A linha pode conter caracteres “não
letras”, mas é garantido que tenha ao menos uma letra e que tenha no máximo 200
caracteres no total.
Imprima uma linha contendo a(s) letra(s) que mais ocorreu(ocorreram) no texto em
minúsculas (se houver empate, imprima as letras em ordem alfabética).
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){

    char texto[201];
    char nomeLetras[26], tmpNome;
    int letras[26], tmp;
    bool temLetra = 0;

     letras[0] = 0;
     letras[1] = 0;
     letras[2] = 0;
     letras[3] = 0;
     letras[4] = 0;
     letras[5] = 0;
     letras[6] = 0;
     letras[7] = 0;
     letras[8] = 0;
     letras[9] = 0;
    letras[10] = 0;
    letras[11] = 0;
    letras[12] = 0;
    letras[13] = 0;
    letras[14] = 0;
    letras[15] = 0;
    letras[16] = 0;
    letras[17] = 0;
    letras[18] = 0;
    letras[19] = 0;
    letras[20] = 0;
    letras[21] = 0;
    letras[22] = 0;
    letras[23] = 0;
    letras[24] = 0;
    letras[25] = 0;


    //lendo o texto digitado pelo usuario
    printf("Digite qualquer texto (máximo de 200 caracteres): ");
    scanf("%200[^\n]", texto);

    //verificando e contando as letras de cada posicao do texto
    int tamanho = strlen(texto);

    //declarando o nome de cada letra (em valor ASCII)
    for (int i = 0; i < 26; i++){
        nomeLetras[i] = i+65;
    }
    
    //contando a quantidade de cada letra
    for (int i = 0; i < tamanho; i++){
    
        //forma mais inteligente de contar as letras
        for (int j = 65; j <= 97; j++){
            if (texto[i] == j || texto[i] == j+32){
                temLetra = 1; //verificando se existe pelo menos uma letra no texto
                letras[j-65]++;
            }
        }
        
        //forma mais burra de contar as letras
       /* 
       if ((texto[i] == 'A') || (texto[i] == 'a')){
           temLetra = 1;
           letras[0]++;
       }
       else if((texto[i] == 'B') || (texto[i] == 'b')){
           temLetra = 1;
           letras[1]++;
       }
       else if((texto[i] == 'C') || (texto[i] == 'd')){
           temLetra = 1;
           letras[2]++;
       }
       else if((texto[i] == 'D') || (texto[i] == 'd')){
           temLetra = 1;
           letras[3]++;
       }
       else if((texto[i] == 'E') || (texto[i] == 'e')){
           temLetra = 1;
           letras[4]++;
       }
       else if((texto[i] == 'F') || (texto[i] == 'f')){
           temLetra = 1;
           letras[5]++;
       }
       else if((texto[i] == 'G') || (texto[i] == 'g')){
           temLetra = 1;
           letras[6]++;
       }
       else if((texto[i] == 'H') || (texto[i] == 'H')){
           temLetra = 1;
           letras[7]++;
       }
       else if((texto[i] == 'I') || (texto[i] == 'i')){
           temLetra = 1;
           letras[8]++;
       }
       else if((texto[i] == 'J') || (texto[i] == 'j')){
           temLetra = 1;
           letras[9]++;
       }
       else if((texto[i] == 'K') || (texto[i] == 'k')){
           temLetra = 1;
           letras[10]++;
       }
       else if((texto[i] == 'L') || (texto[i] == 'l')){
           temLetra = 1;
           letras[11]++;
       }
       else if((texto[i] == 'M') || (texto[i] == 'm')){
           temLetra = 1;
           letras[12]++;
       }
       else if((texto[i] == 'N') || (texto[i] == 'n')){
           temLetra = 1;
           letras[13]++;
       }
       else if((texto[i] == 'O') || (texto[i] == 'o')){
           temLetra = 1;
           letras[14]++;
       }
       else if((texto[i] == 'P') || (texto[i] == 'p')){
           temLetra = 1;
           letras[15]++;
       }
       else if((texto[i] == 'Q') || (texto[i] == 'q')){
           temLetra = 1;
           letras[16]++;
       }
       else if((texto[i] == 'R') || (texto[i] == 'r')){
           temLetra = 1;
           letras[17]++;
       }
       else if((texto[i] == 'S') || (texto[i] == 's')){
           temLetra = 1;
           letras[18]++;
       }
       else if((texto[i] == 'T') || (texto[i] == 't')){
           temLetra = 1;
           letras[19]++;
       }
       else if((texto[i] == 'U') || (texto[i] == 'u')){
           temLetra = 1;
           letras[20]++;
       }
       else if((texto[i] == 'V') || (texto[i] == 'v')){
           temLetra = 1;
           letras[21]++;
       }
       else if((texto[i] == 'W') || (texto[i] == 'w')){
           temLetra = 1;
           letras[22]++;
       }
       else if((texto[i] == 'X') || (texto[i] == 'x')){
           temLetra = 1;
           letras[23]++;
       }
       else if((texto[i] == 'Y') || (texto[i] == 'y')){
           temLetra = 1;
           letras[24]++;
       }
       else if((texto[i] == 'Z') || (texto[i] == 'z')){
           temLetra = 1;
           letras[25]++;
       } 
       */
    }
    
    

    //aplicando bubblesort para ordenar os valores no vetor
    for (int i = 0; i < 26; i++){
        for (int j = 0; j < 26 - i - 1; j++){
            if (letras[j+1] > letras[j]){
                
                tmp = letras[j+1];
                letras[j+1] = letras[j];
                letras[j] = tmp;

                tmpNome = nomeLetras[j+1];
                nomeLetras[j+1] = nomeLetras[j];
                nomeLetras[j] = tmpNome;
            }
        }
    }

    //saida de dados da tabela de letras mais frequentes
    if (temLetra == 0){
        printf("Não existe nenhuma letra neste texto.\n\n");
    } 
    else {
        printf("\n\nLETRAS QUE MAIS APARECEM NO TEXTO:\n");
        for (int i = 0; i < 26; i++){
            if(letras[i] == letras[0]){
                printf("%c\t%d vezes\n", nomeLetras[i], letras[i]);
            }
        }
        printf("\n\n");
    }

    return 0;
}