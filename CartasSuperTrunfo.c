#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2

struct Carta {
    char estado;
    char cidade[50];
    char codigo[10];
    unsigned long int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_capita;
    float super_poder;
};

int main() {

    struct Carta franca;
    struct Carta brasil;

    // ---------------- CARTA 1 ----------------
    // --------------Entrada de dados--------------

    printf("***INSIRA AS INFORMAÇÕES DA CARTA 1***\n\n");

    printf("País: França\n");

    printf("Estado:\n");
    scanf(" %c", &franca.estado);

    printf("Nome da Cidade:\n");
    scanf(" %49[^\n]", franca.cidade);

    printf("Código da carta:\n");
    scanf("%s", franca.codigo);

    printf("População total:\n");
    scanf("%lu", &franca.populacao);

    printf("Área da cidade (km²):\n");
    scanf("%f", &franca.area);

    printf("PIB:\n");
    scanf("%f", &franca.pib);

    printf("Número de pontos turísticos:\n");
    scanf("%d", &franca.pontos_turisticos);

    printf("\nCarta 1 registrada com sucesso!\n");

    // Calculo Densidade Populacional e PIB per Capita
    franca.densidade_populacional = franca.populacao / franca.area;
    franca.pib_capita = (franca.pib * 1000000000) / franca.populacao;

    // Calculo do Super poder
    franca.super_poder = (float)franca.populacao +
                        franca.area +
                        franca.pib +
                        (float) franca.pontos_turisticos +
                        franca.pib_capita +
                        (1.0 / franca.densidade_populacional);



    // ---------------- CARTA 2 ----------------
    // -------------Entrada de dados--------------

    printf("***INSIRA AS INFORMAÇÕES DA CARTA 2***\n\n");

    printf("País: Brasil\n");

    printf("Estado:\n");
    scanf(" %c", &brasil.estado);

    printf("Nome da Cidade:\n");
    scanf(" %49[^\n]", brasil.cidade);

    printf("Código da carta:\n");
    scanf("%s", brasil.codigo);

    printf("População total:\n");
    scanf("%lu", &brasil.populacao);

    printf("Área da cidade (km²):\n");
    scanf("%f", &brasil.area);

    printf("PIB:\n");
    scanf("%f", &brasil.pib);

    printf("Número de pontos turísticos:\n");
    scanf("%d", &brasil.pontos_turisticos);

    //Calculo Densidade Populacional e PIB per Capita
    brasil.densidade_populacional =  brasil.populacao / brasil.area;
    brasil.pib_capita = (brasil.pib * 1000000000) /  brasil.populacao;

    // Calculo do Super poder
    brasil.super_poder = (float)brasil.populacao +
                        brasil.area +
                        brasil.pib +
                        (float) brasil.pontos_turisticos +
                        brasil.pib_capita +
                        (1.0 / brasil.densidade_populacional);

    printf("\nCarta 2 registrada com sucesso!\n");


    // ----------- EXIBIÇÃO DAS CARTAS -----------

    printf("===== EXIBIÇÃO DAS CARTAS =====\n\n");

    printf("Carta 1 - FRANÇA\n");
    printf("Estado: %c\n", franca.estado);
    printf("Cidade: %s\n", franca.cidade);
    printf("Código: %s\n", franca.codigo);
    printf("População: %lu\n", franca.populacao);
    printf("Área: %.2f km²\n", franca.area);
    printf("PIB: %.2f trilhões\n", franca.pib);
    printf("Pontos turísticos: %d\n", franca.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", franca.densidade_populacional);
    printf("PIB per Capita: %.2f\n", franca.pib_capita);
    printf("Super poder: %.2f\n\n", franca.super_poder);

    

    printf("Carta 2 - BRASIL\n");
    printf("Estado: %c\n", brasil.estado);
    printf("Cidade: %s\n", brasil.cidade);
    printf("Código: %s\n", brasil.codigo);
    printf("População: %lu\n", brasil.populacao);
    printf("Área: %.2f km²\n", brasil.area);
    printf("PIB: %.2f bilhões de reais\n", brasil.pib);
    printf("Pontos turísticos: %d\n", brasil.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", brasil.densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", brasil.pib_capita);
    printf("Super poder: %.2f\n\n", brasil.super_poder);

        // ----------- COMPARAÇÂO DAS CARTAS -----------
printf("====== COMPARAÇÂO DAS CARTAS ======\n");
printf("! ! ! Atributo: População ! ! !\n\n");

printf("Carta 1 - França: %lu\n", franca.populacao);
printf("Carta 2 - Brasil: %lu\n", brasil.populacao);

    if (franca.populacao > brasil.populacao) {
        printf("FRANÇA VENCEU!\n");
    } else {
        printf("Brasil venceu!!\n");
    }

    return 0;
}