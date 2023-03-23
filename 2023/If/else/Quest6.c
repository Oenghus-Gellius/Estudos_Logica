/*
6. Tendo	 como	 entrada	 a	 altura	 e	 o	 sexo	 (codificado	 da	 seguinte	 forma:	
1:feminino	 	 2:masculino)	 de	 uma	 pessoa,	 construa	 um	 programa	 que	
calcule	e	imprima	seu	peso	ideal,	utilizando	as	seguintes	
Fórmulas:	
- para	homens:	(72.7	*	Altura)	– 58	
- para	mulheres:	(62.1	*	Altura)	– 44.7	
*/
#include <stdio.h>

int main(){
    int sexo;
    float altura, pesoIdeal;

    printf("\nInsira sua altura.:");
    scanf("%f",&altura);
    printf("\n1-Feminimo 2-Masculino\nIndique seu sexo.:");
    scanf("%d",&sexo);

    if (sexo == 1)
    {
        pesoIdeal=62.1*altura-44.7;
    }
    if (sexo == 2)
    {
        pesoIdeal=72.7*altura-58;
    }
    printf("Seu peso ideal.:%.1f",pesoIdeal);
    
    return 0;
}