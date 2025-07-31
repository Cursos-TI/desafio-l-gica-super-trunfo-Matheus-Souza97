#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
    
 #include <stdio.h>
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

//VARIAVEl DE COMPARAÇÃO
    char sim_nao;
    int opcao1, opcao2, iniciar, resultado1=0, resultado2=0, resultado3=0, resultado4=0;
    int comparacao1=0, comparacao2=0, combina1=0, combina2=0;
    float soma1=0, soma2=0, soma3=0, soma4=0;
        printf("======================================================\n");
        printf("*** Bem Vindo ao  SUPER TRUNFO - CIDADES DO BRASIL ***\n");
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
                        printf("Comparação dos Atributos selecionados:\n");
                        //VERIFICA SE OS ATRIBUTOS FORAM REPETIDOS
                        if (opcao1 != opcao2){
                        
                        switch (opcao1)
                        {
                        case 1:
                                printf("*** População ***\n");
                                printf("Carta 1 - %s - População: %lu\n", cidade1, populacao1);
                                printf("Carta 2 - %s - População: %lu\n", cidade2, populacao2);
                        if (populacao1 > populacao2){
                                resultado1++;
                                soma1 = (float)populacao1;
                                soma2 = (float)populacao2;
                                printf("Resultado: Carta 1 - (%s) Venceu!\n\n", cidade1);
                        }
                        else if (populacao1 < populacao2){
                                resultado2++;
                                soma1 = (float)populacao1;
                                soma2 = (float)populacao2;
                                printf("Resultado: Carta 2 - (%s) Venceu!\n\n", cidade2);
                        } else {
                                soma1 = (float)populacao1;
                                soma2 = (float)populacao2;
                                printf("Resultado: Empate!\n\n");                               
                        }
                                break;
                        case 2:
                                printf("*** Area ***\n");
                                printf("Carta 1 - %s - Area: %.2fkm²\n", cidade1, area1);
                                printf("Carta 2 - %s - Area: %.2fkm²\n", cidade2, area2);
                        if (area1 > area2){  
                                resultado1++;
                                soma1 = area1;
                                soma2 = area2;                           
                                printf("Resultado: Carta 1 - (%s) Venceu!\n\n", cidade1);
                        } 
                        else if (area1 < area2){  
                                resultado2++;
                                soma1 = area1;
                                soma2 = area2;                           
                                printf("Resultado: Carta 2 - (%s) Venceu!\n\n", cidade2);
                        } else {
                                soma1 = area1;
                                soma2 = area2;                           
                                printf("Resultado: Empate!\n\n");
                        }
                                break;
                        case 3:
                                printf("*** PIB ***\n");
                                printf("Carta 1 - %s - PIB: %.2f bilhoes de reais\n", cidade1, pib1);
                                printf("Carta 2 - %s - PIB: %.2f bilhoes de reais\n", cidade2, pib2);
                        if (pib1 > pib2){
                                resultado1++;
                                soma1 = pib1;
                                soma2 = pib2;
                                printf("Resultado: Carta 1 - (%s) Venceu!\n\n", cidade1);
                        } 
                        else if (pib1 < pib2){
                                resultado2++;
                                soma1 = pib1;
                                soma2 = pib2;
                                printf("Resultado: Carta 2 - (%s) Venceu!\n\n", cidade2);
                        } else {
                                soma1 = pib1;
                                soma2 = pib2;
                                printf("Resultado: Empate!\n\n");
                        }
                                break;
                        case 4:
                                printf("*** N° de Pontos Turisticos ***\n");
                                printf("Carta 1 - %s - N° de pontos turisticos: %d\n", cidade1, pontos_turisticos1);
                                printf("Carta 2 - %s - N° de pontos turisticos: %d\n", cidade2, pontos_turisticos2);
                        if (pontos_turisticos1 > pontos_turisticos2){
                                resultado1++;
                                soma1 = (float)pontos_turisticos1;
                                soma2 = (float)pontos_turisticos2;
                                printf("Resultado: Carta 1 - (%s) Venceu!\n\n", cidade1);
                        } 
                        else if (pontos_turisticos1 < pontos_turisticos2){
                                resultado2++;
                                soma1 = (float)pontos_turisticos1;
                                soma2 = (float)pontos_turisticos2;
                                printf("Resultado: Carta 2 - (%s) Venceu!\n\n", cidade2);
                        } else {
                                soma1 = (float)pontos_turisticos1;
                                soma2 = (float)pontos_turisticos2;
                                printf("Resultado: Empate!\n\n");
                        }
                                break;
                        case 5:
                                printf("*** Densidade Populacional ***\n");
                                printf("Carta 1 - %s - Densidade populacional: %.2f hab/km²\n", cidade1, densidade_populacional1);
                                printf("Carta 2 - %s - Densidade populacional: %.2f hab/km²\n", cidade2, densidade_populacional2);
                        if (densidade_populacional1 < densidade_populacional2){
                                resultado1++;
                                soma1 = densidade_populacional1;
                                soma2 = densidade_populacional2;
                                printf("Resultado: Carta 1 - (%s) Venceu!\n\n", cidade1);
                        } 
                        else if (densidade_populacional1 > densidade_populacional2){
                                resultado2++;
                                soma1 = densidade_populacional1;
                                soma2 = densidade_populacional2;
                                printf("Resultado: Carta 2 - (%s) Venceu!\n\n", cidade2);
                        } else {
                                soma1 = densidade_populacional1;
                                soma2 = densidade_populacional2;
                                printf("Resultado: Empate!\n\n");
                        }
                                break;
                        case 6:
                                printf("*** PIB per capita ***\n");
                                printf("Carta 1 - %s - PIB per capita: R$%.2f\n", cidade1, pib_per_capita1);
                                printf("Carta 2 - %s - PIB per capita: R$%.2f\n", cidade2, pib_per_capita2);
                        if (pib_per_capita1 > pib_per_capita2){
                                resultado1++;
                                soma1 = pib_per_capita1;
                                soma2 = pib_per_capita2;
                                printf("Resultado: Carta 1 - (%s) Venceu!\n\n", cidade1);
                        } 
                        else if (pib_per_capita1 < pib_per_capita2){
                                resultado2++;
                                soma1 = pib_per_capita1;
                                soma2 = pib_per_capita2;
                                printf("Resultado: Carta 2 - (%s) Venceu!\n\n", cidade2);
                        } else {
                                soma1 = pib_per_capita1;
                                soma2 = pib_per_capita2;
                                printf("Resultado: Empate!\n\n");
                        }
                                break;
                        case 7:
                                printf("*** Super Poder ***\n");
                                printf("Carta 1 - %s - Super poder: %.2f\n", cidade1, super_poder1);
                                printf("Carta 2 - %s - Super poder: %.2f\n", cidade2, super_poder2);
                        if (super_poder1 > super_poder2){
                                resultado1++;
                                soma1 = super_poder1;
                                soma2 = super_poder2;
                                printf("Resultado: Carta 1 - (%s) Venceu!\n\n", cidade1);
                        } 
                        else if (super_poder1 < super_poder2){
                                resultado2++;
                                soma1 = super_poder1;
                                soma2 = super_poder2;
                                printf("Resultado: Carta 2 - (%s) Venceu!\n\n", cidade2);
                        } else {
                                soma1 = super_poder1;
                                soma2 = super_poder2;
                                printf("Resultado: Empate!\n\n");
                        }
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
                                printf("Carta 2 - %s - População: %lu\n", cidade2, populacao2);
                        if (populacao1 > populacao2){
                                resultado3++;
                                soma3 = (float)populacao1;
                                soma4 = (float)populacao2;
                                printf("Resultado: Carta 1 - (%s) Venceu!\n\n", cidade1);
                        }
                        else if (populacao1 < populacao2){
                                resultado4++;
                                soma3 = (float)populacao1;
                                soma4 = (float)populacao2;
                                printf("Resultado: Carta 2 - (%s) Venceu!\n\n", cidade2);
                        } else {
                                soma3 = (float)populacao1;
                                soma4 = (float)populacao2;
                                printf("Resultado: Empate!\n\n");                               
                        }
                                break;
                        case 2:
                                printf("*** Area ***\n");
                                printf("Carta 1 - %s - Area: %.2fkm²\n", cidade1, area1);
                                printf("Carta 2 - %s - Area: %.2fkm²\n", cidade2, area2);
                        if (area1 > area2){  
                                resultado3++;
                                soma3 = area1;
                                soma4 = area2;                           
                                printf("Resultado: Carta 1 - (%s) Venceu!\n\n", cidade1);
                        } 
                        else if (area1 < area2){  
                                resultado4++;
                                soma3 = area1;
                                soma4 = area2;                             
                                printf("Resultado: Carta 2 - (%s) Venceu!\n\n", cidade2);
                        } else {
                                soma3 = area1;
                                soma4 = area2;                             
                                printf("Resultado: Empate!\n\n");
                        }
                                break;
                        case 3:
                                printf("*** PIB ***\n");
                                printf("Carta 1 - %s - PIB: %.2f bilhoes de reais\n", cidade1, pib1);
                                printf("Carta 2 - %s - PIB: %.2f bilhoes de reais\n", cidade2, pib2);
                        if (pib1 > pib2){
                                resultado3++;
                                soma3 = pib1;
                                soma4 = pib2;
                                printf("Resultado: Carta 1 - (%s) Venceu!\n\n", cidade1);
                        } 
                        else if (pib1 < pib2){
                                resultado4++;
                                soma3 = pib1;
                                soma4 = pib2;
                                printf("Resultado: Carta 2 - (%s) Venceu!\n\n", cidade2);
                        } else {
                                soma3 = pib1;
                                soma4 = pib2;
                                printf("Resultado: Empate!\n\n");
                        }
                                break;
                        case 4:
                                printf("*** N° de Pontos Turisticos ***\n");
                                printf("Carta 1 - %s - N° de pontos turisticos: %d\n", cidade1, pontos_turisticos1);
                                printf("Carta 2 - %s - N° de pontos turisticos: %d\n", cidade2, pontos_turisticos2);
                        if (pontos_turisticos1 > pontos_turisticos2){
                                resultado3++;
                                soma3 = (float)pontos_turisticos1;
                                soma4 = (float)pontos_turisticos2;
                                printf("Resultado: Carta 1 - (%s) Venceu!\n\n", cidade1);
                        } 
                        else if (pontos_turisticos1 < pontos_turisticos2){
                                resultado4++;
                                soma3 = (float)pontos_turisticos1;
                                soma4 = (float)pontos_turisticos2;
                                printf("Resultado: Carta 2 - (%s) Venceu!\n\n", cidade2);
                        } else {
                                soma3 = (float)pontos_turisticos1;
                                soma4 = (float)pontos_turisticos2;;
                                printf("Resultado: Empate!\n\n");
                        }
                                break;
                        case 5:
                                printf("*** Densidade Populacional ***\n");
                                printf("Carta 1 - %s - Densidade populacional: %.2f hab/km²\n", cidade1, densidade_populacional1);
                                printf("Carta 2 - %s - Densidade populacional: %.2f hab/km²\n", cidade2, densidade_populacional2);
                        if (densidade_populacional1 < densidade_populacional2){
                                resultado3++;
                                soma3 = densidade_populacional1;
                                soma4 = densidade_populacional2;
                                printf("Resultado: Carta 1 - (%s) Venceu!\n\n", cidade1);
                        } 
                        else if (densidade_populacional1 > densidade_populacional2){
                                resultado4++;
                                soma3 = densidade_populacional1;
                                soma4 = densidade_populacional2;
                                printf("Resultado: Carta 2 - (%s) Venceu!\n\n", cidade2);
                        } else {
                                soma3 = densidade_populacional1;
                                soma4 = densidade_populacional2;
                                printf("Resultado: Empate!\n\n");
                        }
                                break;
                        case 6:
                                printf("*** PIB per capita ***\n");
                                printf("Carta 1 - %s - PIB per capita: R$%.2f\n", cidade1, pib_per_capita1);
                                printf("Carta 2 - %s - PIB per capita: R$%.2f\n", cidade2, pib_per_capita2);
                        if (pib_per_capita1 > pib_per_capita2){
                                resultado3++;
                                soma3 = pib_per_capita1;
                                soma4 = pib_per_capita2;
                                printf("Resultado: Carta 1 - (%s) Venceu!\n\n", cidade1);
                        } 
                        else if (pib_per_capita1 < pib_per_capita2){
                                resultado4++;
                                soma3 = pib_per_capita1;
                                soma4 = pib_per_capita2;
                                printf("Resultado: Carta 2 - (%s) Venceu!\n\n", cidade2);
                        } else {
                                soma3 = pib_per_capita1;
                                soma4 = pib_per_capita2;
                                printf("Resultado: Empate!\n\n");
                        }
                                break;
                        case 7:
                                printf("*** Super Poder ***\n");
                                printf("Carta 1 - %s - Super poder: %.2f\n", cidade1, super_poder1);
                                printf("Carta 2 - %s - Super poder: %.2f\n", cidade2, super_poder2);
                        if (super_poder1 > super_poder2){
                                resultado3++;
                                soma3 = super_poder1;
                                soma4 = super_poder2;
                                printf("Resultado: Carta 1 - (%s) Venceu!\n\n", cidade1);
                        } 
                        else if (super_poder1 < super_poder2){
                                resultado4++;
                                soma3 = super_poder1;
                                soma4 = super_poder2;
                                printf("Resultado: Carta 2 - (%s) Venceu!\n\n", cidade2);
                        } else {
                                soma3 = super_poder1;
                                soma4 = super_poder2;
                                printf("Resultado: Empate!\n\n");
                        }
                                break;
                        default:
                                printf("Opção Invalida!\n\n");
                                break;
                        }
                        } else {
                                printf("Os atributos não pode ser repetidos!\n\n");
                          
                              return 0;
                        }
                
                        //VERIFICAÇÃO DOS RESULTADOS       
                        printf("Soma dos Atributos:\n");
                        printf("Carta - 1 %s: %.2f\n", cidade1, (soma1 + soma3));
                        printf("Carta - 2 %s: %.2f\n", cidade2, (soma2 + soma4));
                        if ((soma1 + soma3) > (soma2 + soma4)){
                                printf("Resultado: Carta 1 - (%s) Venceu!", cidade1);
                        } else if ((soma1 + soma3) < (soma2 + soma4)){
                                printf("Resultado: Carta 2 - (%s) Venceu!", cidade2);
                        } else {
                                printf("Resultado: Empate!");
                        }
                        printf("\n\n");

                        //ACRESCIMO DE PONTUAÇÃO DA COMBINAÇÃO DE ATRIBUTOS
                        if ((soma1 + soma3) > (soma2 + soma4)){
                                combina1+=1;
                        } else if ((soma1 + soma3) < (soma2 + soma4)){
                                combina2+=1;
                        } else{
                                combina1 = 0;
                                combina2 = 0;
                        }
                        
                        //PLACAR FINAL
                        printf("*** Placar Final ***\n");
                        comparacao1 = resultado1 + resultado3 + combina1;
                        comparacao2 = resultado2 + resultado4 + combina2;
                        printf("Carta 1 - %d ponto(s)\n", comparacao1);
                        printf("Carta 2 - %d ponto(s)\n", comparacao2);
                        
                        if (comparacao1 > comparacao2){
                                printf("Carta - 1 Venceu!\n");
                        } else if (comparacao1 < comparacao2){
                                printf("Carta - 2 Venceu!\n");
                        } else{
                                printf("Empate!\n\n");
                        }
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
                printf("1. Duas cartas representam cidades brasileiras.\n");
                printf("2. Cada carta possui os seguintes atributos:\n");
                printf("   - População\n");
                printf("   - Área\n");
                printf("   - PIB (Produto Interno Bruto)\n");
                printf("   - Número de Pontos Turísticos\n");
                printf("   - Densidade Populacional\n");
                printf("   - PIB per Capita\n");
                printf("   - Super Poder\n");
                printf("3. O jogador deve escolher dois atributos para comparar:\n");
                printf("   - Um primeiro atributo para Carta 1\n");
                printf("   - Um segundo atributo diferente para Carta 2\n");
                printf("4. A comparação é feita individualmente e pela soma dos dois atributos.\n");
                printf("5. Cada comparação vale pontos. Quem tiver mais pontos ao final, vence!\n");
                printf("6. Empates em qualquer comparação não atribuem pontos.\n");
                printf("7. A soma dos atributos valem 1 ponto para quem tiver a maior.\n");
                printf("\n");
                printf("========================================================================\n\n");
                break;
        default:
                printf("Opção invalida!\n\n");
                break;
        }
                return 0;
}