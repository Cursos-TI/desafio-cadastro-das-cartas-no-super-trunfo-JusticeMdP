#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
    
    // Inicia as váriáveis de cada cidade

    //A variável estado deve ser uma letra maiúscula de A a H
    char estado1, estado2;

    //O código deve ser formado pela junção da Letra do estado mais um número de 01 a 04
    int codigo1, codigo2;

    //Nome da cidade. Evite usar nomes compostos separados por espaços, devido a limitação do scanf
    char nome1[50], nome2[50];

    //Populaçao deve ser um número inteiro
    int populacao1, populacao2;

    //Area deve ser um número de ponto flutuante, formato americano ("." ao invés de "," como separados de decimais)
    float area1, area2;

    //PIB em ponto flutuante
    float pib1, pib2;

    //pontos turísticos deve ser um número inteiro
    int pontosTuristicos1, pontosTuristicos2;

 
    //inicia o cadastro da primeira carta
    printf("Vamos cadastrar a primeira cidade!\n");
    printf("Digite a letra da primeira cidade. Deve ser uma letra maiúscula entre A e H: \n");
    scanf("%c", &estado1);

    printf("Digite o código da primeira cidade. Este código deve ser um número inteiro de 1 a 4: \n");
    scanf("%d", &codigo1);

    printf("Digite o nome da primeira cidade. Este nome não pode conter espaços: \n");
    scanf("%s", &nome1);

    printf("Digite o tamanho da população: \n");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos1);

    printf("\n");
    
    //Inicia o cadastro da segunda carta 
    printf("Vamos cadastrar a segunda cidade!\n");
    printf("Digite a letra da primeira cidade. Deve ser uma letra maiúscula entre A e H: \n");
    scanf("%c", &estado2);

    printf("Digite o código da primeira cidade. Este código deve ser um número inteiro de 1 a 4: \n");
    scanf("%d", &codigo2);

    printf("Digite o nome da primeira cidade. Este nome não pode conter espaços: \n");
    scanf("%s", &nome2);

    printf("Digite o tamanho da população: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos2);

    printf("\n");

    //Inicia a exibição da primeira carta
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %c0%d\n", estado1, codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d", populacao1);
    printf("Área (em km²): %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Número de Pontos Turísticos: %d", pontosTuristicos1);
    
    printf("\n");

    //inicia a segunda carta
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %c0%d\n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d", populacao2);
    printf("Área (em km²): %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Número de Pontos Turísticos: %d", pontosTuristicos2);


    return 0;
}
