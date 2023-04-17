/*

*/
#include <stdio.h>

int main()
{
    int n,numerador,denominador; //n - número de termos da série; contador sempre deve ser inteiro.
    int contador;
    double soma;
    
    printf("Forneça o número de termos da série:\n");
    scanf("%d", &n);
    
    if(n>0){
        numerador = 1;
        denominador = n;
        soma = 0;
        while(numerador<=n){
            soma=soma+(double)numerador/denominador; //quando a divisão é de dois inteiros, é necessário colocar um double(ponto flututante).
            numerador++;
            denominador--;
            contador++;
        }
        printf("\nO valor da soma dos %d primeiros termos = %lf",n,soma);
    }
    else
        printf("\nO valor deve ser maior que 0.\n");
        
    return 0;
}