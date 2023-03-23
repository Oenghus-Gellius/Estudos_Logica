/*
5. Escreva	 um	 programa	 para	 ler	 3	 valores	 inteiros	 (considere	 que	 	 não	
serão	lidos	valores	iguais)	e	escrevê-los	em	ordem	crescente
*/
#include <stdio.h>

int main(){
    int n1,n2,n3,maior,meio,menor;

    printf("\nInsira o primeiro numero.:");
    scanf("%d",&n1);
    printf("\nInsira o segundo numero.:");
    scanf("%d",&n2);
    printf("\nInsira o terceiro numero.:");
    scanf("%d",&n3);   

    if (n1>=n2 && n2>=n3)
    {
        maior=n1;
        meio=n2;
        menor=n3;
    }
    if (n3>=n1 && n1>=n2)
    {
        maior=n3;
        meio=n1;
        menor=n2;
    }
    if (n2>=n3 && n3>=n1)
    {
        maior=n2;
        meio=n3;
        menor=n1;
    }
    if (n3>=n2 && n2>=n1)
    {
        maior=n3;
        meio=n2;
        menor=n1;
    }
    if (n2>=n1 && n1>=n3)
    {
        maior=n2;
        meio=n1;
        menor=n3;
    }
    if (n1>=n3 && n3>=n2)
    {
        maior=n1;
        meio=n3;
        menor=n2;
    }

    printf("A ordem dos numeros são: %d - %d - %d",menor,meio,maior);

    return 0;
}