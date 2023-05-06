/*
9) Uma locadora de vídeos guarda, em um vetor de 500 posições, a quantidade de filmes
retirados por seus clientes durante o ano de 2013. Agora, esta locadora está fazendo uma
promoção e, para cada 10 filmes retirados, o cliente tem direito a uma locação grátis. Faça
um programa que crie um outro vetor contendo a quantidade de locações gratuitas a que
cada cliente tem direito.
*/
#include <stdio.h>
#define LOCACOES 50
#define PROMO 5
    int main(){
        int vetLocacoes[LOCACOES],vetPormo[PROMO];
        int i,k,ultimaPos;

        k=0;
        do
        {
            printf("\nInsira o numero de locações.:");
            scanf("%d",&vetLocacoes[k]);
            while (vetLocacoes[k] <= 0)
            {
                printf("\nNumero de Locações invalidas.:");
                printf("\nInsira o numero valido de locações.:");
                scanf("%d",&vetLocacoes[k]);
            }
            k++;

        } while (k < LOCACOES);
        

        return 0;
    }


