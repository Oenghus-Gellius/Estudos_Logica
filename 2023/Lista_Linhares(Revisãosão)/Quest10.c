/*
10. (Cortesia do Prof. Bogdan Tomoyuki Nassu) Escreva um programa que receba a velocidade 
máxima em uma avenida e a velocidade com que um motorista estava dirigindo nela. 
Calcule a multa que o motorista vai receber, considerando que são pagos R$ 5,00 por cada 
km/h que estiver acima da velocidade permitida (considere apenas números inteiros). Se a 
velocidade do motorista estiver dentro do limite, o programa deve informar que não há 
multa.
*/
#include <stdio.h>

int main(){
    int velMax,velVeiculo;
    float valorMulta;

    printf("Insira a Velociade Maxima.:");
    scanf("%d",&velMax);
    printf("Insira a velocidade do veiculo.:");
    scanf("%d",&velVeiculo);

    if (velMax<velVeiculo)
    {
        valorMulta=(float)(velVeiculo-velMax)*5.00;
        printf("O valor da multa é.: %.2f",valorMulta);
    }
    else
    {
        printf("\nNão há multa!!!");
    }

    return 0;
}