#include <stdio.h>
#include <stdlib.h>

int main() {

  float valorVeiculo, capital, taxaJuros, valorEntrada, saldoFinanciar,
      valorJuros, saldoFinal, valorParcela, valorFinal, valorTotalMaximo,
      tempoInvestimento, salario, salarioMinimo;
  int nParcelas, escolhaMenu, voltarMenu, mesesTrabalhados, anosTrabalhados;

  do {

    printf("========== MENU DE OPÇÕES ==========\n");
    printf("1 - Financiamento de Veículo\n");
    printf("2 - Investimento\n");
    printf("3 - Empréstimo\n");
    printf("====================================\n");
    printf("Digite sua escolha (1 - 3 ou 0 para sair): ");
    scanf("%d", &escolhaMenu);

    while (escolhaMenu < 0 || escolhaMenu > 3) {
      printf("Escolha inválida. Tente novamente: ");
      scanf("%d", &escolhaMenu);
    }

    switch (escolhaMenu) {
    ///////////////////////////////////////////////////////
    // SAIR
    ///////////////////////////////////////////////////////
    case 0:
      voltarMenu = 0;
      system("cls");
      system("clear");

      break;

    ///////////////////////////////////////////////////////
    // FINANCIAMENTO DE VEÍCULO
    ///////////////////////////////////////////////////////
    case 1:
      system("cls");
      system("clear");

      printf("Informe o valor do veículo (em REAIS)\n--> ");
      scanf("%f", &valorVeiculo);

      printf("\nInforme a quantidade de parcelas\n--> ");
      scanf("%d", &nParcelas);

      printf("\nInforme a taxa de juros anual (em %%)\n--> ");
      scanf("%f", &taxaJuros);

      system("cls");
      system("clear");

      // CALCULOS
      valorEntrada = 0.2 * valorVeiculo;
      saldoFinanciar = valorVeiculo - valorEntrada;
      valorJuros = saldoFinanciar * (taxaJuros / 100.00) * (nParcelas / 12.00);
      saldoFinal = saldoFinanciar + valorJuros;
      valorParcela = saldoFinal / nParcelas;
      valorFinal = saldoFinal + valorEntrada;

      printf("========== RESULTADOS ==========\n");
      printf("> Valor do Carro: R$%.2f\n", valorVeiculo);
      printf("> Valor de Entrada: R$%.2f\n", valorEntrada);
      printf("> Saldo a Financiar: R$%.2f\n", saldoFinanciar);
      printf("> Valor de Juros: R$%.2f\n", valorJuros);
      printf("> Saldo Final: R$%.2f\n", saldoFinal);
      printf("> Valor da Parcela: R$%.2f\n", valorParcela);
      printf("> Valor Final: R$%.2f\n", valorFinal);
      printf("================================\n\n");

      do {
        printf("APERTE 1 PARA VOLTAR AO MENU OU 0 PARA SAIR: ");
        scanf("%d", &voltarMenu);

        if (voltarMenu != 0 && voltarMenu != 1) {
          printf("VALOR INVÁLIDO. TENTE NOVAMENTE!\n");
        }
      } while (voltarMenu != 0 && voltarMenu != 1);

      system("cls");
      system("clear");

      break;

    ///////////////////////////////////////////////////////
    // INVESTIMENTO
    ///////////////////////////////////////////////////////
    case 2:
      system("cls");
      system("clear");

      printf("Informe a taxa de juros simples e anual (em %%):\n--> ");
      scanf("%f", &taxaJuros);

      printf("Informe o tempo de investimento (em ANOS):\n--> ");
      scanf("%f", &tempoInvestimento);

      printf("Informe o valor a receber desejado ao fim do período:\n--> ");
      scanf("%f", &valorFinal);

      system("cls");
      system("clear");

      // CALCULOS
      capital = valorFinal / (1 + (taxaJuros * tempoInvestimento));

      printf("========== RESULTADOS ==========\n");
      printf("> Taxa de Juros Simples: %.2f%% a.a.\n", taxaJuros);
      printf("> Tempo de Investimento: %.2f anos\n", tempoInvestimento);
      printf("> Retorno desejado: R$%.2f\n", valorFinal);
      printf("\n> Capital necessário: R$%.2f\n", capital);
      printf("================================\n\n");

      do {
        printf("APERTE 1 PARA VOLTAR AO MENU OU 0 PARA SAIR: ");
        scanf("%d", &voltarMenu);

        if (voltarMenu != 0 && voltarMenu != 1) {
          printf("VALOR INVÁLIDO. TENTE NOVAMENTE!\n");
        }
      } while (voltarMenu != 0 && voltarMenu != 1);

      system("cls");
      system("clear");
      break;

    ///////////////////////////////////////////////////////
    // EMPRESTIMO
    ////////////////////////////////////////////////////
    case 3:

      salarioMinimo = 1212.00;
      nParcelas = 24;  // QUANTIDADE FIXA
      taxaJuros = 1.0; // TAXA FIXA

      printf("Informe o seu salário (em REAIS):\n--> ");
      scanf("%f", &salario);

      printf("Informe o número de meses trabalhados:\n--> ");
      scanf("%d", &mesesTrabalhados);

      anosTrabalhados = mesesTrabalhados / 12;
      int bonusMontante = (anosTrabalhados * 0.05) + 1;

      if (salario <= salarioMinimo) {
        valorTotalMaximo = 10.0 * salario;
      } else if (salario < (3.0 * salarioMinimo)) {
        valorTotalMaximo = 9.0 * salario;
      } else if (salario < (6.0 * salarioMinimo)) {
        valorTotalMaximo = 7.0 * salario;
      } else if (salario < (11.0 * salarioMinimo)) {
        valorTotalMaximo = 5.0 * salario;
      } else {
        valorTotalMaximo = 0.0;
      }

      if (valorTotalMaximo == 0.0) {
        printf("Você não tem permissão de fazer empréstimo (salário superior à "
               "10 salários mínimos).\nRetornando ao "
               "menu...\n");
        voltarMenu = 1;
      } else {

        valorTotalMaximo *= bonusMontante;

        printf("============= VALORES =======================\n");
        printf("> Valor máximo do empréstimo: R$%.2f\n", valorTotalMaximo);
        printf("> Quantidade de parcelas (FIXA): %dx\n", nParcelas);
        printf("> Juros simples: %.2f%% a.m.\n", taxaJuros);
        printf("=============================================\n");
        printf("--> Informe o valor desejo do empréstimo: ");
        scanf("%f", &capital);

        system("cls");
        system("clear");

        // CALCULOS
        valorJuros = capital * (taxaJuros / 100.00) * (nParcelas);
        valorFinal = capital * valorJuros;
        valorParcela = valorFinal / nParcelas;

        printf("============= RESULTADOS ====================\n");
        printf("  PARABÉNS PELO EMPRÉSTIMO !!!");
        printf("> Valor dos Juros: R$%.2f\n", valorJuros);
        printf("> Valor Final a pagar: R$%.2f\n", valorFinal);
        printf("> Valor de Cada Parcela: R$%.2f\n\n", valorParcela);
        printf("=============================================\n");

        do {
          printf("APERTE 1 PARA VOLTAR AO MENU OU 0 PARA SAIR: ");
          scanf("%d", &voltarMenu);

          if (voltarMenu != 0 && voltarMenu != 1) {
            printf("VALOR INVÁLIDO. TENTE NOVAMENTE!\n");
          }
        } while (voltarMenu != 0 && voltarMenu != 1);

        system("cls");
        system("clear");
      }

      break;
    }
  } while (voltarMenu == 1);
}
