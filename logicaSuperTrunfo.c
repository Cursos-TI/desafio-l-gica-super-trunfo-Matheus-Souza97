#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
    
 int main() {

//ATRIBUTOS CARTA 1

    char estado1[10], codigo1[10], cidade1[50];
    float area1, pib1, densidade_populacional1, pib_per_capita1, super_poder1;
    int pontos_turisticos1;
    unsigned long int populacao1;

//ATRIBUTOS CARTA 2

    char estado2[10], codigo2[10], cidade2[50];
    float area2, pib2, densidade_populacional2, pib_per_capita2, super_poder2;
    int pontos_turisticos2;
    unsigned long int populacao2;

//VARIAVEl DE COMPARAÇÃO
    char sim_nao;
    int opcao1, opcao2, iniciar, resultado1=0, resultado2=0;
    float soma1=0, soma2=0, soma3=0, soma4=0;
    float carta1=0, carta2=0;
        printf("======================================================\n");
        printf("*** Bem Vindo ao SUPER TRUNFO - PAÍSES ***\n");
        printf("======================================================\n\n");
        printf("1. Jogar\n");
        printf("2. Ver Regras\n");
        printf("Escolha: ");
        scanf("%d", &iniciar);
        printf("\n\n");
// MENU INICIAL
        switch (iniciar)
        {
        case 1:
                printf("===============================================\n");
                printf("Para esse duelo de cartas, escolha dois\n");
                printf("atributos para batalhar com seu adversario,\n");
                printf("vence quem somar mais pontos entre a compração\n");
                printf("individual e a soma dos atributos.\n");
                printf("Boa Sorte!\n");
                printf("===============================================\n\n");

        //DECLARAÇÃO DOS ATRIBUTOS CARTA 1

                printf("Informe os atributos da carta 1\n");
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

                printf("Informe os atributos da carta 2\n");
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

                //densidade_populacional1
                if (area1 != 0) {
                        densidade_populacional1 = (float)populacao1 / area1;
                } else {
                        densidade_populacional1 = 0.0f; // Evita divisão por zero e define um valor seguro    
                        printf("Atenção: Área da Carta 1 é zero! Densidade populacional definida como 0.\n");
                }
                //pib_per_capita1
                if (populacao1 != 0) {
                        pib_per_capita1 = (pib1 * 1000000000.0f) / (float)populacao1;
                } else {    
                        pib_per_capita1 = 0.0f; // Evita divisão por zero e define um valor seguro    
                        printf("Atenção: População da Carta 1 é zero! PIB per Capita definida como 0.\n");
                }

        //CÁLCULO DA DENSIDADE POPULACIONAL E PIB PER CAPITA DA CARTA 2
        
                //densidade_populacional2
                if (area2 != 0){
                        densidade_populacional2 = (float)populacao2 / area2; 
                } else {
                        densidade_populacional2 = 0.0f; // Evita divisão por zero e define um valor seguro    
                        printf("Atenção: Área da Carta 2 é zero! Densidade populacional definida como 0.\n");
                }
                //pib_per_capita2
                if (populacao2 != 0) {
                        pib_per_capita2 = (pib2 * 1000000000.0f) / (float)populacao2;
                } else {
                        pib_per_capita2 = 0.0f; // Evita divisão por zero e define um valor seguro    
                        printf("Atenção: População da Carta 2 é zero! PIB per Capita definida como 0.\n");
                }

        //CÁLCULO DO SUPER PODER DA CARTA 1

                //super_poder1
                if (densidade_populacional1 != 0) {
                        super_poder1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + densidade_populacional1 + pib_per_capita1 + (1.0f / densidade_populacional1);
                } else {
                        super_poder1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + densidade_populacional1 + pib_per_capita1;
                        printf("Atenção: Densidade populacional da Carta 1 é zero. Super Poder calculado sem o inverso da densidade.\n");
                }

        //CÁLCULO DO SUPER PODER DA CARTA 2
                //super_poder2
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

//VERIFICAÇÃO DOS ATRIBUTOS
                printf("Os atributos cadastrados estão corretos?\n");
                printf("Responda S ou N: ");
                scanf(" %c", &sim_nao);
                printf("\n\n");
                switch (sim_nao)
                {
                case 'S':
                case 's':
                //ESCOLHA DOS ATRIBUTOS PARA COMPRAÇÃO DAS CARTAS
                //CARTA 1
                        printf("Escolha o primeiro atributo a ser comparado:\n");
                        printf("1. População\n");
                        printf("2. Area\n");
                        printf("3. PIB\n");
                        printf("4. N° de pontos turisticos\n");
                        printf("5. Densidade populacional\n");
                        printf("6. PIB per capita\n");
                        printf("7. Super poder\n");
                        printf("Escolha: ");
                        scanf(" %d", &opcao1);
                        printf("\n\n");
                        //CARTA 2
                        printf("Escolha o segundo atributo a ser comparado:\n");
                        printf("1. População\n");
                        printf("2. Area\n");
                        printf("3. PIB\n");
                        printf("4. N° de pontos turisticos\n");
                        printf("5. Densidade populacional\n");
                        printf("6. PIB per capita\n");
                        printf("7. Super poder\n");
                        printf("Escolha: ");
                        scanf(" %d", &opcao2);
                        printf("\n\n");
                        //VERIFICA SE OS ATRIBUTOS FORAM REPETIDOS
                        if (opcao1 != opcao2){
                        printf("Comparação dos Atributos selecionados:\n\n");
                        
                        switch (opcao1)
                        {
                        case 1:
                                printf("*** População ***\n");
                                printf("Carta 1 - %s - População: %lu\n", cidade1, populacao1);
                                printf("Carta 2 - %s - População: %lu\n\n", cidade2, populacao2);
                                resultado1 = populacao1 > populacao2? 1 : 0;
                                soma1 = (float)populacao1;
                                soma2 = (float)populacao2;
                      
                                break;
                        case 2:
                                printf("*** Area ***\n");
                                printf("Carta 1 - %s - Area: %.2fkm²\n", cidade1, area1);
                                printf("Carta 2 - %s - Area: %.2fkm²\n\n", cidade2, area2);
                                resultado1 = area1 > area2? 1 : 0;
                                soma1 = area1;
                                soma2 = area2; 
                                               
                                break;
                        case 3:
                                printf("*** PIB ***\n");
                                printf("Carta 1 - %s - PIB: %.2f bilhoes de reais\n", cidade1, pib1);
                                printf("Carta 2 - %s - PIB: %.2f bilhoes de reais\n\n", cidade2, pib2);
                                resultado1 = pib1 > pib2? 1 : 0; 
                                soma1 = pib1;
                                soma2 = pib2;
                                                     
                                break;
                        case 4:
                                printf("*** N° de Pontos Turisticos ***\n");
                                printf("Carta 1 - %s - N° de pontos turisticos: %d\n", cidade1, pontos_turisticos1);
                                printf("Carta 2 - %s - N° de pontos turisticos: %d\n\n", cidade2, pontos_turisticos2);
                                resultado1 = pontos_turisticos1 > pontos_turisticos2? 1 : 0;
                                soma1 = (float)pontos_turisticos1;
                                soma2 = (float)pontos_turisticos2;
                                              
                                break;
                        case 5:
                                printf("*** Densidade Populacional ***\n");
                                printf("Carta 1 - %s - Densidade populacional: %.2f hab/km²\n", cidade1, densidade_populacional1);
                                printf("Carta 2 - %s - Densidade populacional: %.2f hab/km²\n\n", cidade2, densidade_populacional2);
                                resultado1 = densidade_populacional1 < densidade_populacional2? 1 : 0;
                                soma1 = densidade_populacional1;
                                soma2 = densidade_populacional2;
                                               
                                break;
                        case 6:
                                printf("*** PIB per capita ***\n");
                                printf("Carta 1 - %s - PIB per capita: R$%.2f\n", cidade1, pib_per_capita1);
                                printf("Carta 2 - %s - PIB per capita: R$%.2f\n\n", cidade2, pib_per_capita2);
                                resultado1 = pib_per_capita1 > pib_per_capita2? 1 : 0;
                                soma1 = pib_per_capita1;
                                soma2 = pib_per_capita2;
                                              
                                break;
                        case 7:
                                printf("*** Super Poder ***\n");
                                printf("Carta 1 - %s - Super poder: %.2f\n", cidade1, super_poder1);
                                printf("Carta 2 - %s - Super poder: %.2f\n\n", cidade2, super_poder2);
                                resultado1 = super_poder1 > super_poder2? 1 : 0;
                                soma1 = super_poder1;
                                soma2 = super_poder2;
                                              
                                break;
                        default:
                                printf("Opção Invalida!\n\n");
                                break;
                        }
                        //CARTA 2
                        
                        switch (opcao2)
                        {
                        case 1:
                                printf("*** População ***\n");
                                printf("Carta 1 - %s - População: %lu\n", cidade1, populacao1);
                                printf("Carta 2 - %s - População: %lu\n\n", cidade2, populacao2);
                                resultado2 = populacao1 > populacao2? 1 : 0;
                                soma3 = (float)populacao1;
                                soma4 = (float)populacao2;
                                                      
                                break;
                        case 2:
                                printf("*** Area ***\n");
                                printf("Carta 1 - %s - Area: %.2fkm²\n", cidade1, area1);
                                printf("Carta 2 - %s - Area: %.2fkm²\n\n", cidade2, area2);
                                resultado2 = area1 > area2? 1 : 0;
                                soma3 = area1;
                                soma4 = area2;
                        
                                break;
                        case 3:
                                printf("*** PIB ***\n");
                                printf("Carta 1 - %s - PIB: %.2f bilhoes de reais\n", cidade1, pib1);
                                printf("Carta 2 - %s - PIB: %.2f bilhoes de reais\n\n", cidade2, pib2);
                                resultado2 = pib1 > pib2? 1 : 0;
                                soma3 = pib1;
                                soma4 = pib2;
                
                                break;
                        case 4:
                                printf("*** N° de Pontos Turisticos ***\n\n");
                                printf("Carta 1 - %s - N° de pontos turisticos: %d\n", cidade1, pontos_turisticos1);
                                printf("Carta 2 - %s - N° de pontos turisticos: %d\n\n", cidade2, pontos_turisticos2);
                                resultado2 = pontos_turisticos1 > pontos_turisticos2? 1 : 0;
                                soma3 = (float)pontos_turisticos1;
                                soma4 = (float)pontos_turisticos2;
                        
                                break;
                        case 5:
                                printf("*** Densidade Populacional ***\n\n");
                                printf("Carta 1 - %s - Densidade populacional: %.2f hab/km²\n", cidade1, densidade_populacional1);
                                printf("Carta 2 - %s - Densidade populacional: %.2f hab/km²\n\n", cidade2, densidade_populacional2);
                                resultado2 = densidade_populacional1 < densidade_populacional2? 1 : 0;
                                soma3 = densidade_populacional1;
                                soma4 = densidade_populacional2;
                        
                                break;
                        case 6:
                                printf("*** PIB per capita ***\n\n");
                                printf("Carta 1 - %s - PIB per capita: R$%.2f\n", cidade1, pib_per_capita1);
                                printf("Carta 2 - %s - PIB per capita: R$%.2f\n\n", cidade2, pib_per_capita2);
                                resultado2 = pib_per_capita1 > pib_per_capita2? 1 : 0;
                                soma3 = pib_per_capita1;
                                soma4 = pib_per_capita2;
                                          
                                break;
                        case 7:
                                printf("*** Super Poder ***\n");
                                printf("Carta 1 - %s - Super poder: %.2f\n", cidade1, super_poder1);
                                printf("Carta 2 - %s - Super poder: %.2f\n\n", cidade2, super_poder2);
                                resultado2 = super_poder1 > super_poder2? 1 : 0;
                                soma3 = super_poder1;
                                soma4 = super_poder2;
                                       
                                break;
                        default:
                                printf("Opção Invalida!\n\n");
                                break;
                        }
                        } else {
                                printf("Os atributos não pode ser repetidos!\n\n");
                          
                              return 0;
                        }
                        //PRIMEIRA RODADA
                                carta1 = soma1 + soma3;
                                carta2 = soma2 + soma4;
                        
                        if (resultado1 == 1 && resultado2 == 1){
                                printf("*** Parabéns, Carta 1 Venceu a rodada! ***\n\n");
                        } else if (carta1 == carta2){
                                printf("*** Empate! ***\n\n");
                                printf("Como critério de desempate, a carta com maior Super Poder\n");
                                printf("vence a rodada!\n\n");
                                printf("*** Super Poder ***\n");
                                 //VERIFICAÇÃO DOS RESULTADOS
                                printf("Carta - 1 %s: %.2f\n", cidade1, super_poder1);
                                printf("Carta - 2 %s: %.2f\n", cidade2, super_poder2);
                                printf("*** Parabéns, carta %d Venceu! ***\n\n",(super_poder1 > super_poder2)? 1 : 2);
                        } else if (resultado1 == 0 && resultado2 == 0){
                                printf("*** Parabéns, Carta 2 Venceu a rodada! ***\n\n");
                        } else if (resultado1 != resultado2){
                                printf("*** Empate! ***\n\n");
                                printf("Como critério de desempate, os atributos serão somados.\n");
                                printf("E a combinação com maior valor vence a rodada!\n\n");
                                printf("*** Soma dos Atributos ***\n");
                                 //VERIFICAÇÃO DOS RESULTADOS       
                                carta1 = soma1 + soma3;
                                carta2 = soma2 + soma4;
                                printf("Carta - 1 %s: %.2f\n", cidade1, carta1);
                                printf("Carta - 2 %s: %.2f\n\n", cidade2, carta2);
                                printf("*** Parabéns, carta %d Venceu! ***\n\n",(carta1 > carta2)? 1 : 2);

                        }
                        printf("\n\n");
                        
                                break;
                        case 'N':
                        case 'n':
                                printf("Reenicie o programa novamente!\n\n");
                                break;
                }
                break;
        case 2:
                printf("=====================================================\n");
                printf("                 REGRAS DO JOGO                      \n");
                printf("=====================================================\n");
                printf("1. Duas cartas representam Paises.\n");
                printf("2. Cada carta possui os seguintes atributos:\n");
                printf("   - População\n");
                printf("   - Área\n");
                printf("   - PIB (Produto Interno Bruto)\n");
                printf("   - Número de Pontos Turísticos\n");
                printf("   - Densidade Populacional\n");
                printf("   - PIB per Capita\n");
                printf("   - Super Poder (cálculo baseado em todos os atributos)\n");
                printf("3. O jogador escolhe dois atributos diferentes para comparar:\n");
                printf("   - Um atributo para a Carta 1\n");
                printf("   - Um atributo diferente para a Carta 2\n");
                printf("4. Vence quem tiver vantagem nas comparações, de acordo com:\n");
                printf("   - Cada atributo comparado vale 1 ponto se for superior.\n");
                printf("   - Com exceção a Densidade populacional, que a menor vence.\n");
                printf("   - A carta com 2 pontos vence diretamente.\n");
                printf("   - A carta com 0 pontos perde diretamente.\n");
                printf("   - Se cada carta vencer 1 comparação, ocorre empate técnico.\n");
                printf("5. Critério de desempate (em caso de 1x1 ou empate na soma):\n");
                printf("   - A maior soma dos valores dos dois atributos comparados vence!\n");
                printf("   - Se a soma for igual, o critério final é o Super Poder.\n");
                printf("6. A carta com maior Super Poder vence o desempate.\n");
                printf("7. Se tudo empatar (incluindo Super Poder), a rodada é declarada empate.\n");
                printf("=====================================================\n\n");
                break;
        default:
                printf("Opção invalida!\n\n");
                break;
        }
                return 0;
}