#include <stdio.h>

int menuInicial(){
    int opcao;

    printf("Selecione uma Opcao\n");
    printf("[1] INICIAR JOGO\n");
    printf("[2] REGRAS DO JOGO\n");
    printf("[3] SAIR DO JOGO\n\n");
    
    scanf("%d", &opcao);
    return opcao;
}
void iniciarJogo(){
    printf("\n\n##########################################\n");
    printf("#####    Bem Vindo ao SUPER TRUNFO    ####\n");
    printf("##########################################\n\n");

}

void fimDeJogo(){
    printf("\n\n##################################\n");
    printf("####    OBRIGADO POR JOGAR    ####\n");
    printf("##################################\n\n");
}

int menuCompararAtributos(){
    int opcao;
    printf("HORA DE COMPARAR CARTAS\n");
    printf("O que deseja comparar?\n");
    printf("[1] POPULACAO\n");
    printf("[2] AREA\n");
    printf("[3] PIB\n");
    printf("[4] PONTOS TURISTICOS\n");
    printf("[5] DENSIDADE GEOGRAFICA\n\n");
    scanf("%d", &opcao);
    return opcao;
}

float calcularDensidadePopulacional(int populacao, float area){
    float densidadePopulacional = (float) populacao / area;
    return densidadePopulacional;
}

float calcularPibPerCapita(float pib, int populacao){
    float pibPerCapita =(float) pib / populacao;
    return pibPerCapita;
}

float somarSuperPoder(int populacao, float area, float pib, int pontosTuristicos, float ppc, float densidade){
    return (float)populacao + area + pib + pontosTuristicos + ppc - densidade;
}

