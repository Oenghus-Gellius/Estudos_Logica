/*
Bolivar A. D. Junior
15/06-2023

Os elementos aijde uma matriz inteira Anxn representam os custos de transporte da
cidade i para a cidade j. Dados n itinerários, cada um com k cidades, 
calcular o custo total para cada itinerário.

*/
#include <stdio.h>

#define MAX 100

int main() {
    int n, k; // dimensões da matriz de custos
    int matriz[MAX][MAX]; // matriz de custos de transporte
    int itinerarios[MAX][MAX]; // matriz de itinerários
    int custoTotal[MAX]; // vetor de custos totais para cada itinerário

    // Leitura das dimensões da matriz
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    // Leitura dos custos de transporte
    printf("Digite os custos de transporte:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Leitura dos itinerários
    printf("Digite o número de itinerários (k): ");
    scanf("%d", &k);

    printf("Digite os itinerários:\n");
    for (int i = 0; i < k; i++) {
        printf("Itinerário %d: ", i + 1);
        for (int j = 0; j < n; j++) {
            scanf("%d", &itinerarios[i][j]);
        }
    }

    // Cálculo do custo total para cada itinerário
    for (int i = 0; i < k; i++) {
        custoTotal[i] = 0;

        for (int j = 0; j < n - 1; j++) {
            int cidadeOrigem = itinerarios[i][j];
            int cidadeDestino = itinerarios[i][j + 1];

            custoTotal[i] += matriz[cidadeOrigem][cidadeDestino];
        }
    }

    // Exibição dos custos totais
    printf("\nCusto total para cada itinerário:\n");
    for (int i = 0; i < k; i++) {
        printf("Itinerário %d: %d\n", i + 1, custoTotal[i]);
    }

    return 0;
}
