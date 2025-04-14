#include <stdio.h>

//Inicia o jogo
void iniciarJogo(){
    printf("#####    Bem Vindo ao SUPER TRUNFO    ####\n \n");
}

//Aprendendo funcoes em C
void entradaDeDados(int n){
    char estado, codigoCarta[3], nome[20];
    int populacao, pontosTuristicos;
    float areaDaCidade, pib;

    printf("####    Carta %d    ####\n", n);
    
    printf("Digite o Estado: ");
    scanf("  %c", &estado);
    
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
}

int main() {

    char criarCarta;

    //Caracteristicas da carta 1
    char estado, codigoCarta[3], nome[20];
    int populacao, pontosTuristicos;
    float areaDaCidade, pib;


    //chama a funcao iniciar jogo
    iniciarJogo();
    

    //Criando a carta 1
    printf("####    Carta 1    ####\n");
    
    printf("Digite o Estado: ");
    scanf("  %c", &estado);
    
    printf("Digite o Codigo: ");
    scanf("%s", &codigoCarta);
    printf("Estado: %c\n", estado);

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

    //Mostrando dados da carta 1

    printf("Carta 1\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigoCarta);
    printf("Nome da cidade: %s\n", nome);
    printf("Populacao: %d\n", populacao);
    printf("Area: %f\n", areaDaCidade);
    printf("PIB: %f\n", pib);
    printf("Numero de pontos turisticas: %d\n\n", pontosTuristicos);

    //Caracteristicas da carta 2
    char estado2, codigoCarta2[3], nome2[20];
    int populacao2, pontosTuristicos2;
    float areaDaCidade2, pib2;

    //Criando a carta 2
    printf("####    Carta 2    ####\n");
    printf("Digite o Estado: ");
    scanf("  %c", &estado2);

    printf("Digite o Codigo: ");
    scanf("%s", &codigoCarta2);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nome2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a Area da cidade: ");
    scanf("%f", &areaDaCidade2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o Nummero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("\n\n#### CARTA CRIADA COM SUCESSO #### \n\n");

    //Mostrando dados da carta 2

    printf("Carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigoCarta2);
    printf("Nome da cidade: %s\n", nome2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %f\n", areaDaCidade2);
    printf("PIB: %f\n", pib2);
    printf("Numero de pontos turisticas: %d\n\n", pontosTuristicos2);

    //criei uma parte com mais logica mas n era necessario para o teste
    
    /*printf("Vamos criar sua carta agora?  S/N\n");

    scanf(" %c", &criarCarta);

    if(criarCarta == 'S'){

        int qtdCartas;

        printf("Quantas cartas voce quer criar?\n");
        scanf(" %d", &qtdCartas);

        for(int i = 0; i < qtdCartas; i++){
        printf("Vamos comecar!!! \n\n");

        printf("####    Carta %d    ####\n\n", i + 1);
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

    printf("####    TODAS AS CARTAS CRIADAS   ####");*/

    
}