char lerChar(const char* mensagem) {
    char c;
    printf("%s", mensagem);
    scanf(" %c", &c); 
    return c;
}
void saidaDeDados(int carta, char estado,char codigoCarta[3],char nome[20],int populacao,float areaDaCidade,float pib,int pontosTuristicos){

    float densidade = calcularDensidadePopulacional(populacao,areaDaCidade);
    float ppc = calcularPibPerCapita(pib,populacao);
    float super = somarSuperPoder(populacao,areaDaCidade,pib,pontosTuristicos,ppc,densidade);

    printf(" _______________________________\n");
    printf("|            Carta %d            |\n", carta);
    printf("|Estado:                       %c|\n", estado);
    printf("|Codigo:                     %s|\n", codigoCarta);
    printf("|Nome da cidade:             %s|\n", nome);
    printf("|Populacao:                   %d|\n", populacao);
    printf("|Area:                     %.2f|\n", areaDaCidade);
    printf("|PIB:                      %.2f|\n", pib);
    printf("|Numero de pontos turisticas: %d|\n", pontosTuristicos);
    printf("|Densidade Populacional:    %.2f|\n",densidade);
    printf("|PIB per Capita:            %.2f|\n",ppc);
    printf("|Super Poder:              %.2f|\n",super);
    printf("|_______________________________|\n\n");

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
        
        float densidade = calcularDensidadePopulacional(populacao,areaDaCidade);
        float ppc = calcularDensidadePopulacional(pib,populacao);
        float super = somarSuperPoder(populacao,areaDaCidade,pib,pontosTuristicos,ppc,densidade);

        float densidade2 = calcularDensidadePopulacional(populacao2,areaDaCidade2);
        float ppc2 = calcularPibPerCapita(pib2,populacao2);
        float super2 = somarSuperPoder(populacao2,areaDaCidade2,pib2,pontosTuristicos2,ppc2,densidade2);

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
void compararPopulacao(int carta,int populacao, int carta2, int populacao2){
    printf("\n\n####    COMPARANDO POPULACAO    ####\n\n");
    if( populacao > populacao2){
        printf("Carta %d Venceu\n", carta);
        printf("Populacao carta 1: %d - Populacao carta 2: %d\n", populacao, populacao2);

    } else if( populacao < populacao2){
        printf("Carta %d Venceu\n", carta2);
        printf("Populacao carta 2: %d - Populacao carta 1: %d\n", populacao2, populacao);
    } else {
        printf("Cartas empatadas\n");
    }
}
void compararArea(int carta,float area, int carta2, float area2){
    printf("\n\n####    COMPARANDO AREA    ####\n\n");
    if( area > area2){
        printf("Carta %d Venceu\n", carta);
        printf("Area da carta 1: %.2f - Area da carta 2: %.2f\n", area, area2);

    } else if( area < area2){
        printf("Carta %d Venceu\n", carta2);
        printf("Area da carta 2: %.2f - Area da carta 1: %.2f\n", area2, area);
    } else {
        printf("Cartas empatadas\n");
    }
}
void compararPib(int carta,float pib, int carta2, float pib2){
    printf("\n\n####    COMPARANDO PIB    ####\n\n");
    if( pib > pib2){
        printf("Carta %d Venceu\n", carta);
        printf("PIB carta 1: %.2f - PIB carta 2: %.2f\n", pib, pib2);

    } else if( pib2 < pib){
        printf("Carta %d Venceu\n", carta2);
        printf("PIB carta 2: %.2f - PIB carta 1: %.2f\n", pib2, pib);
    } else {
        printf("Cartas empatadas\n");
    }
}
void compararPontosTuristicos(int carta,int pontosTuristicos, int carta2, int pontosTuristicos2){
    printf("\n\n#### COMPARANDO PONTOS TURIDTICOS ####\n\n");
    if( pontosTuristicos > pontosTuristicos2){
        printf("Carta %d Venceu\n", carta);
        printf("Pontos Turisticos da carta 1: %d - Pontos Turisticos da carta 2: %d\n", pontosTuristicos, pontosTuristicos2);

    } else if( pontosTuristicos < pontosTuristicos2){
        printf("Carta %d Venceu\n", carta2);
        printf("Pontos Turisticos da carta 2: %d - Pontos Turisticos da carta 1: %d\n", pontosTuristicos2, pontosTuristicos);
    } else {
        printf("Cartas empatadas\n");
    }
}
void compararDensidadeGeografica(int carta,int populacao, float area, int carta2, int populacao2,float area2){

    float densidade = calcularDensidadePopulacional(populacao,area);
    float densidade2 = calcularDensidadePopulacional(populacao2,area2);

    printf("\n\n#### COMPARANDO DENSIDADE GEOGRAFICA ####\n\n");
    if( densidade > densidade2){
        printf("Carta %d Venceu\n", carta2);
        printf("Densidade Geografica carta 2: %.2f - Densidade Geografica carta 1: %.2f\n", densidade, densidade2);
        printf("*menor valor ganha\n");

    } else if( densidade < densidade2){
        printf("Carta %d Venceu\n", carta);
        printf("Densidade Geografica carta 1: %.2f - Densidade Geografica carta 2: %.2f\n", densidade2, densidade);
        printf("* menor valor ganha *\n");
    } else {
        printf("Cartas empatadas\n");
    }
}
void mostrarRegras(){
    printf("|\n\n####    REGRAS    ####\n\n");
    printf("1 - A carta com o maior valor vence\n");
    printf("2 - Exceto a densidade geografica ganha o menor valor\n");
}
void opcaoInvalida(){
    printf("####    OPCAO INVALIDA    ####");
}

int main() {

    switch (menuInicial())
    {
    case 1:

    //chama a funcao iniciar jogo
    iniciarJogo();

    //Caracteristicas da carta 1
    char estado, codigoCarta[3], nome[20];
    int populacao, pontosTuristicos;
    float areaDaCidade, pib;

    /*
    //valores para teste
    pontosTuristicos = 10;
    populacao = 20;
    areaDaCidade = 55.5;
    pib = 41.1;
    */
    
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

    /*
    //valores para teste
    pontosTuristicos2 = 11;
    populacao2 = 21;
    areaDaCidade2 = 53.2;
    pib2 = 11.1;
    */

    //Criando a carta 2
    //CriarCarta(2,estado2,codigoCarta2,nome2,populacao2,areaDaCidade2,pib2,pontosTuristicos2);
    
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

    switch (menuCompararAtributos())
    {
    case 1:
        compararPopulacao(1,populacao,2,populacao2);
        break;
    case 2:
        compararArea(1,areaDaCidade,2,areaDaCidade2);
        break;
    case 3:
        compararPib(1,pib,2,pib2);
        break;
    case 4:
        compararPontosTuristicos(1,pontosTuristicos,2,pontosTuristicos2);
        break;
    case 5:
        compararDensidadeGeografica(1,populacao,areaDaCidade,2,populacao2,areaDaCidade2);
        break;

        //Finaliza o jogo
        fimDeJogo();
    default:
        opcaoInvalida();
        break;
    }

    //Mostra cartas
    //saidaDeDados(1,estado,codigoCarta,nome,populacao,areaDaCidade,pib, pontosTuristicos);
    //saidaDeDados(2,estado2,codigoCarta2,nome2,populacao2,areaDaCidade2,pib2, pontosTuristicos2);

    //Compara cartas
    //ComparacaoDeCartas(1,populacao,areaDaCidade,pib,pontosTuristicos,2,populacao2,areaDaCidade2,pib2,pontosTuristicos2);


        break;
    
    case 2:
        mostrarRegras();
        break;
    case 3:
    //Finaliza o jogo
        fimDeJogo();
        break;
    
    default:
        opcaoInvalida();
        break;
    }

 
}



