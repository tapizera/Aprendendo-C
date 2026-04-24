// data: 24/02/2026, ter, 12:23 até umas 18h (ajeitado em 25.02.2026, noite)
#include <stdio.h>
#include <string.h>

// objetivo: comparar 2 atributos e somar
// tem q usar strut (tipo uma class em python) e funcao, senao fica imenso o código
// QUE COISA LOOOOOOOOOONGA CARA, NUNCA MAIS FAZER ISSO MEUDEUS TEM QUE APRENDER URGENTEMENTE STRUCT, WHILE, FOR E OQQUE TIVER PQ SEM ISSO NAO DAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA

// Codex fez, disse q minha funca comparar tava errado pq retorna char numa funcao int
const char* nomeAtributo(int idx) {
    switch (idx) {
        case 1: return "Populacao";
        case 2: return "Area";
        case 3: return "PIB";
        case 4: return "Pontos Turisticos";
        case 5: return "Densidade Demografica";
        case 6: return "PIB per capita";
        default: return "Invalido";
    }
}

// fiz sozinho, toma. (deu erro)
// aprendizado: return signifca finalizar, e nao retornar ksks
// FUNCAO GERAL QUE VAI FAZER TUDO
int Comparar (         // exemplos:
    int IndexAtrib1, // 1 (numero no menu)
    int IndexAtrib2, // 2 (numero no menu)

    char* Nome_C1,
    char* Nome_C2,

    // C1 = Carta1
    int ValorAtrib1_C1, // 5000
    int ValorAtrib2_C1, // 3000

    // C2 = Nome_C2
    int ValorAtrib1_C2,
    int ValorAtrib2_C2 )
    {
    
    // Codex substituiu meus ifelses por isso
    // Nomeando os Atributos correspondente ao index do menu
    const char* NomeAtrib1 = nomeAtributo(IndexAtrib1);
    const char* NomeAtrib2 = nomeAtributo(IndexAtrib2);

    // Fight!
    printf("\n--- Hora da Batalha! ---\n");
    printf("  %s VS %s \n", Nome_C1, Nome_C2);
    printf("Atributo 1 Escolhido: %s\n", NomeAtrib1);
    printf("Atributo 2 Escolhido: %s\n", NomeAtrib2); 

    // Atributos de cada carta
    float Atribs_C1 = ValorAtrib1_C1 + ValorAtrib2_C1;
    float Atribs_C2 = ValorAtrib1_C2 + ValorAtrib2_C2;

    // se Carta 1 ganhar...
    if (Atribs_C1 > Atribs_C2) 
    {
        printf("  > WINNER: %s <\n\n", Nome_C1); 
    }
    // se Carta 2 ganhar...
    else if (Atribs_C1 < Atribs_C2) 
    {
        printf("  > WINNER: %s <\n\n", Nome_C2); 
    } 
    // se empatar...
    else 
    {
        printf("  > EMPATE! <\n\n");
    }
}



// funcao que pensei e gpt estruturou
float pegarValorAtributo(
    int atributo,
    unsigned long int populacao,
    float area,
    float pib,
    int turisticos,
    float densidade,
    float pibpercapita 
    ) { // se o atribudo escolhido for "populacao" entao retorna "populacao" (aspas de exemplo)
    switch (atributo) {
        case 1: return populacao;
        case 2: return area;
        case 3: return pib;
        case 4: return turisticos;
        case 5: return densidade;
        case 6: return pibpercapita;
        default: return 0;
    }
}

