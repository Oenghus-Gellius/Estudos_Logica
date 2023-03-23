/*
5. Fazer um programa em "C" que solicite 2 números e informe:
 a) A soma dos números;
 b) O produto do primeiro número pelo quadrado do segundo;
 c) O quadrado do primeiro número;
 d) A raiz quadrada da soma dos quadrados;
 e) O seno da diferença do primeiro número pelo segundo;
 f) O módulo do primeiro número.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int n1, n2, soma, prod, quadN1, quadN2,somaQuad, modulo; 
    float raiz, seno;

    printf("\nIsira o valor do primeiro Numero:");
    scanf("%d",&n1);
    printf("\nIsira o valor do segundo Numero:");
    scanf("%d",&n2);

    soma=n1+n2;//A soma dos números
    prod=n1*n2;//produto
    quadN1=n1*n1;//quadrado n1
    quadN2=n2*n2;//quadrado n2
    somaQuad=quadN1+quadN2;
    raiz=sqrt(somaQuad);//A raiz quadrada da soma dos quadrados usar sqtr
    seno= n1-n2;//O seno da diferença do primeiro número pelo segundo
    modulo= n1;//O módulo do primeiro número.
    if (modulo>=0)
    {
        modulo=modulo;
    }
    else
    {
        modulo=modulo*(-1);
    }
    
    printf("\nA Soma dos numeros são %d.",soma);
    printf("\nO produto dos numeros são %d.",prod);
    printf("\nO quadrado do primeiro número é %d.",quadN1);
    printf("\nA raiz quadrada da soma dos quadrados é %d.",raiz);
    printf("\nO seno da diferença do primeiro número pelo segundo é %d.",seno);
    printf("\nO módulo do primeiro número. %d.",modulo);
    
    return 0;
}

