#include <stdio.h>
int main(){
//Variáveis da carta 1
char estado[50];
char codigo[50];
char cidade[50];
unsigned long int populacao;
float area;
float pib;
int pontos_turisticos;
float densidade_populacional;
float pib_per_capita;
float superpoder;

//Variáveis da carta 2
char estado2[50];
char codigo2[50];
char cidade2[50];
unsigned long int populacao2;
float area2;
float pib2;
int pontos_turisticos2;
float densidade_populacional2;
float pib_per_capita2;
float superpoder2;

    densidade_populacional = (float) populacao / area;
    densidade_populacional2 = (float) populacao2 / area2;
    pib_per_capita = pib / (float) populacao;
    pib_per_capita2 = pib2 / (float) populacao2;
    superpoder = populacao + area + pib + pontos_turisticos + pib_per_capita + densidade_populacional;
    superpoder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + densidade_populacional2;


    //Mostra as saidas de dados da carta 1
    printf("Digite o estado da carta 1: \n");
    scanf("%s", &estado);//Entrada de dados.

    printf("Digite o código da carta 1: \n");
    scanf("%s", &codigo);

    printf("Digite a cidade da carta 1: \n");
    scanf("%s", &cidade);

    printf("Qual a população da carta 1?\n");
    scanf("%ul", &populacao);

    printf("Qual é a area em km2 da carta 1? \n");
    scanf("%f", &area);

    printf("Qual é o pib da carta 1? \n");
    scanf("%f", &pib);

    printf("Qual é o número de pontos turísticos da carta 1? \n");
    scanf("%d", &pontos_turisticos);


    
    //Aqui temos as saidas de dados da carta 2.
    printf("Digite o estado da sua carta 2: \n");
    scanf("%s", &estado2);//Entrada de dados da carta 2.

    printf("Digite o código da sua carta 2: \n");
    scanf("%s", &codigo2);

    printf("Digite a cidade da carta 2: \n");
    scanf("%s", &cidade2);

    printf("Qual a população da carta 2?\n");
    scanf("%ul", &populacao2);

    printf("Qual é a area em km2 da carta 2? \n");
    scanf("%f", &area2);

    printf("Qual é o pib da carta 2? \n");
    scanf("%f", &pib2);

    printf("Qual é o número de pontos turísticos da carta 2? \n");
    scanf("%d", &pontos_turisticos2);

    //mostra na tela os resultados obtidos da carta 1.
    printf("Estado da carta 1: %s\n", estado);
    printf("Código da carta 1: %s\n", codigo);
    printf("Cidade da carta 1: %s\n", cidade);
    printf("População da carta 1: %ul\n", populacao);
    printf("Área da carta 1: %f\n", area);
    printf("Pib da carta 1: %f\n", pib);
    printf("Número de pontos turísticos da carta 1: %d\n", pontos_turisticos);
    printf("Densidade populacional da carta 1: %.2f\n", densidade_populacional);
    printf("Pib per capita da carta 1: %.2f\n", pib_per_capita);
    printf("Super poder da carta 1: %f\n", superpoder);

    //Mostra na tela os resultados da carta 2.
    printf("Estado da carta 2: %s\n", estado2);
    printf("Código da carta 2: %s\n", codigo2);
    printf("Cidade da carta 2: %s\n", cidade2);
    printf("População da carta 2: %ul\n", populacao2);
    printf("Área da carta 2: %f\n", area2);
    printf("Pib da carta 2: %f\n", pib2);
    printf("Número de pontos turísticos da carta 2: %d\n", pontos_turisticos2);
    printf("Densidade populacional da carta 2: %.2f\n", densidade_populacional2);
    printf("Pib per capita da carta 2: %.2f\n", pib_per_capita2);
    printf("Super poder da carta 2: %f\n", superpoder2);


    //Lógica para determinar o vencedor
    if ((populacao > populacao2))
    {
        printf("A carta 1 venceu!!!\n");
    } else {
        printf("A carta 2 venceu!!!\n");
    }
    



    return 0;
}