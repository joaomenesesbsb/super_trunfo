#include <stdio.h>

int main() {

    char criarCarta;

    //Caracteristicas da carta
    char estado, codigoCarta[3], nome[20];
    int populacao, pontosTuristicos;
    float areaDaCidade, pib;

    printf("#####    Bem Vindo ao SUPER TRUNFO    ####\n \n");
    printf("Vamos criar sua carta agora?  S/N\n");

    scanf(" %c", &criarCarta);

    if(criarCarta == 'S'){

        int qtdCartas;

        printf("Quantas cartas voce quer criar?\n");
        scanf(" %d", &qtdCartas);

        for(int i = 0; i < qtdCartas; i++){
        printf("Vamos comecar!!! \n\n");

        printf("####    Carta %d    ####\n\n", i+1);
        printf("Digite o Estado: ");
        scanf(" %c", &estado);

        printf("Digite o Codigo: ");
        scanf("%s", &codigoCarta);

       printf("Digite o nome da cidade: ");
        scanf("%s", &nome);

        printf("Digite a populacao: ");
        scanf("%d", &populacao);

        printf("Digite a Area da cidade: ");
        scanf("%f", &areaDaCidade);

        printf("Digite o PIB: ");
        scanf("%f", &pib);

        printf("Digite o Nummero de pontos turisticos: ");
        scanf("%d", &pontosTuristicos);

        printf("\n\n#### CARTA CRIADA COM SUCESSO #### \n\n");

        printf("Carta %d:\n", i+1);
        printf("Estado: %c\n", estado);
        printf("Codigo: %s\n", codigoCarta);
        printf("Nome da cidade: %s\n", nome);
        printf("Populacao: %d\n", populacao);
        printf("Area: %f\n", areaDaCidade);
        printf("PIB: %f\n", pib);
        printf("Numero de pontos turisticas: %d\n\n", pontosTuristicos);
        }
        
    }else {
        printf("####    OBRIGADO POR JOGAR    ####");
    }

    printf("####    TODAS AS CARTAS CRIADAS   ####");
}