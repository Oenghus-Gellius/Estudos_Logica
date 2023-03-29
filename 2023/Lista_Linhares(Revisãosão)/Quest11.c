/*
11. Escreva um programa para receber do usuário um mês (de 1 a 12) e um ano (de 0 D.C. em 
diante) e mostrar o número de dias daquele mês daquele ano. Utilizar switch e levar em 
consideração anos bissextos para o cálculo. 
*/
#include <stdio.h>

int main() {
    int mes, ano, num_dias;
    
    printf("Digite um mes (1-12): ");
    scanf("%d", &mes);
    
    printf("Digite um ano: ");
    scanf("%d", &ano);
    
    switch (mes) {
        case 2:
            if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
                num_dias = 29;
            } else {
                num_dias = 28;
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            num_dias = 30;
            break;
        default:
            num_dias = 31;
    }
    
    printf("O mes %d do ano %d tem %d dias.\n", mes, ano, num_dias);
    
    return 0;
}