int main () {
    // menu
    int menu;
    printf("\n--- Super Trunfo ---\n");
    printf("1 - Jogar\n");
    printf("2 - Info\n");
    printf("3 - Sair\n");
    printf("Selecione: ");
    scanf("%d", &menu);
    switch (menu) {
        case 1: // jogar
            printf("\n--- Jogar ---\n");
            printf("Primeiramente vamos criar 2 cartas\n");


            printf("\n- Definindo Carta 1\n"); // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

            char estado[3];
            printf("Estado (sigla): ");
            scanf("%2s", estado); // string nao pricisa de &

            char cidade[30];
            printf("Cidade: ");
            scanf("%29s", cidade); // string nao pricisa de &

            unsigned long int populacao;
            printf("Populacao: ");
            scanf("%lu", &populacao);

            float area;
            printf("Area: ");
            scanf("%f", &area);

            float pib;
            printf("PIB: ");
            scanf("%f", &pib);

            int turisticos;
            printf("N de Pontos Turisticos: ");
            scanf("%d", &turisticos);

            float densidade = (float) populacao / (float) area;
            float pibpercapita = (float) pib / (float) populacao;
            float superpower = populacao + area + pib + turisticos + densidade + pibpercapita;

            // nome da Carta1 (gpt corrigiu)
            char Nome_C1[50];
            sprintf(Nome_C1, "%s/%s", cidade, estado);


            printf("\n- Definindo Carta 2\n"); // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
            char estado2[3];
            printf("Estado (sigla): ");
            scanf("%2s", estado2); // string nao pricisa de &

            char cidade2[30];
            printf("Cidade: ");
            scanf("%29s", cidade2); // string nao pricisa de &

            unsigned long int populacao2;
            printf("Populacao: ");
            scanf("%lu", &populacao2);

            float area2;
            printf("Area: ");
            scanf("%f", &area2);

            float pib2;
            printf("PIB: ");
            scanf("%f", &pib2);

            int turisticos2;
            printf("N de Pontos Turisticos: ");
            scanf("%d", &turisticos2);

            float densidade2 = (float) populacao2 / (float) area2;
            float pibpercapita2 = (float) pib2 / (float) populacao2;
            float superpower2 = populacao2 + area2 + pib2 + turisticos2 + densidade2 + pibpercapita2;

            // nome da Carta2 (gpt corrigiu)
            char Nome_C2[50];
            sprintf(Nome_C2, "%s/%s", cidade2, estado2);


            // menu do atrib1pcomparar ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
            int atrib1pcomparar;
            printf("\n--- Atributo 1 para Comparar ---\n");
            printf("1 - Populacao\n");
            printf("2 - Area\n");
            printf("3 - PIB\n");
            printf("4 - Pontos Turisticos\n");
            printf("5 - Densidade Demografica\n");
            printf("6 - PIB per capita\n");
            printf("Escolha um atributo para comparar: ");
            scanf("%d", &atrib1pcomparar);


            // menu do atrib2pcomparar ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
            int atrib2pcomparar;
            printf("\n--- Atributo 2 ---\n");

            // ex: se eu escolhi o atrib 1 p comparar, no menu do atrib 2 nao vai ter o atrib 1 já escolhido pra comparar dnv
            // se eu tiver escolhido o.. sla atrib populacao p comparar, entao nao vai mais mostrar ele como opcao
            // confuso mas é isso.
            if (atrib1pcomparar != 1) 
                printf("1 - Populacao\n");

            if (atrib1pcomparar != 2)
                printf("2 - Area\n");

            if (atrib1pcomparar != 3)
                printf("3 - PIB\n");

            if (atrib1pcomparar != 4)
                printf("4 - Pontos Turisticos\n");

            if (atrib1pcomparar != 5)
                printf("5 - Densidade Demografica\n");

            if (atrib1pcomparar != 6)
                printf("6 - PIB per capita\n");


            // salvando atributo 2 escolhido
            printf("Escolha um atributo para comparar: ");
            scanf("%d", &atrib2pcomparar);

            // bloquear o atributo já escolhido
            if (atrib2pcomparar == atrib1pcomparar) {
                printf("Nao pode repetir atributo\n");
            }


            // Resultado ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

            // pega o valor do atributo real e coloca na variavel, feio mas só isso
            float atrib1_C1 = pegarValorAtributo
            (
                atrib1pcomparar, 
                populacao, 
                area, 
                pib, 
                turisticos, 
                densidade, 
                pibpercapita
            );
            float atrib2_C1 = pegarValorAtributo
            (
                atrib2pcomparar, 
                populacao, 
                area, 
                pib, 
                turisticos, 
                densidade, 
                pibpercapita
            );

            float atrib1_C2 = pegarValorAtributo
            (
                atrib1pcomparar, 
                populacao2, 
                area2, 
                pib2, 
                turisticos2, 
                densidade2, 
                pibpercapita2
            );
            float atrib2_C2 = pegarValorAtributo
            (
                atrib2pcomparar, 
                populacao2, 
                area2, 
                pib2, 
                turisticos2, 
                densidade2, 
                pibpercapita2
            );

            // o atribs das Carta é a biblioteca com TODOS os atributos ja salvos nas variaveis e parando p pensar isso poupa muito codigo

            // a funcao Comparar já faz TUDO, tem os ifelses e os prints, foi escolha minha fazer com funcao.
            int resultado = Comparar
            (
                atrib1pcomparar,
                atrib2pcomparar,
                Nome_C1,
                Nome_C2,
                atrib1_C1,
                atrib2_C1,
                atrib1_C2,
                atrib2_C2
            );
            break;



        case 2: // info
            printf("\n--- Informacoes ---");
            printf("\n1. Voce vai definir 2 cartas com diversos atributos.");
            printf("\n2. Voce ira escolher 2 atributos para comparar.");
            printf("\n3. A carta com melhor pontuação nos atributos escolhidos, vence.\n");
            break;


        case 3: // sair
            printf("\nSaindo...");
            break;


        default:
            printf("\nErro. Selecione uma opção valida");
            break;
    } // switch menu
    return 0;
} // main