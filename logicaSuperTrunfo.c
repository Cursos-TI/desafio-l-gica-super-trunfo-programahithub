#include <stdio.h>

#define NUM_CARTAS 2

// Estrutura da carta
struct CartaCidade {
    char estado;
    char codigo[4];
    char nomeCidade[100];
    unsigned long int populacao;
    float area;
    float pib; // em bilhões de reais
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
    float superPoder;
};

// Função para registrar a carta
void registrarCarta(struct CartaCidade *carta) {
    printf("\n--- Registro da Carta ---\n");

    printf("Estado (A-H): ");
    scanf(" %c", &carta->estado);

    printf("Código da Carta (ex: A01): ");
    scanf(" %3s", carta->codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta->nomeCidade);

    printf("População: ");
    scanf("%lu", &carta->populacao);

    printf("Área (em km2): ");
    scanf("%f", &carta->area);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta->pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta->pontosTuristicos);

    // Cálculo da densidade populacional
    carta->densidadePopulacional = carta->populacao / carta->area;

    // PIB per capita = (PIB * 1.000.000.000) / população
    float pibReais = carta->pib * 1000000000.0;
    carta->pibPerCapita = pibReais / carta->populacao;

    // Super Poder
    carta->superPoder = 
        (float)carta->populacao + 
        carta->area + 
        carta->pib + 
        (float)carta->pontosTuristicos + 
        carta->pibPerCapita + 
        (1.0 / carta->densidadePopulacional);
}

// Função para comparar atributos e exibir resultados
void compararCartas(struct CartaCidade c1, struct CartaCidade c2) {
    printf("\n--- Comparação de Cartas ---\n");

    printf("População: Carta 1 venceu (%d)\n", c1.populacao > c2.populacao);
    printf("Área: Carta 1 venceu (%d)\n", c1.area > c2.area);
    printf("PIB: Carta 1 venceu (%d)\n", c1.pib > c2.pib);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", c1.pontosTuristicos > c2.pontosTuristicos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", c1.densidadePopulacional < c2.densidadePopulacional);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", c1.pibPerCapita > c2.pibPerCapita);
    printf("Super Poder: Carta 1 venceu (%d)\n", c1.superPoder > c2.superPoder);
}

// Função para exibir a carta
void exibirCarta(struct CartaCidade carta, int indice) {
    printf("\nCarta %d:\n", indice + 1);
    printf("Estado: %c\n", carta.estado);
    printf("Código: %s\n", carta.codigo);
    printf("Nome da Cidade: %s\n", carta.nomeCidade);
    printf("População: %lu\n", carta.populacao);
    printf("Área: %.2f km2\n", carta.area);
    printf("PIB: %.2f bilhões de reais\n", carta.pib);
    printf("Número de Pontos Turísticos: %d\n", carta.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km2\n", carta.densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", carta.pibPerCapita);
    printf("Super Poder: %.2f\n", carta.superPoder);
}

int main() {
    struct CartaCidade cartas[NUM_CARTAS];

    for (int i = 0; i < NUM_CARTAS; i++) {
        printf("\nCadastro da Carta %d:\n", i + 1);
        registrarCarta(&cartas[i]);
    }

    for (int i = 0; i < NUM_CARTAS; i++) {
        exibirCarta(cartas[i], i);
    }

    compararCartas(cartas[0], cartas[1]);

    return 0;
}

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.


    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
    // Trabalho logicaSuperTrunfoComparação das cartas
    
