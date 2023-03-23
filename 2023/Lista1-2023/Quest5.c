/*
5) Faça um algoritmo que leia quanto você ganha por hora e o número de horas trabalhadas no
mês. Na sequência, calcule e mostre o total do seu salário no referido mês.
*/

#include <stdio.h>

int main(){
    float ganhoHora, horaTrab, salario;

    printf("\nInsira seu valor por hora/trabalho.:");
    scanf("%f",&ganhoHora);
    printf("\nHoras trabalhadas semanais.:");
    scanf("%f",&horaTrab);

    salario=(ganhoHora*horaTrab)*4;

    printf("\nSeu salario é.:%.2f",salario);
    return 0;
}