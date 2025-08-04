#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char cidade1, cidade2;
    int estado1, estado2, populacao1, populacao2, pontos1, pontos2, codigo1, codigo2;
    float area1, area2, PIB1, PIB2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o codigo do estado de Carta 1 de A a H: \n");
    scanf("%d", &estado1);
    printf("Digite o codigo da carta: \n");
    scanf("%d", &codigo1);
    printf("Digite a cidade: \n");
    scanf("%s", &cidade1);
    printf("Digite a população: \n");
    scanf("%d", &populacao1);
    printf("Digite a área da cidade: \n");
    scanf("%f", &area1);
    printf("Digite o PIB: \n");
    scanf("%f", &PIB1);
    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontos1);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Carta1\n Estado: %d\n Código: %d\n Nome da cidade: %s\n População: %d\n Área: %f\n PIB: %f\n Número de Pontos Turísticos: %d\n", estado1, codigo1, cidade1, populacao1, area1, PIB1);

    printf("Digite o codigo do estado de Carta 2 de A a H: \n");
    scanf("%d", &estado2);
    printf("Digite o codigo da carta: \n");
    scanf("%d", &codigo2);
    printf("Digite a cidade: \n");
    scanf("%s", &cidade2);
    printf("Digite a população: \n");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade: \n");
    scanf("%f", &area2);
    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);
    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontos2);

    printf("Carta2\n Estado: %d\n Código: %d\n Nome da cidade: %s\n População: %d\n Área: %f\n PIB: %f\n Número de Pontos Turísticos: %d\n", estado2, codigo2, cidade2, populacao2, area2, PIB2);

    return 0;
}
