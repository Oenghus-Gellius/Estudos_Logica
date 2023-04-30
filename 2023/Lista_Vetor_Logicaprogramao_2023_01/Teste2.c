#include <stdio.h>
#include <string.h>

#define MAX_JOGADORES 20000
#define MAX_NOME 50

int main() {
    int num_semanas;
    scanf("%d", &num_semanas);

    char nomes[MAX_JOGADORES][MAX_NOME];
    int pontos[MAX_JOGADORES] = {0};
    int num_jogadores = 0;

    for (int semana = 1; semana <= num_semanas; semana++) {
        int num_jogadores_semana;
        scanf("%d", &num_jogadores_semana);

        for (int i = 0; i < num_jogadores_semana; i++) {
            char nome_jogador[MAX_NOME];
            scanf("%s", nome_jogador);

            // Procurar jogador na lista de jogadores
            int index_jogador = -1;
            for (int j = 0; j < num_jogadores; j++) {
                if (strcmp(nomes[j], nome_jogador) == 0) {
                    index_jogador = j;
                }
            }

            // Se não encontrou, adiciona novo jogador
            if (index_jogador == -1) {
                index_jogador = num_jogadores;
                strcpy(nomes[index_jogador], nome_jogador);
                pontos[index_jogador] = 0;
                num_jogadores++;
            }

            // Atribuir pontos ao jogador
            pontos[index_jogador] += (10 - i);
        }
    }

    // Encontrar jogador com mais pontos
    int max_pontos = -1;
    int index_max_pontos = -1;
    for (int i = 0; i < num_jogadores; i++) {
        if (pontos[i] > max_pontos) {
            max_pontos = pontos[i];
            index_max_pontos = i;
        }
    }

    // Imprimir resultado
    printf("%s\n", nomes[index_max_pontos]);
    for (int i = 0; i < num_jogadores; i++) {
        if (pontos[i] == max_pontos && i != index_max_pontos) {
            printf("%s\n", nomes[i]);
        }
    }

    return 0;
}