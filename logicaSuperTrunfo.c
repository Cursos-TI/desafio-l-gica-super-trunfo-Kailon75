#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int carta, carta2;
    char estado, estado2;
    char cidade[10], cidade2[10];
    int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int pontT, pontT2;
    float dpop, dpop2;
    float pibpc, pibpc2;
    int opcao1, opcao2;
    int result, result2;

    printf("### Bem vindo ao jogo super trufo! ###\n");
    printf("digite as informacões da primeira carta \n");
    
   
    printf("Digite o numero da carta: ");
    scanf("%d", &carta);
    getchar();
 
    printf("Digite o Estado: ");
    scanf(" %c", &estado);
 
    printf("Digite o nome da cidade: ");
    
    getchar(); 
    fgets(cidade, sizeof(cidade), stdin);
    cidade[strcspn(cidade, "\n")] = 0; 
 
 
    printf("Digite a populacao: ");
    scanf("%d", &populacao);
 
    printf("Digite a area (km^2): ");
    scanf("%f", &area);
 
    printf("Digite o PIB: ");
    scanf("%f", &pib);
 
    printf("Quantos pontos turisticos: ");
    scanf("%d", &pontT);

    
    dpop = (float) populacao / area;
    pibpc = (float) pib / populacao;

    

    printf("\nAgora digite as informações da segunda carta: \n");

   
    printf("Digite o numero da carta: ");
    scanf("%d", &carta2);
    getchar();
  
    printf("Digite o Estado: ");
    scanf(" %c", &estado2);
  
    printf("Digite o nome da cidade: ");
    
    getchar();
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = 0; 
  
  
    printf("Digite a populacao: ");
    scanf("%d", &populacao2);
  
    printf("Digite a area (km^2): ");
    scanf("%f", &area2);
  
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
  
    printf("Quantos pontos turisticos: ");
    scanf("%d", &pontT2);

    

    dpop2 = (float) populacao2 / area2;
    pibpc2 = (float) pib2 / populacao2;
    
    printf("\nCarta 1: \n") ;
    printf("Estado: %c \n" , estado) ;
    printf("Codigo: %c0%d\n", estado, carta);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km^2\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos Turisticos: %d\n", pontT);
    printf("Densidade Populacional: %.2f hab/km^2\n", dpop);
    printf("PIB per capita: %.2f\n", pibpc);

    printf("\nCarta 2: \n") ;
    printf("Estado: %c \n" , estado2) ;
    printf("Codigo: %c0%d\n", estado2,carta2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km^2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontT2);
    printf("Densidade Populacional: %.2f hab/km^2\n", dpop2);
    printf("PIB per capita: %.2f\n", pibpc2);
    

    printf("\nEscolha o primeiro atributo a ser comparado!\n");
    printf("1. para Área. \n");
    printf("2. para densidade populacional. \n");
    printf("3. para população. \n");
    printf("4. para PIB per capita. \n");
    printf("5. para o PIB. \n");
    printf("6. para pontos turisticos. \n");

   scanf("%d", &opcao1);

   switch (opcao1)
   {
   case 1:
    result = area > area2 ? 1 : 0 ;
    printf("Voçê escolheu Área como primeiro atributo a ser comparado!\n");
    break;
   case 2:
    result = dpop < dpop2 ? 1 : 0 ;
    printf("Voçê escolheu Densidade populacional como primeiro atributo a ser comparado!\n");
    break;
   case 3:
    result = populacao > populacao2 ? 1 : 0 ;
    printf("Voçê escolheu População como primeiro atributo a ser comparado!\n");
    break;
   case 4:
    result = pibpc > pibpc2 ? 1 : 0 ;
    printf("Voçê escolheu PIB per capita como primeiro atributo a ser comparado!\n");
    break;
   case 5:
    result = pib > pib2 ? 1 : 0 ;
    printf("Voçê escolheu PIB como primeiro atributo a ser comparado!\n");
    break;
   case 6:
    result = pontT > pontT2 ? 1 : 0 ;
    printf("Voçê escolheu Pontos turisticos como primeiro atributo a ser comparado!\n");
    break;
   default:
   printf("Voçê digitou uma opção invalida! \n");
    break;
   }

   printf("Escolha o segundo atributo a ser comparado!\n");
   printf("1. para Área. \n");
   printf("2. para densidade populacional. \n");
   printf("3. para população. \n");
   printf("4. para PIB per capita. \n");
   printf("5. para o PIB. \n");
   printf("6. para pontos turisticos. \n");

   scanf("%d", &opcao2);

   if(opcao1 == opcao2){
    printf("Voçê escolheu os mesmo atributos \nTente novamente!\n");
   }else{
    switch (opcao2)
   {
   case 1:
    result2 = area > area2 ? 1 : 0 ;
    printf("Voçê escolheu Área como segundo atributo a ser comparado!\n");
    break;
   case 2:
    result2 = dpop < dpop2 ? 1 : 0 ;
    printf("Voçê escolheu Densidade populacional como segundo atributo a ser comparado!\n");
    break;
   case 3:
    result2 = populacao > populacao2 ? 1 : 0 ;
    printf("Voçê escolheu População como segundo atributo a ser comparado!\n");
    break;
   case 4:
    result2 = pibpc > pibpc2 ? 1 : 0 ;
    printf("Voçê escolheu PIB per capita como segundo atributo a ser comparado!\n");
    break;
   case 5:
    result2 = pib > pib2 ? 1 : 0 ;
    printf("Voçê escolheu PIB como segundo atributo a ser comparado!\n");
    break;
   case 6:
    result2 = pontT > pontT2 ? 1 : 0 ;
    printf("Voçê escolheu Pontos turisticos como segundo atributo a ser comparado!\n");
    break;
   default:
   printf("Voçê digitou uma opção invalida! \n");
    break;
   }
   }

   if(result == 1 && result2 == 1){
    printf("\nA carta 1 venceu!\n");
   }else if(result != result2){
    printf("\nHouve um empate!\n");
   }else{
    printf("\nA carta 2 venceu!\n");
   }

    printf("### Fim do jogo! ###");

    return 0;
}
