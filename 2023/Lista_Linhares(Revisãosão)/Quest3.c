/*
3. Fazer um programa para calcular uma trajetória parabólica. O programa deve: 
a. Receber do usuário a altura relativa ao solo de onde o projétil é lançado, a velocidade 
inicial em m/s e o ângulo de lançamento 
b. Calcular e mostrar a quantos metros de distância o projétil atingirá o chão, 
considerando aceleração da gravidade igual a 9,81 m/s2.
*/
#include <stdio.h>
#include <math.h>

int main(){
    double altRelativa,lacamentoPorto,velInicial,ang,tempo,distancia;

    printf("Isnira o valor da Altura Relativa.:");
    scanf("%f",&altRelativa);
    printf("Isnira o valor do Ponto de laçamento.:");
    scanf("%f",&lacamentoPorto);
    printf("Isnira o valor da velocidade inicial.:");
    scanf("%f",&velInicial);
    printf("Isnira o valor do Angulo.:");
    scanf("%f",&ang);

    // Converter ângulo para radianos
    ang = ang * M_PI / 180;

    // Calcular tempo de voo
    tempo = (2 * velocidade * sin(angulo)) / g;

    // Calcular distância percorrida
    distancia = velocidade * cos(angulo) * tempo;

    return 0;
}