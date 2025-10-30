#include <stdio.h>

int main(){
    int  turisticos1, turisticos2, opcao;
    unsigned int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    char pais1[20], pais2[20];
   

// As linhas abaixo são para a coleta de dados da Carta 1

    printf("Carta 1 \n");
    printf("\n");
    printf("Insira os dados da primeira carta \n");
    printf("\n");

    printf("Insira o nome do país: ");
    scanf("%s", pais1);

    printf("Insira a população: ");
    scanf("%d", &populacao1);

    printf("Insira a área em km²: ");
    scanf("%f", &area1);

    printf("Insira o PIB: ");
    scanf("%f", &pib1);

    printf("Insira o número de pontos turisticos: ");
    scanf("%d", &turisticos1);

// Linhas para calcular DENSIDADE POPULACIONAL

    float densidade1 = (float) populacao1 / area1;

// As linhas abaixo são para a coleta de dados da Carta 2

    printf("\n");
    printf("Carta 2 \n");
    printf("\n");
    printf("Insira os dados da segunda carta \n");
    printf("\n");
    
    printf("Insira o nome do país: ");
    scanf(" %s", pais2);

    printf("Insira a população: ");
    scanf("%d", &populacao2);

    printf("Insira a área em km²: ");
    scanf("%f", &area2);

    printf("Insira o PIB: ");
    scanf("%f", &pib2);

    printf("Insira o número de pontos turisticos: ");
    scanf("%d", &turisticos2);

// Linhas para calcular DENSIDADE POPULACIONAL

    float densidade2 = (float) populacao2 / area2;

// As linhas abaixo são para exibição do menu interativo.
printf("========== Selecione qual atibuto deseja comparar ==========\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Pontos Turisticos\n");
printf("5. Densidade Demográfica\n");
printf("Escolha: ");
scanf("%d", &opcao);


// As linhas abaixo são para comparação com IF e ELSE dos atributos das cartas 1 e 2.

    switch (opcao){

    case 1: 

        printf("%s ===== %s\n", pais1, pais2);
        printf("===== População =====\n");
        printf("%u ===== %u\n", populacao1, populacao2);
        if(populacao1 > populacao2){
        printf("A carta 1 venceu!\n");
        } else if (populacao1 < populacao2) {
               printf ("A carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }
    break;

    case 2:

        printf("%s ===== %s\n", pais1, pais2);
        printf("===== Área =====\n");
        printf("%f ===== %f\n", area1, area2);
        if(area1 > area2){
        printf("A carta 1 venceu!\n");
    } else if (area1 < area2) {
               printf ("A carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }
    break;

    case 3:

        printf("%s ===== %s\n", pais1, pais2);
        printf("===== P.I.B. =====\n");
        printf("%f ===== %f\f", pib1, pib2);
        if(pib1 > pib2){
        printf("A carta 1 venceu!\n");
        } else if (pib1 < pib2) {
               printf ("A carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }
    break;
    
    case 4:

        printf("%s ===== %s\n", pais1, pais2);
        printf("===== Pontos Turisticos =====\n");
        printf("%d ===== %d\n", turisticos1, turisticos2);
        if(turisticos1 > turisticos2){
        printf("A carta 1 venceu!\n");
        } else if (turisticos1 < turisticos2) {
               printf ("A carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }
    break;

    case 5:

        printf("%s ===== %s\n", pais1, pais2);
        printf("===== Densidade Demográfica =====\n");
        printf("%f ===== %f\n", densidade1, densidade2);
        if(densidade1 < densidade2){
        printf("A carta 1 venceu!\n");
        } else if (densidade1 > densidade2) {
               printf ("A carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }
    break;
    
    default:
        printf("Opção Inválida!\n");
}
    return 0;

}
