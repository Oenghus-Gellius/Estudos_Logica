/*
Autor.: Bolívar Augusto Dias Jr
Data.: 30/03-23
Questão 03)
Escreva um programa que informe a quantidade total de calorias de uma refeição a partir do
usuário que deverá informar o prato, a sobremesa e a bebida (veja a tabela a seguir).
    Prato           Calorias    Sobremesa           Calorias    Bebida              Calorias
1-  Vegetariano     180 cal     Abacaxi             75 cal      Chá                 20 cal
2-  Peixe           230 cal     Sorvete diet        110 cal     Suco de laranja     70 cal
3-  Frango          250 cal     Mousse diet         170 cal     Suco de melão       100 cal
4-  Carne           350 cal     Mousse chocolate    200 cal     Refrigerante diet   65 cal
Obs. Valiudar a entrada de dados.
*/

#include <stdio.h>
int main(){
    int prato,sobremesa,bebida,totalCal;
/*    Prato          Sobremesa             Bebida              
1-  Vegetariano      Abacaxi               Chá                 
2-  Peixe            Sorvete diet          Suco de laranja     
3-  Frango           Mousse diet           Suco de melão       
4-  Carne            Mousse chocolate      Refrigerante diet*/
    printf("\tPrato:\n1-Vegetariano \n2-Peixe \n3-Frango \n3-Carne");
    printf("\nInsira o numero do seu prato.:");
    scanf("%d",&prato);
    printf("\tSobremesa \n1-Abacaxi \n2-Sorvete diet \n3-Mousse diet \n4-Mousse chocolate");
    printf("\nInsira o numero da sobremesa.:");
    scanf("%d",&sobremesa);
    printf("\tBebida \n1-Chá \n2-Suco de laranja   \n3-Suco de melão   \n4-Refrigerante diet");   
    printf("\nInsira o numero da bebida.:");
    scanf("%d",&bebida);    

    switch (prato)
    {
    case 1:
        printf("\nVegetariano");
        totalCal=180;
        break;
    case 2:
        printf("\nPeixe");
        totalCal=230;
        break;
    case 3:
        printf("\nFrango");
        totalCal=250;
        break;
    case 4:
        printf("\nCarne");
        totalCal=350;
        break;            
    default:
        break;
    }
    switch (sobremesa)
    {
    case 1:
        printf("\nAbacaxi");
        totalCal=totalCal+75;
        break;
    case 2:
        printf("\nSorvete diet");
        totalCal=totalCal+110;
        break;
    case 3:
        printf("\nMousse diet ");
        totalCal=totalCal+170;
        break;
    case 4:
        printf("\nMousse chocolate");
        totalCal=totalCal+200;
        break;    
    default:
        break;
    }
    switch (bebida)
    {
    case 1:
        printf("\nCha");
        totalCal=totalCal+20;
        break;
    case 2:
        printf("\nSuco de laranja ");
        totalCal=totalCal+70;
        break;
    case 3:
        printf("\nSuco de melão ");
        totalCal=totalCal+100;
        break;
    case 4:
        printf("\nRefrigerante diet");
        totalCal=totalCal+65;
        break;

    default:
        break;
    }
    printf("\nO total de Calorias em sua refeição foi %d",totalCal);

    return 0;
}