/*
4) Maria quer saber quantos litros de gasolina precisa colocar em seu carro e quanto vai gastar para
fazer uma viagem até a casa de sua irmã. Faça algoritmo que leia:
 A distância da casa de Maria até sua irmã;
 O consumo do carro de Maria (KM rodados / litro);
 O preço da gasolina (litro).
E mostre as informações que Maria necessita.
*/
#include <stdio.h>

int main(){
    float dist, cons, precoGas, quantosLitros, gastViagem;

    printf("\nInsira a Distancia entre as duas cidades.:");
    scanf("%f",&dist);
    printf("\nInsira o consumo do carro por litro KM/L.:");
    scanf("%f",&cons);
    printf("\nInsira o preço da gasolina.:");
    scanf("%f",&precoGas);

    quantosLitros=(dist/cons);
    gastViagem=(quantosLitros*precoGas);

    printf("\nO gasto de combustivel é.: %.1f litros. E gastara %.1f Reais",quantosLitros,gastViagem);

    return 0;
}