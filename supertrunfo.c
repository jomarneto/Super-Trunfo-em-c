#include<stdio.h>

int main(){

    char estado1,codigo_carta1[4],cidade1[50],estado2,codigo_carta2[3],cidade2[50];
    int pupulacao1,pontos_turisticos1,pupulacao2,pontos_turisticos2;
    float area1, pib1,area2, pib2;

    printf("Dados da Carta 01\n");

    printf("Digite a letra do Estado [entre A e H]:");
    scanf(" %c",&estado1);
     

    printf("\nDigite o código da carta:");
    scanf("%3s", codigo_carta1);
   
    printf("\nDigite o nome da Cidade:");
    getchar();
    fgets(cidade1, 50, stdin);


    printf("\nDigite a quantidade da População:");
    scanf("%d",&pupulacao1);
    

    printf("\nDigite a Área em km²:");
    scanf("%f",&area1);
    

    printf("\nDigite o PIB em Bilhões:");
    scanf("%f",&pib1);
    

    printf("\nDigite a quantidade de Pontos turísticos:");
    scanf("%d",&pontos_turisticos1);

    
    printf("\nDados da Carta 02\n");

    getchar();
    printf("Digite a letra do Estado [entre A e H]:");
    scanf(" %c",&estado2);
   
    printf("\nDigite o código da carta:");
    scanf("%3s",codigo_carta2);

    printf("\nDigite o nome da Cidade:");
    getchar();
    fgets(cidade2, 50, stdin);

    printf("\nDigite a quantidade da População:");
    scanf("%d",&pupulacao2);

    printf("\nDigite a Área em km²:");
    scanf("%f",&area2);
    
    printf("\nDigite o PIB em Bilhões:");
    scanf("%f",&pib2);

    printf("\nDigite a quantidade de Pontos turísticos:");
    scanf("%d",&pontos_turisticos2);
    
    printf("\nDados coletados com sucesso!!\n");
    
    printf("Carta 01:\nEstado: %c \nCódigo: %s \nNome da Cidade: %s \nPopulação: %d \nÁrea: %.2f km² \nPIB: %.2f bilhões de reais \nNúmero de Pontos Turísticos: %d \n",estado1,codigo_carta1,cidade1,pupulacao1,area1,pib1,pontos_turisticos1);
 
    printf("\nCarta 02:\nEstado: %c \nCódigo: %s \nNome da Cidade: %s \nPopulação: %d \nÁrea: %.2f km² \nPIB: %.2f bilhões de reais \nNúmero de Pontos Turísticos: %d",estado2,codigo_carta2,cidade2,pupulacao2,area2,pib2,pontos_turisticos2);
    
    return 0; 
}