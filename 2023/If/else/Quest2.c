/*
2. Escreva	 um	 programa	 para	 ler	 o	 ano	 de	 nascimento	 de	 uma	 pessoa	 e	
escrever	 uma	 mensagem	 que	 diga	 se	 ela	 poderá	 ou	 não	 votar	 este	 ano	
(não	é	necessário	considerar	o	mês	em	que	ela	nasceu).
*/
#include <stdio.h>

int main (){
    int anoNasc;
    int const MAIORIDADE=2007;

    printf("Insira seu ano de nscimento:");
    scanf("%d",&anoNasc);
    if (anoNasc >=MAIORIDADE)
    {
        printf("Você Não pode votar!");
    }
    else
    {
        printf("Você pode votar!");
    }
    return 0;
}