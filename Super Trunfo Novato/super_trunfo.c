#include <stdio.h>

int main(){
    int populacao1, populacao2, turisticos1, turisticos2;
    float area1, area2, pib1, pib2;
    char estado1, estado2;
    char carta1[4], carta2[4];
    char cidade1[30], cidade2[30];

//O numeral na frente de cada variável representa para qual carta ela está designada.

//As linhas abaixo são para a coleta de dados da Carta 1

    printf("Carta 1 \n");
    printf("\n");
    printf("Insira os dados da primeira carta \n");
    printf("\n");
    printf("Insira a letra do estado: ");
    scanf("%c", &estado1);

    printf("Insira o código da carta: ");
    scanf("%s", &carta1);

    printf("Insira o nome da cidade: ");
    getchar();/*Utilizado para consumir o \n que estava em buffer fazendo com que a linha fosse
    preenchida automaticamente.*/
    scanf("%s", cidade1);

    printf("Insira a população: ");
    scanf("%d", &populacao1);

    printf("Insira a área em km²: ");
    scanf("%f", &area1);

    printf("Insira o PIB: ");
    scanf("%f", &pib1);

    printf("Insira o número de pontos turisticos: ");
    scanf("%d", &turisticos1);

//Linhas para calcular DENSIDADE POPULACIONAL e PIB PER CAPITA.

    float densidade1 = (float) populacao1 / area1;
    float capita1 = (float) pib1 / populacao1;
    float densidadecomp1 = (float) area1 / populacao1;

//As linhas abaixo são para a coleta de dados da Carta 2

    printf("\n");
    printf("Carta 2 \n");
    printf("\n");
    printf("Insira os dados da segunda carta \n");
    printf("\n");
    
    printf("Insira a letra do estado: ");
    scanf(" %c", &estado2);

    printf("Insira o código da carta: ");
    scanf(" %3s", &carta2);

    printf("Insira o nome da cidade: ");
    getchar();/*Utilizado para consumir o \n que estava em buffer fazendo com que a linha fosse
    preenchida automaticamente.*/
    scanf("%s", cidade2);

    printf("Insira a população: ");
    scanf("%d", &populacao2);

    printf("Insira a área em km²: ");
    scanf("%f", &area2);

    printf("Insira o PIB: ");
    scanf("%f", &pib2);

    printf("Insira o número de pontos turisticos: ");
    scanf("%d", &turisticos2);

//Linhas para calcular DENSIDADE POPULACIONAL e PIB PER CAPITA.

    float densidade2 = (float) populacao2 / area2;
    float capita2 = (float) pib2 / populacao2;
    float densidadecomp2 = (float) area2 / populacao2;

//As linhas abaixo são para calcular o "Super Poder" da carta 1.

    float superpoder1 = (float) populacao1 + area1 + pib1 + turisticos1 + densidadecomp1 + capita1;

//As linhas abaixo são para calcular o "Super Poder" da carta 2.

    float superpoder2 = (float) populacao2 + area2 + pib2 + turisticos2 + densidadecomp2 + capita2;

    //As linhas abaixo são para exibição dos dados coletados nas variáveis da Carta 1

    printf("\n");
    printf("Carta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", carta1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", turisticos1);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", capita1);
    printf("Super Poder Carta 1: %.2f\n", superpoder1);

//As linhas abaixo são para exibição dos dados coletados nas variáveis da Carta 2

    printf("\n");
    printf("Carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", carta2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", turisticos2);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", capita2);
    printf("Super Poder Carta 2: %.2f\n", superpoder2); 

//As linha abaixo são para comparação dos valores dos atributos entre as cartas 1 e 2
 
    int resultadoPopulacao, resultadoArea, resultadoPib, resultadoTuristico, resultadoDensidade, resultadoCapita, resultadoSuper;

    resultadoPopulacao = populacao1 > populacao2;
    resultadoArea = area1 > area2;
    resultadoPib = pib1 > pib2;
    resultadoTuristico = turisticos1 > turisticos2;
    resultadoDensidade = densidadecomp1 < densidadecomp2;
    resultadoCapita = capita1 > capita2;
    resultadoSuper = superpoder1 > superpoder2;

//As linhas abaixo são para exibição das comparações entre as cartas 1 e 2.

    printf("\n");
    printf("Comparação de Cartas\n");
    printf("População: %d\n", resultadoPopulacao);
    printf("Área: %d\n", resultadoArea);
    printf("PIB: %d\n", resultadoPib);
    printf("Pontos Turísticos %d\n", resultadoTuristico);
    printf("Densidade Populacional: %d\n", resultadoDensidade);
    printf("PIB per Capita: %d\n", resultadoCapita);
    printf("Super Poder: %d\n", resultadoSuper);

    return 0;
}