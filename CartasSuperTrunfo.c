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


        // ----------- MENU INTERATIVO -----------
        int escolha;
printf("====== COMPARAÇÃO DE CARTAS ======\n");
printf("1 - (População)\n");
printf("2 - (Area)\n");
printf("3 - (PIB)\n");
printf("4 - (Número de Pontos Turísticos)\n");
printf("5 - (Densidade Demográfica)\n");

printf("\nEscolha uma opção:\n");
scanf("%d", &escolha);


// COMPARAÇÂO DOS ATRIBUTOS ESCOLHIDOS PELO USUÁRIO
switch (escolha)
{
case 1:
    printf("\nAtributo escolhido: (População)\n\n");
    printf("França - %s: %lu\n", franca.cidade, franca.populacao);
    printf("Brasil - %s: %lu\n\n", brasil.cidade, brasil.populacao);

        if (franca.populacao > brasil.populacao) {
            printf("França venceu!!\n");
        } else if (franca.populacao < brasil.populacao) {
            printf("Brasil venceu!!\n");
        } else {
            printf("Empate!\n");
        }
        break;
case 2:
    printf("\nAtributo escolhido: (Área)\n\n");
    printf("França - %s: %.2f km²\n", franca.cidade, franca.area);
    printf("Brasil - %s: %.2f km²\n\n", brasil.cidade, brasil.area);

        if (franca.area > brasil.area) {
            printf("França venceu!!\n");
        } else if (franca.area < brasil.area) {
            printf("Brasil venceu!!\n");
        } else {
            printf("Empate!\n");
        }
        break;
case 3:
    printf("\nAtributo escolhido: (PIB)\n\n");
    printf("França - %s: %.2f trilhões\n", franca.cidade, franca.pib);
    printf("Brasil - %s: %.2f bilhões de reais\n\n", brasil.cidade, brasil.pib);

        if (franca.pib > brasil.pib) {
            printf("França venceu!!\n");
        } else if (franca.pib < brasil.pib) {
            printf("Brasil venceu!!\n");
        } else {
            printf("Empate!\n");
        }
        break;
case 4:
    printf("\nAtributo escolhido: (Pontos Turísticos)\n\n");
    printf("França - %s: %d\n", franca.cidade, franca.pontos_turisticos);
    printf("Brasil - %s: %d\n\n", brasil.cidade, brasil.pontos_turisticos);
        if (franca.pontos_turisticos > brasil.pontos_turisticos) {
            printf("França venceu!!\n");
        } else if (franca.pontos_turisticos < brasil.pontos_turisticos) {
            printf("Brasil venceu!!\n");
        } else {
            printf("Empate!\n");
        }
        break;
case 5:
    printf("\nAtributo escolhido: (Densidade Demográfica)\n\n");
    printf("França - %s: %.2f hab/km²\n", franca.cidade, franca.densidade_populacional);
    printf("Brasil - %s: %.2f hab/km²\n\n", brasil.cidade, brasil.densidade_populacional);

        if (franca.densidade_populacional < brasil.densidade_populacional) {
            printf("França venceu!!\n");
        } else if (franca.densidade_populacional > brasil.densidade_populacional) {
            printf("Brasil venceu!!\n");
        } else {
            printf("Empate!\n");
        }
        break;
default:
    printf("Opção inválida\n");
    break;
}
    return 0;
}