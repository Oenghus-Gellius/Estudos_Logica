#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Lê o número de medidas

    int dia_anterior, mes_anterior, ano_anterior, consumo_anterior;
    int dia_atual, mes_atual, ano_atual, consumo_atual;
    int dias_precisos = 0, consumo_total = 0;

    scanf("%d %d %d %d", &dia_anterior, &mes_anterior, &ano_anterior, &consumo_anterior);
    // Lê a primeira medida

    for (int i = 1; i < n; i++) {
        scanf("%d %d %d %d", &dia_atual, &mes_atual, &ano_atual, &consumo_atual);

        // Calcula a diferença entre as datas
        int dias_diferenca = (ano_atual - ano_anterior) * 365 + (mes_atual - mes_anterior) * 30 + (dia_atual - dia_anterior);

        // Considera anos bissextos
        for (int j = ano_anterior; j < ano_atual; j++) {
            if ((j % 4 == 0 && j % 100 != 0) || j % 400 == 0) {
                dias_diferenca++;
            }
        }

        // Se a diferença for maior que 1, houve um intervalo sem leitura
        if (dias_diferenca > 1) {
            // Subtrai o consumo anterior do atual para obter o consumo nesse intervalo
            int consumo_intervalo = consumo_atual - consumo_anterior;
            dias_precisos += dias_diferenca - 1; // Incrementa o número de dias com consumo preciso
            consumo_total += consumo_intervalo; // Incrementa o consumo total
        }

        // Atualiza as variáveis para a próxima iteração
        dia_anterior = dia_atual;
        mes_anterior = mes_atual;
        ano_anterior = ano_atual;
        consumo_anterior = consumo_atual;
    }

    // Imprime o resultado
    printf("%d %d\n", dias_precisos, consumo_total);

    return 0;
}