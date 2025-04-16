#include <stdio.h>

//Inicia o jogo
void iniciarJogo(){
    printf("\n\n#####    Bem Vindo ao SUPER TRUNFO    ####\n \n");
}

void fimDeJogo(){
    printf("####    OBRIGADO POR JOGAR    ####");
}

float densidadePopulacional(int populacao, float area){
    float densidadePopulacional = (float) populacao / area;
    return densidadePopulacional;
}

float pibPerCapita(float pib, int populacao){
    float pibPerCapita =(float) pib / populacao;
    return pibPerCapita;
}

float superPoder(int populacao, float area, float pib, int pontosTuristicos, float ppc, float densidade){
    return (float)populacao + area + pib + pontosTuristicos + ppc - densidade;
}

char lerChar(const char* mensagem) {
    char c;
    printf("%s", mensagem);
    scanf(" %c", &c); 
    return c;
}
void saidaDeDados(int carta, char estado,char codigoCarta[3],char nome[20],int populacao,float areaDaCidade,float pib,int pontosTuristicos){

    float densidade = densidadePopulacional(populacao,areaDaCidade);
    float ppc = pibPerCapita(pib,populacao);
    float super =superPoder(populacao,areaDaCidade,pib,pontosTuristicos,ppc,densidade);

    printf("Carta %d\n", carta);
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigoCarta);
    printf("Nome da cidade: %s\n", nome);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f\n", areaDaCidade);
    printf("PIB: %.2f\n", pib);
    printf("Numero de pontos turisticas: %d\n", pontosTuristicos);
    printf("Densidade Populacional: %.2f\n", densidade);
    printf("PIB per Capita: %.2f\n", ppc);
    printf("Super Poder: %.2f\n\n", super);

}

void criarCarta(int carta, char estado,char codigoCarta[3],char nome[20],int populacao,float areaDaCidade,float pib,int pontosTuristicos){

    printf("####    Carta %d    ####\n", carta);
    estado = lerChar("Digite o Estado:");
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

void ComparacaoDeCartas(int carta, int populacao,float areaDaCidade,float pib,int pontosTuristicos,
    int carta2,int populacao2,float areaDaCidade2,float pib2,int pontosTuristicos2){
        
        float densidade = densidadePopulacional(populacao,areaDaCidade);
        float ppc = pibPerCapita(pib,populacao);
        float super =superPoder(populacao,areaDaCidade,pib,pontosTuristicos,ppc,densidade);

        float densidade2 = densidadePopulacional(populacao2,areaDaCidade2);
        float ppc2 = pibPerCapita(pib2,populacao2);
        float super2 =superPoder(populacao2,areaDaCidade2,pib2,pontosTuristicos2,ppc2,densidade2);

        printf("\n\n#####    Conparacao De Cartas   ####\n \n");

        if( populacao > populacao2){
            printf("Populacao: Carta %d Venceu\n", carta);
        } else if( populacao < populacao2){
            printf("Populacao: Carta %d Venceu\n", carta2);
        } else {
            printf("Populacao: Cartas empatadas\n");
        }

        if(areaDaCidade > areaDaCidade2){
            printf("Area: Carta %d Venceu\n", carta);
        } else if( areaDaCidade < areaDaCidade2){
            printf("Area: Carta %d Venceu\n", carta2);
        } else {
            printf("Area: Cartas empatadas\n");
        }

        if( pib > pib2){
            printf("PIB: Carta %d Venceu\n", carta);
        } else if( pib < pib2){
            printf("PIB: Carta %d Venceu\n", carta2);
        } else {
            printf("PIB: Cartas empatadas\n");
        }

        if( pontosTuristicos > pontosTuristicos2){
            printf("Pontos Turisticos: Carta %d Venceu\n", carta);
        } else if(pontosTuristicos < pontosTuristicos2){
            printf("Pontos Turisticos: Carta %d Venceu\n", carta2);
        } else {
            printf("Pontos Turisticos: Cartas empatadas\n");
        }


        if( densidade > densidade2){
            printf("Densidade Populacional: Carta %d Venceu\n", carta);
        } else if( densidade < densidade2){
            printf("Densidade Populacional: Carta %d Venceu\n", carta2);
        } else {
            printf("Densidade Populacional: Cartas empatadas\n");
        }

        if( ppc > ppc2){
            printf("PIB per Capita: Carta %d Venceu\n", carta);
        } else if( ppc < ppc2){
            printf("PIB per Capita: Carta %d Venceu\n", carta2);
        } else {
            printf("PIB per Capita: Cartas empatadas\n");
        }

        if( super > super2){
            printf("Super Poder: Carta %d Venceu\n", carta);
        } else if( super < super2){
            printf("Super Poder: Carta %d Venceu\n", carta2);
        } else { 
            printf("Super Poder: Cartas empatadas\n");
        }
}

int main() {

    //chama a funcao iniciar jogo
    iniciarJogo();

    //Caracteristicas da carta 1
    char estado, codigoCarta[3], nome[20];
    int populacao, pontosTuristicos;
    float areaDaCidade, pib;
    
    //Criando a carta 1
    //criarCarta(1,estado,codigoCarta,nome,populacao,areaDaCidade,pib,pontosTuristicos);
    printf("####    Carta 1    ####\n");
    estado = lerChar("Digite o Estado:");
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

    //Caracteristicas da carta 2
    char estado2, codigoCarta2[3], nome2[20];
    int populacao2, pontosTuristicos2;
    float areaDaCidade2, pib2;

    //Criando a carta 2
    //criarCarta(2,estado2,codigoCarta2,nome2,populacao2,areaDaCidade2,pib2,pontosTuristicos2);
    printf("####    Carta 2    ####\n");
    estado2 = lerChar("Digite o Estado:");
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

    //Mostra cartas
    saidaDeDados(1,estado,codigoCarta,nome,populacao,areaDaCidade,pib, pontosTuristicos);
    saidaDeDados(2,estado2,codigoCarta2,nome2,populacao2,areaDaCidade2,pib2, pontosTuristicos2);

    //Compara cartas
    ComparacaoDeCartas(1,populacao,areaDaCidade,pib,pontosTuristicos,2,populacao2,areaDaCidade2,pib2,pontosTuristicos2);

    //Finaliza o jogo
    fimDeJogo();

    
}



