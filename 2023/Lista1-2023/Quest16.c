/*
16) Faça um algoritmo que efetue o cálculo da quantidade de litros de combustível gastos em uma
viagem, sabendo-se que o carro faz 12 km com um litro. Deverão ser fornecidos o tempo gasto na
viagem e a velocidade média.

Distância = Tempo x Velocidade. 
Litros = Distancia / 12.

O algoritmo deverá apresentar os valores da Distância percorrida e a quantidade de Litros
utilizados na viagem.
*/
#include <stdio.h>

int main(){
    float tempo,velocidade,distancia,litros;

    printf("Digite o tempo gasto na viagem.:");
    scanf("%f",&tempo);
    printf("Digite a velocidade media da viagem.:");
    scanf("%f",&velocidade);

    distancia=tempo*velocidade;
    litros=distancia/12;

    printf("A quantidade e litros gastos na viagem são.:%.1f. Para uma distancia de.: %.1f",litros,distancia);

    return 0;
}