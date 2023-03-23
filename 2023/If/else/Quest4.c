/*
4. As	maçãs	 custam	 R$	 0,30	 cada	 se	 forem	 compradas	menos	 do	 que	 uma	
dúzia,	 e	 R$	 0,25	 se	 forem	 compradas	 pelo	 menos	 doze.	 Escreva	 um	
programa	 que	 leia	 o	 número	 de	 maçãs	 compradas,	 calcule	 e	 escreva	 o	
valor	total	da	compra.
*/
#include <stdio.h>

int main(){
    int maca;
    float totalvalor;

    printf("\nQuantas maças vai querer.:");
    scanf("%d",&maca);

    if (maca < 12)
    {
        totalvalor=maca*0.30;
    }
    else
    {
        totalvalor=maca*0.25;
    }
    printf("%d maças custão %.1f",maca,totalvalor);
    
    return 0;
}