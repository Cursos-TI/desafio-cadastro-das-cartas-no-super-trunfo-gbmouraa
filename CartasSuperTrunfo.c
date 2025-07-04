#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main()
{
  // Declaração de váriaveis do tipo char
  char estado_1[3], estado_2[3];
  char cod_1[5], cod_2[5];
  char cidade_1[50], cidade_2[50];

  // Declaração de váriaveis do tipo int
  int populacao_1, populacao_2, qtd_pontos_turisticos_1, qtd_pontos_turisticos_2;

  // Declaração de váriaveis do tipo float
  float area_1, area_2, pib_1, pib_2;

  // Cadastro das Cartas:
  // Lendo os dados da carta 1
  printf("Digite uma letra para o estado da carta 1: \n");
  scanf("%2s", estado_1);

  printf("Digite um código para a carta 1, o código deve ser a letra do estado seguida de um número, ex: A01: \n");
  scanf("%4s", cod_1);

  printf("Digite o nome da cidade da carta 1: \n");
  scanf(" %[^\n]", cidade_1);

  printf("Digite a população da cidade da carta 1: \n");
  scanf("%i", &populacao_1);

  printf("Digite a área da cidade da carta 1: \n");
  scanf("%f", &area_1);

  printf("Digite o PIB da cidade da carta 1: \n");
  scanf("%f", &pib_1);

  printf("Digite o número de pontos turísticos da cidade da carta 1: \n");
  scanf("%i", &qtd_pontos_turisticos_1);

  // print para fazer para facilitar a visualização no terminal
  printf("*******************\n");

  // Lendo os dados da carta 2
  printf("Digite uma letra para o estado da carta 2: \n");
  scanf("%2s", estado_2);

  printf("Digite um código para a carta 2, o código deve ser a letra do estado seguida de um número, ex: B02: \n");
  scanf("%4s", cod_2);

  printf("Digite o nome da cidade da carta 2: \n");
  scanf(" %[^\n]", cidade_2);

  printf("Digite a população da cidade da carta 2: \n");
  scanf("%i", &populacao_2);

  printf("Digite a área da cidade da carta 2: \n");
  scanf("%f", &area_2);

  printf("Digite o PIB da cidade da carta 2: \n");
  scanf("%f", &pib_2);

  printf("Digite o número de pontos turísticos da cidade da carta 2: \n");
  scanf("%i", &qtd_pontos_turisticos_2);

  // Exibição dos Dados das Cartas:
  printf("==== Carta 1: ====\n");
  printf("Estado: %s \n", estado_1);
  printf("Código: %s \n", cod_1);
  printf("Nome da cidade: %s \n", cidade_1);
  printf("População: %i \n", populacao_1);
  printf("Área: %f \n", area_1);
  printf("PIB: %f bilhões de reais \n", pib_1);
  printf("Número de pontos turísticos: %i \n", qtd_pontos_turisticos_1);

  printf("==== Carta 2: ====\n");
  printf("Estado: %s \n", estado_2);
  printf("Código: %s \n", cod_2);
  printf("Nome da cidade: %s \n", cidade_2);
  printf("População: %i \n", populacao_2);
  printf("Área: %f \n", area_2);
  printf("PIB: %f bilhões de reais \n", pib_2);
  printf("Número de pontos turísticos: %i \n", qtd_pontos_turisticos_2);

  return 0;
}
