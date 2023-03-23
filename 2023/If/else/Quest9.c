/*
9. Escreva	um	programa	para	ler	3	valores	inteiros	e	escrever	o	maior	deles.	
Considere	que	o	usuário	não	informará	valores	iguais
*/
#include <stdio.h>
int main(){
    int n1,n2,n3,maior,meio,menor;

    printf("\nInsira o Primeiro numero.:");
    scanf("%d",&n1);
    printf("\nInsira o Segundo numero.:");
    scanf("%d",&n2);
    printf("\nInsira o Terceiro numero.:");
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
    if (n1>=n3 && n3>=n1)
    {
        maior=n1;
        meio=n3;
        menor=n2;
    }
    
    printf("O maior valor é %d",maior);
    return 0;
}