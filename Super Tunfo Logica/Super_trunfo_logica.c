#include <stdio.h>

int main(){
    int turisticos1 = 78, turisticos2 = 37, opcao, opcao2, resultado1 = 0, resultado2 = 0;
    unsigned int populacao1 = 213421037, populacao2 = 19658835;
    float area1 = 8510345538, area2 = 756102, pib1 = 7400000000000, pib2 = 272460000000;
    char pais1[20] = "Brasil", pais2[20] = "Chile";
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;
    float valor1_attr1 = 0, valor2_attr1 = 0, valor1_attr2 = 0, valor2_attr2 = 0;
    char atributo1[30], atributo2[30];

    // Primeiro menu
    printf("========== Selecione qual o primeiro atibuto que deseja comparar ==========\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    switch (opcao){
        case 1:
            printf("Você escolheu População!\n");
            resultado1 = populacao1 > populacao2 ? 1 : 0;
            valor1_attr1 = populacao1;
            valor2_attr1 = populacao2;
            sprintf(atributo1, "População");
            break;
        case 2:
            printf("Você escolheu Área!\n");
            resultado1 = area1 > area2 ? 1 : 0;
            valor1_attr1 = area1;
            valor2_attr1 = area2;
            sprintf(atributo1, "Área");
            break;
        case 3:
            printf("Você escolheu P.I.B.!\n");
            resultado1 = pib1 > pib2 ? 1 : 0;
            valor1_attr1 = pib1;
            valor2_attr1 = pib2;
            sprintf(atributo1, "PIB");
            break;
        case 4:
            printf("Você escolheu Pontos Turisticos!\n");
            resultado1 = turisticos1 > turisticos2 ? 1 : 0;
            valor1_attr1 = turisticos1;
            valor2_attr1 = turisticos2;
            sprintf(atributo1, "Pontos Turísticos");
            break;
        case 5:
            printf("Você escolheu Densidadem Demográfica!\n");
            resultado1 = densidade1 > densidade2 ? 1 : 0;
            valor1_attr1 = densidade1;
            valor2_attr1 = densidade2;
            sprintf(atributo1, "Densidade Demográfica");
            break;
        default:
            printf("Opção Inválida!\n");
            return 1;
    }

    // Segundo menu
    printf("========== Selecione qual o segundo atibuto que deseja comparar ==========\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Escolha: ");
    scanf("%d", &opcao2);

    if(opcao2 == opcao){
        printf("Você escolheu o mesmo atributo!\n");
        return 1;
    } else {
        switch (opcao2){
            case 1:
                printf("Você escolheu População!\n");
                resultado2 = populacao1 > populacao2 ? 1 : 0;
                valor1_attr2 = populacao1;
                valor2_attr2 = populacao2;
                sprintf(atributo2, "População");
                break;
            case 2:
                printf("Você escolheu Área!\n");
                resultado2 = area1 > area2 ? 1 : 0;
                valor1_attr2 = area1;
                valor2_attr2 = area2;
                sprintf(atributo2, "Área");
                break;
            case 3:
                printf("Você escolheu P.I.B.!\n");
                resultado2 = pib1 > pib2 ? 1 : 0;
                valor1_attr2 = pib1;
                valor2_attr2 = pib2;
                sprintf(atributo2, "PIB");
                break;
            case 4:
                printf("Você escolheu Pontos Turisticos!\n");
                resultado2 = turisticos1 > turisticos2 ? 1 : 0;
                valor1_attr2 = turisticos1;
                valor2_attr2 = turisticos2;
                sprintf(atributo2, "Pontos Turísticos");
                break;
            case 5:
                printf("Você escolheu Densidadem Demográfica!\n");
                resultado2 = densidade1 > densidade2 ? 1 : 0;
                valor1_attr2 = densidade1;
                valor2_attr2 = densidade2;
                sprintf(atributo2, "Densidade Demográfica");
                break;
            default:
                printf("Opção Inválida!\n");
                return 1;
        }
    }

    // Exibição final
    int soma1 = resultado1 + resultado2;
    int soma2 = 2 - soma1;

    printf("\n========== RESULTADO ==========\n");
    printf("Países: %s vs %s\n", pais1, pais2);
    printf("%-25s %-15.2f %-15.2f\n", atributo1, valor1_attr1, valor2_attr1);
    printf("%-25s %-15.2f %-15.2f\n", atributo2, valor1_attr2, valor2_attr2);
    printf("Soma dos pontos: %s = %d, %s = %d\n", pais1, soma1, pais2, soma2);

    if (soma1 > soma2)
        printf("Vencedor: %s\n", pais1);
    else if (soma2 > soma1)
        printf("Vencedor: %s\n", pais2);
    else
        printf("Empate!\n");

    return 0;
}