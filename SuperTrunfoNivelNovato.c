//Jogo Super Trunfo. Jogo realizado no nível Novato da disciplina Introdução à lógica de programação.
// Tem por objetivo a inserção de dados para compor as caracteristicas de cada carta. 



#include <stdio.h> //biblioteca padrao

int main(){  // principais funçoes
    printf("Desafio Super Trunfo \n");  // exbição do nome do jogo
    

    // CARTA 1
    printf("Carta 01\n"); // Exibição da Carta 01


    int populacao1;              //declarando cada variavel da carta 01
    int pontosturisticos1;
    float areakm1;
    float pib1;
    char estado1[2];  
    char codcarta1[4];
    char cidade1[50];

    printf("Digite a letra do Estado entre A e H:\n");   // Leitura e inserção de dados pelos usuários
    scanf("%s", &estado1);

   
    printf("Digite o codigo da carta entre 01 e 04 (ex:A01):\n");
    scanf("%s", &codcarta1);

    
    printf("Digite o nome da Cidade (Sem Espaço ex:SaoPaulo):\n");
    scanf("%s", &cidade1);
    
    

    while (getchar() != '\n');
    printf("Digite a População da Cidade:\n");
    scanf("%d", &populacao1);
        
    printf("Digite a area em km²:\n");
    scanf("%f", &areakm1);

    printf("Digite o PIB:\n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turisticos:\n");
    scanf("%i", &pontosturisticos1);



    //CARTA 2
    printf("Carta 02\n");

    int populacao2;              //declarando cada variavel da carta 02
    int pontosturisticos2;
    float areakm2;
    float pib2;
    char estado2[2];  
    char codcarta2[4];
    char cidade2[50];

    printf("Digite a letra do Estado entre A e H:\n");   // Leitura e inserção dos dados pelos usuários
    scanf("%s", &estado2);

   
    printf("Digite o codigo da carta entre 01 e 04 (ex:A01):\n");
    scanf("%s", &codcarta2);

    
    printf("Digite o nome da Cidade (Sem Espaço ex:SaoPaulo):\n");
    scanf("%s", &cidade2);
    

    while (getchar() != '\n');
    printf("Digite a População da Cidade:\n");
    scanf("%d", &populacao2);
        
    printf("Digite a area em km²:\n");
    scanf("%f", &areakm2);

    printf("Digite o PIB:\n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos:\n");
    scanf("%i", &pontosturisticos2);


    //Exibição do resultado das cartas

    printf("Informações Carta 01\n");                                  // exibição do resultado da carta 01
    printf("Estado: %s\n", estado1 );
    printf("Codigo: %s\n", codcarta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Area Km²: %.2f\n", areakm1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %i\n", pontosturisticos1);


    printf("Informações Carta 02\n");                              // exibição da resultado da carta 02
    printf("Estado: %s\n", estado2 );
    printf("Codigo: %s\n", codcarta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Area Km²: %.2f\n", areakm2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %i\n", pontosturisticos2);





    return 0;
}
