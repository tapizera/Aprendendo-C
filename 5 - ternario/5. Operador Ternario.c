// data: 23/02/2026, seg, 11:18
#include <stdio.h>

int main () {
    // isso:
    int idade = 20;
    char* idadee;

    idadee = (idade >= 18) ? "Maior de idade" : "Menor de idade";
    /* como se fosse:
    if (idade >= 18) {
        printf("Maior de idade");
    } else {
        printf("Menor de idade");
    } */
    printf("idadee: %s\n", idadee);



    // exemplo 2:
    int num1 = 10, num2 = 20;
    int maior;

    maior = (num1 > num2) ? num1 : num2;

    printf("O maior número é: %d\n", maior);


    // 5.2. Switch com Ifelse ternario
    int opcao;
    float nota1, nota2, media;

    // Menu
    printf("--- Menu de Gerenciamento de Estudantes ---\n");
    printf("1. Calcular Média\n");
    printf("2. Determinar Status\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            // Entrada de notas
            printf("Digite a primeira nota: ");
            scanf("%f", &nota1);
            printf("Digite a segunda nota: ");
            scanf("%f", &nota2);

            // Cálculo da média
            media = (nota1 + nota2) / 2;

            // ifelse ternario (GPT q ajeitou e recomendou NAO USAR TERNARIO P ELSEIF !!!!!!!)
            char* mediafinal;
            mediafinal =(media == 10) ? "BOA! PASSOU NO TALO!!!" :
                        (media >= 7)  ? "Passou!" :
                        (media >= 5)  ? "Quase, faz Paralela q ta safe" :
                        (media == 0)  ? "F total" :
                                        "F"; 
        break;


        case 2:
            // Determinação do status com base na média
            printf("Digite a média do estudante: ");
            scanf("%f", &media);

            // ifelse ternario (GPT ajeitou e recomendou NAO USAR TERNARIO P ELSEIF !!!!!!!)
            char* status;
                  status = (media >= 7) ? "Aprovado" :
                           (media >= 5) ? "Paralela" :
                                          "Recup";
            printf("Status: %s\n", status);
            
        break;  


        case 3:
            printf("Saindo...\n");
        break;


        default:
            printf("Opção inválida. Tente novamente.\n");
        }

  return 0;
}