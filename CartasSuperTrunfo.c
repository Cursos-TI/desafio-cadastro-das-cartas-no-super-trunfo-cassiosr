#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char cidade;
    int estado, populacao, pontos, codigo;
    float area, PIB;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o codigo do estado de Carta 1 de A a H: \n");
    scanf("%d", &estado);
    printf("Digite o codigo da carta: \n");
    scanf("%d", &codigo);
    printf("Digite a cidade: \n");
    scanf("%s", &cidade);
    printf("Digite a população: \n");
    scanf("%d", &populacao);
    printf("Digite a área da cidade: \n");
    scanf("%f", &area);
    printf("Digite o PIB: \n");
    scanf("%f", &PIB);
    printf("Digite a pontuação: \n");
    scanf("%d", &pontos);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Carta1\n Estado: %d\n Código: %d\n Nome da cidade: %s\n População: %d\n Área: %f\n PIB: %f\n Número de Pontos Turísticos: %d\n", estado, codigo, cidade, populacao, area, PIB);

    return 0;
}
