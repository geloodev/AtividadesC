/*
Utilizando matriz, faça um programa que leia duas notas de dez alunos e 
depois  calcule  e  armazene  a  média  dos  mesmos.  Você  deve  utilizar  uma 
matriz de 10 linhas por 3 colunas.

- Cada linha representará as notas de um aluno. 
- Na  primeira  coluna  serão  armazenadas  as  notas  da  primeira 
  avaliação,  na  segunda  coluna  as  notas  da  segunda  avaliação  e  na 
  terceira coluna a média calculada.
- Para finalizar, exiba a quantidade de alunos com média abaixo de 6.0, 
  a  quantidade acima de 6.0 e calcule a média da turma fazendo a 
  média aritmética entre as médias dos alunos
*/

#include <stdio.h>

int main(){

    float media_sala;
    float matriz[10][3];
    int abaixo6 = 0, acima6 = 0, total_sala = 0; 

    //LEITURA 
    for(int l = 0; l <= 9; l++){
      printf("\nPara o %dº aluno, digite a 1ª nota: ", l+1);
      scanf("%f", &matriz[l][0]);

      printf("Para o %dº aluno, digite a 2ª nota: ", l+1);
      scanf("%f", &matriz[l][1]);

      matriz[l][2] = (matriz[l][0] + matriz[l][1]) / 2.0;

      total_sala = total_sala + matriz[l][2];

      if(matriz[l][2] < 6.0){
        abaixo6++;
      } else {
        acima6++;
      }
    }
    
    //ESCRITA
    printf("\n1ª NOTA\t\t2ª NOTA\t\tMÉDIA\n");

    for(int l = 0; l <= 9; l++){
      for(int c = 0; c <= 2; c++){
        printf("%.1f\t\t", matriz[l][c]);
      }
      printf("\n");
    }

    media_sala = total_sala / 10.0;
    
    printf("\nQuantidade de alunos com média abaixo de 6.0 = %d \n", abaixo6);
    printf("Quantidade de alunos com média acima de 6.0 = %d \n", acima6);
    printf("Média geral dos alunos = %.1f \n\n", media_sala);
    
    return 0;

}