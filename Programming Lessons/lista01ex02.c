/*
2.Área de Terrenos
Maria precisa calcular a área de terrenos. Os terrenos podem ser quadrados ou
retangulares. Construa um programa para calcular a área do terreno. Considere
que, se o terreno for quadrado, será necessário apenas a entrada de uma das
dimensões.
*/
 
 #include <stdio.h>

 int main(){

     int forma;
     float comprimento, largura;

     printf("=== CALCULADORA DE ÁREA ===");
     printf("\nSe terreno for quadrado, digite um número qualquer, caso contrário digite 0: ");
     scanf("%d", &forma);

     if (forma != 0){
         printf("Informe o comprimento do terreno, em metros: ");
         scanf("%f", &comprimento);
         printf("Informe a largura do terreno, em metros: ");
         scanf("%f", &largura);

         printf("\nA área do terreno é de %.2f metros quadrados.\n\n", comprimento * largura);
     } else {
         printf("Informe qualquer lado do terreno, em metros: ");
         scanf("%f", &comprimento);

         printf("\nA área do terreno é de %.2f metros quadrados.\n\n", comprimento * comprimento);
     }

     return 0;
 }