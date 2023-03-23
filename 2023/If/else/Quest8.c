/*
8. Acrescente	 as	 seguintes	 mensagens	 à	 solução	 do	 exercício	 anterior	
conforme	o	caso.	
− Caso	 o	 número	 de	 lados	 seja	 inferior	 a	 3	 escrever	 NÃO	 É	 UM	
POLÍGONO.	
− Caso	o	número	de	lados	seja	superior	a	5	escrever	POLÍGONO	NÃO	
IDENTIFICADO.
*/
#include <stdio.h>
#include <math.h>

int main (){
    int nLados;
    float compLado,perim,semipe,area;

    printf("\nInsita no numero de lados.:");
    scanf("%d",&nLados);

    if (nLados<3)
    {
        printf("Não é um Poligono");
        return 0;
    }
    if (nLados>5)
    {
        printf("Não é um poligono identificado");
        return 0;
    }

    printf("\n Insira o comprimento dos lados.:");
    scanf("%f",&compLado);

    if (nLados==3)
    {
        perim=compLado*3;
        semipe=perim/2;
        area=sqrt(semipe*(semipe-compLado)*(semipe-compLado)*(semipe-compLado));
        printf("QUADRADO com %.1f de area.",area);
    }
    if (nLados==4)
    {
        area=pow(compLado,2);
        printf("QUADRADO com %.1f de area.",area);
    }
    if (nLados==5)
    {
        printf("PENTAGONO");
    }

    
    
    return 0;
}
