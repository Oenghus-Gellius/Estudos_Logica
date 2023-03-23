/*
10. Escreva	 um	 programa que	 leia	 as	 medidas	 dos	 lados	 de	 um	 triângulo	 e	
escreva	se	ele	é	Equilátero,	Isósceles	ou	Escaleno.	Sendo	que:	
− Triângulo	Equilátero:	possui	os	3	lados	iguais.	
− Triângulo	Isóscele:	possui	2	lados	iguais.	
− Triângulo	Escaleno:	possui	3	lados	diferentes
*/
#include <stdio.h>

int main(){
    int l1,l2,l3;

    printf("Insira o valor do primeiro lado.");
    scanf("%d",&l1);
    printf("Insira o valor do Sefundo lado.");
    scanf("%d",&l2);
    printf("Insira o valor do Terceiro lado.");
    scanf("%d",&l3);
    if (l1==l2 && l2==l3)
    {
        printf("Triângulo	Equilátero!");
    }
    if (l1==l2 || l2==l3 || l1==l3)
    {
        printf("Triângulo	Isóscele");
    }
    else
    {
        printf("Triângulo	Escaleno");
    }
    
    
    
    return 0;
}