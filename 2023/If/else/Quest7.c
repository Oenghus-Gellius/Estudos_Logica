/*
7. Escreva	um	programa	para	ler	o	número	de	lados	de	um	polígono	regular	
e	a	medida	do	lado	(em	cm).	Calcular	e	imprimir	o	seguinte:	
− Se	o	número	de	lados	for	igual	a	3	escrever	TRIÂNGULO	e	o	valor	da	
área
− Se	o	número	de	lados	for	igual	a	4	escrever	QUADRADO	e	o	valor	da	
sua	área.	
− Se	o	número	de	lados	for	igual	a	5	escrever	PENTÁGONO.
*/

#include <stdio.h>
#include <math.h>

int main (){
    int nLados;
    float compLado,perim,semipe,area;

    printf("\nInsita no numero de lados.:");
    scanf("%d",&nLados);
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