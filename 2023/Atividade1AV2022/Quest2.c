/*
Questão 02)
Uma determinada empresa vende seus produtos em quatro diferentes estados. Cada estado 
possui uma taxação de imposto diferente sobre o produto (MG: 7%; SP: 12%; RJ: 15%; 
MS: 8%). Faça um programa em que o usuário entre com o valor e o estado destino do 
produto e o programa retorne o preço final do produto acrescido do imposto
correspondente ao estado onde será vendido. O programa deve mostrar uma mensagem
de erro caso o estado fornecido não esteja na lista de estados válidos.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int estado;
    float valorProd, valorFinal;

    printf("Entre com o valor do produto:");
    scanf("%f", &valorProd);
    printf("\nEscolha o Estado o de venda:\n1-MG\n2-SP\n3-RJ\n4-MS\nEstado:");
    scanf("%d",&estado);

    if (estado>0 && estado<5)
    {
        switch (estado)
        {
        case 1:
            valorFinal=valorProd+(valorProd*0.07);
            break;
        case 2:
            valorFinal=valorProd+(valorProd*0.12);
            break;
        case 3:
            valorFinal=valorProd+(valorProd*0.15);
            break;
        case 4:
            valorFinal=valorProd+(valorProd*0.08);
            break;    
        default:
            break;
        }
        printf("O valor final do produto é %.2f",valorFinal);
    }
    else
    {
        printf("\nEstado não existe na lista de entrega!!!!\n");
    }

    return 0;
}