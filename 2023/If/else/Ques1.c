/*1. Escreva	 um	 programa	 para	 ler	 2	 valores	 (considere	 que	 	 não	 serão	
informados	valores	iguais)	e	escrever	o	maior	deles.*/
#include <stdio.h>

int main (){
    int n1, n2, maior, menor;

    printf("Insira o primeiro numero.:");
    scanf("%d",&n1);
    printf("Insira o segundo numero.:");
    scanf("%d",&n2);  
    if (n1 > n2)
    {
        maior=n1;
        menor=n2;
    }
    else
    {
        maior=n2;
        menor=n1;
    }
    printf("%d é o maior numero digitado",maior);

    return 0;
}