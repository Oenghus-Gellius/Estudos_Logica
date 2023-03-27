/*
8) Uma empresa concederá um aumento de salário aos seus funcionários, variável de acordo com o
cargo, conforme a tabela abaixo. Faça um algoritmo que leia o salário e o cargo de um funcionário e
calcule o novo salário. Se o cargo do funcionário não estiver na tabela, ele deverá, então, receber
40% de aumento. Mostre o salário antigo, o novo salário e a diferença.
Código Cargo Percentual 
101 Gerente 10% 
102 Engenheiro 20% 
103 Técnico 30%
*/
#include <stdio.h>

int main(){
    int cargo;
    float salario,salarioFinal;

    printf("Insira o codigo do cargo.:");
    scanf("%d",&cargo);
    printf("Insira o salario.:");
    scanf("%f",&salario);
    switch (cargo)
    {
    case 101:
        salarioFinal=salario+salario*0.10;
        break;
    case 102:
        salarioFinal=salario+salario*0.20;
        break;
    case 103:
        salarioFinal=salario+salario*0.30;
        break;    
    default:
        break;
    }
    printf("Cargo codigo %d - Salario - %.2f - Salario Final - %.2f",cargo,salario,salarioFinal);
    return 0;
}