#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
    
    int main() {

//ATRIBUTOS CARTA 1

    char estado1[3], codigo1[4], cidade1[50];
    float area1, pib1, densidade_populacional1, pib_per_capita1, super_poder1;
    int pontos_turisticos1;
    unsigned long int populacao1;

//ATRIBUTOS CARTA 2

    char estado2[3], codigo2[4], cidade2[50];
    float area2, pib2, densidade_populacional2, pib_per_capita2, super_poder2;
    int pontos_turisticos2;
    unsigned long int populacao2;

//VARIAVEIS DE COMPARAÇÃO

    unsigned long int resultado_populacao;
    float resultado_area, resultado_pib, resultado_densidade_populacional, resultdo_pib_per_capita, resultado_super_poder;
    int resultado_pontos_turisticos;

//DECLARAÇÃO DOS ATRIBUTOS CARTA 1

        printf("Informe as caracteristicas da carta 1\n");
        printf("Estado: ");
        scanf("%s",estado1);
        
        printf("Código: ");
        scanf("%s", codigo1);

        printf("Cidade: ");
        scanf(" %[^\n]", cidade1);

        printf("População: ");
        scanf("%lu", &populacao1);
        
        printf("Área: ");
        scanf("%f", &area1);

        printf("PIB em bilhões de reais: ");
        scanf("%f", &pib1);

        printf("Número de Pontos Turísticos: ");
        scanf("%d", &pontos_turisticos1);
      
//DECLARAÇÃO DOS ATRIBUTOS CARTA 2

        printf("Informe as caracteristicas da carta 2\n");
        printf("Estado: ");
        scanf("%s",estado2);
        
        printf("Código: ");
        scanf("%s", codigo2);

        printf("Cidade: ");
        scanf(" %[^\n]", cidade2);

        printf("População: ");
        scanf("%lu", &populacao2);
        
        printf("Área: ");
        scanf("%f", &area2);

        printf("PIB em bilhões de reais: ");
        scanf("%f", &pib2);

        printf("Número de Pontos Turísticos: ");
        scanf("%d", &pontos_turisticos2);

//CÁLCULO DA DENSIDADE POPULACIONAL E PIB PER CAPITA DA CARTA 1

        densidade_populacional1: 
        if (area1 != 0) {
                densidade_populacional1 = (float)populacao1 / area1;
        } else {
                densidade_populacional1 = 0.0f; // Evita divisão por zero e define um valor seguro    
                printf("Atenção: Área da Carta 1 é zero! Densidade populacional definida como 0.\n");
        }
        pib_per_capita1:
        if (populacao1 != 0) {
                pib_per_capita1 = (pib1 * 1000000000.0f) / (float)populacao1;
        } else {    
                pib_per_capita1 = 0.0f; // Evita divisão por zero e define um valor seguro    
                printf("Atenção: População da Carta 1 é zero! PIB per Capita definida como 0.\n");
        }

//CÁLCULO DA DENSIDADE POPULACIONAL E PIB PER CAPITA DA CARTA 2
      
        densidade_populacional2:
        if (area2 != 0){
                densidade_populacional2 = (float)populacao2 / area2; 
        } else {
                densidade_populacional2 = 0.0f; // Evita divisão por zero e define um valor seguro    
                printf("Atenção: Área da Carta 2 é zero! Densidade populacional definida como 0.\n");
        }
        pib_per_capita2:
        if (populacao2 != 0) {
                pib_per_capita2 = (pib2 * 1000000000.0f) / (float)populacao2;
        } else {
                pib_per_capita2 = 0.0f; // Evita divisão por zero e define um valor seguro    
                printf("Atenção: População da Carta 2 é zero! PIB per Capita definida como 0.\n");
        }

//CÁLCULO DO SUPER PODER DA CARTA 1

        super_poder1:
        if (densidade_populacional1 != 0) {
                super_poder1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + densidade_populacional1 + pib_per_capita1 + (1.0f / densidade_populacional1);
        } else {
                super_poder1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + densidade_populacional1 + pib_per_capita1;
                printf("Atenção: Densidade populacional da Carta 1 é zero. Super Poder calculado sem o inverso da densidade.\n");
        }

//CÁLCULO DO SUPER PODER DA CARTA 2
        super_poder2:
        if (densidade_populacional2 != 0) {
                super_poder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + densidade_populacional2 + pib_per_capita2 + (1.0f / densidade_populacional2);
        } else {
                super_poder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + densidade_populacional2 + pib_per_capita2;
                printf("Atenção: Densidade populacional da Carta 2 é zero. Super Poder calculado sem o inverso da densidade.\n");
        }
        
//APRESENTAÇÃO DOS ATRIBUTOS DECLARADOS

    printf("Atributos declarados:\n\n");

//CARTA 1
        printf("Carta 1\n");
        printf("Estado: %s\n",estado1);
        printf("Código: %s\n",codigo1);
        printf("Cidade: %s\n",cidade1);
        printf("População: %lu\n",populacao1);
        printf("Área: %.2fkm²\n",area1);
        printf("PIB: %.2f bilhões de reais\n",pib1);
        printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
        printf("PIB per Capita: R$%.2f\n", pib_per_capita1);
        printf("Super Poder: %.2f \n\n", super_poder1);

//CARTA 2       
        
        printf("Carta 2\n");
        printf("Estado: %s\n",estado2);
        printf("Código: %s\n",codigo2);
        printf("Cidade: %s\n",cidade2);
        printf("População: %lu\n",populacao2);
        printf("Área: %.2fkm²\n",area2);
        printf("PIB: %.2f bilhões de reais\n",pib2);
        printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
        printf("PIB per Capita: R$%.2f\n", pib_per_capita2);
        printf("Super Poder: %.2f \n\n", super_poder2);

//EXIBIÇÃO DAS COMPARAÇÕES
        printf("Comparação das Cartas:\n\n");
        
        printf("Carta 1 - %s - População: %lu\n", cidade1, populacao1);
        printf("Carta 2 - %s - População: %lu\n", cidade2, populacao2);
        if (populacao1 > populacao2){
                printf("Resultado: Carta 1 - (%s) Venceu!\n\n", cidade1);
        }
        else if (populacao1 < populacao2){
                printf("Resultado: Carta 2 - (%s) Venceu!\n\n", cidade2);
        } else {
                printf("Resultado: Empate!\n\n");
        }

        printf("Carta 1 - %s - Area: %.2fkm²\n", cidade1, area1);
        printf("Carta 2 - %s - Area: %.2fkm²\n", cidade2, area2);
        if (area1 > area2){
                printf("Resultado: Carta 1 - (%s) Venceu!\n\n", cidade1);
        } 
        else if (area1 < area2){
                printf("Resultado: Carta 2 - (%s) Venceu!\n\n", cidade2);
        } else {
                printf("Resultado: Empate!\n\n");
        }

        printf("Carta 1 - %s - PIB: %.2f bilhoes de reais\n", cidade1, pib1);
        printf("Carta 2 - %s - PIB: %.2f bilhoes de reais\n", cidade2, pib2);
        if (pib1 > pib2){
                printf("Resultado: Carta 1 - (%s) Venceu!\n\n", cidade1);
        } 
        else if (pib1 < pib2){
                printf("Resultado: Carta 2 - (%s) Venceu!\n\n", cidade2);
        } else {
                printf("Resultado: Empate!\n\n");
        }

        printf("Carta 1 - %s - N° de pontos turisticos: %.d\n", cidade1, pontos_turisticos1);
        printf("Carta 2 - %s - N° de pontos turisticos: %.d\n", cidade2, pontos_turisticos2);
        if (pontos_turisticos1 > pontos_turisticos2){
                printf("Resultado: Carta 1 - (%s) Venceu!\n\n", cidade1);
        } 
        else if (pontos_turisticos1 < pontos_turisticos2){
                printf("Resultado: Carta 2 - (%s) Venceu!\n\n", cidade2);
        } else {
                printf("Resultado: Empate!\n\n");
        }

        printf("Carta 1 - %s - Densidade populacional: %.2f hab/km²\n", cidade1, densidade_populacional1);
        printf("Carta 2 - %s - Densidade populacional: %.2f hab/km²\n", cidade2, densidade_populacional2);
        if (densidade_populacional1 < densidade_populacional2){
                printf("Resultado: Carta 1 - (%s) Venceu!\n\n", cidade1);
        } 
        else if (densidade_populacional1 > densidade_populacional2){
                printf("Resultado: Carta 2 - (%s) Venceu!\n\n", cidade2);
        } else {
                printf("Resultado: Empate!\n\n");
        }

        printf("Carta 1 - %s - PIB per capita: R$%.2f\n", cidade1, pib_per_capita1);
        printf("Carta 2 - %s - PIB per capita: R$%.2f\n", cidade2, pib_per_capita2);
        if (pib_per_capita1 > pib_per_capita2){
                printf("Resultado: Carta 1 - (%s) Venceu!\n\n", cidade1);
        } 
        else if (pib_per_capita1 < pib_per_capita2){
                printf("Resultado: Carta 2 - (%s) Venceu!\n\n", cidade2);
        } else {
                printf("Resultado: Empate!\n\n");
        }

        printf("Carta 1 - %s - Super poder: %.2f\n", cidade1, super_poder1);
        printf("Carta 2 - %s - Super poder: %.2f\n", cidade2, super_poder2);
        if (super_poder1 > super_poder2){
                printf("Resultado: Carta 1 - (%s) Venceu!\n\n", cidade1);
        } 
        else if (super_poder1 < super_poder2){
                printf("Resultado: Carta 2 - (%s) Venceu!\n\n", cidade2);
        } else {
                printf("Resultado: Empate!\n\n");
        }

        return 0;
}
