/*
11. Escreva	 um	 programa	 que	 leia	 o	 valor	 de	 3	 ângulos	 de	 um	 triângulo	 e	
escreva	 se	 o	 triângulo	 é	 Acutângulo,	 Retângulo	 ou	 Obtusângulo.	 Sendo	
que:	
− Triângulo	Retângulo:	possui	um	ângulo	reto.	(igual	a	90º)
− Triângulo	Obtusângulo:	possui	um	ângulo	obtuso.	(maior	que90º)	
− Triângulo	Acutângulo:	possui	três	ângulos	agudos.	(menor	que	90º
*/
#include <stdio.h>

int main(){
    int ang1,ang2,ang3;

    printf("Insira o primeiro angulo.:");
    scanf("%d",&ang1);
    printf("Insira o segundo angulo.:");
    scanf("%d",&ang2);
    printf("Insira o terceiro angulo.:");
    scanf("%d",&ang3);
    
    if (ang1==90 || ang2==90 || ang3==90)
    {
        printf("Triângulo	Retângulo");
    }
    if (ang1>90 || ang2>90 || ang3>90)
    {
        printf("Triângulo	Obtusângulo");
    }
    else
    {
        printf("Triângulo	Acutângulo");
    }
    
    return 0;
}