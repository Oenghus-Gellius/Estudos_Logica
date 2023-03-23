/*
17) Antes do racionamento de energia ser decretado, quase ninguém falava em quilowatts; mas,
agora, todos incorporaram essa palavra em seu vocabulário. 
Sabendo-se que 100 quilowatts de energia custa um sétimo do salário mínimo, fazer um algoritmo que calcule e imprima:
- o valor em reais de cada quilowatt;
- o valor em reais a ser pago;
- o novo valor a ser pago por essa residência com um desconto de 10%
*/

#include <stdio.h>
#include <locale.h>

int main(){
    
    float quilowatts,consumo,gastoReais,desconto;
    const float SALARIO = 1320;
    printf("Insira o quasto em quilowatts.:");
    scanf("%f",&consumo);

    quilowatts=(SALARIO/7)/100;
    gastoReais=quilowatts*consumo;
    desconto=gastoReais*0.9;

    printf("\n1 quilowatts custa %.2f reais",quilowatts);
    printf("\nO valro total do gasto de Luz foi.:%.2f",gastoReais);
    printf("\nO valor a ser pago (com desconto de 10%%) é.:%.2f",desconto);

    return 0;
}