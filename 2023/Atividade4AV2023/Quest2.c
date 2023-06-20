/*
Bolivar A. D. Junior
15/06-2023

Questão 02) Faça um programa que receba:
a) 10 nomes de produtos e armazene-os em um vetor (o nome é único);
b) o nome de cada uma das cinco lojas (nome é único)
c) o estoque de cada um destes produtos, em cada um das cinco lojas e armazene-os em 
uma matriz 5X10;
d) O custo(preço) dos 10 produtos e armazene-os em um vetor.
Após a leitura dados deve ser calculado e impresso:
 O total de itens armazenados em cada loja;
 O total de itens armazenados de cada produto em todos as lojas juntos;
 O nome do produto e o nome da loja que possui a maior quantidade de itens estocados
deste produto(considere a situação de empate);
 O nome e o valor estocado de cada produto(soma das lojas)
*/

#include <stdio.h>
#include <string.h>
#define PRODUTO 3
#define LOJA 2

int funcNomeRepet(char nomeEntrada[], char nomeVet[][100], int tamanho){
    int i;
    for (i = 0; i < tamanho; i++)
    {
        if (strcmp (nomeEntrada,nomeVet[i])==0)
        {
            return 1;
        }
    }
    return 0;
}

int main(){
    char nomeEnter[100];
    char nomeProdVet[PRODUTO][100], nomeLoja[LOJA][100];
    int produtoQtd[LOJA][PRODUTO];
    int i,k,qtdTotalPorLoja,qtdPorProdutos,maiorQtdprod,baseLoja,baseProd,qtdProd;
    float valorProd[PRODUTO],valorTotal;

    for (i = 0; i < PRODUTO; i++)//inserindo os produtos
    {
        printf("\nInsira o nome do %dº Produto.:",i+1);
        fgets(nomeEnter,100,stdin);
        setbuf(stdin,NULL);
        if (funcNomeRepet(nomeEnter,nomeProdVet,PRODUTO))
        {
            printf("\nNome repetido.");
            i--;
        }
        else
        {
            strcpy(nomeProdVet[i],nomeEnter);
        }
    }
    for (i = 0; i < LOJA; i++)//registor loja
    {
        printf("\nInsira o nome da Loja.:");
        fgets(nomeEnter,100,stdin);
        setbuf(stdin,NULL);
        if (funcNomeRepet(nomeEnter,nomeLoja,LOJA))
        {
            printf("Loja já existente.");
        }
        else
        {
            strcpy(nomeLoja[i],nomeEnter);
        }
    }
    //Fazendo o controle de estoque
    printf("\nControle de Estoque");
    for (i = 0; i < LOJA; i++)
    {
        printf("\nLoja.: %s",nomeLoja[i]);
        for (k = 0; k < PRODUTO; k++)
        {
            printf("\n%d-%s - Quantidade.:",k+1,nomeProdVet[k]);
            scanf("%d",&produtoQtd[i][k]);
        }
    }    
    //registro dos preços dos produtos
    printf("Insira o valor dos prudutos.:\n");
    for (i = 0; i < PRODUTO; i++)
    {
        printf("%d-%s.:",i+1,nomeProdVet[i]);
        scanf("%f",&valorProd[i]);
    }
    //saida de dados
    printf("\n-------Estoque Geral-------");
    for (i = 0; i < LOJA; i++)//Estoque de produtos por loja
    {
        qtdTotalPorLoja=0;
        printf("\nLoja.: %s",nomeLoja[i]);
        for (k = 0; k < PRODUTO; k++)
        {
            qtdTotalPorLoja=qtdTotalPorLoja+produtoQtd[i][k];
        }
        printf("Estoque de %d produtos.",qtdTotalPorLoja); 
    }
    printf("\nEstoque por produtos.:");
    for (i = 0; i < PRODUTO; i++)//Total de cada produto
    {
        qtdPorProdutos=0;
        printf("\n%d -%s-",i+1,nomeProdVet[i]);
        for (k = 0; k < LOJA; k++)
        {
            qtdPorProdutos=qtdPorProdutos+produtoQtd[k][i];
        }
        printf("\nEstoque de %d produtos.",qtdPorProdutos);
    }
    maiorQtdprod=0;
    baseLoja=0;
    baseProd=0;
    for (i = 0; i < LOJA; i++)
    {
        for (k = 0; k < PRODUTO; k++)
        {
            if (maiorQtdprod<produtoQtd[i][k])
            {
                maiorQtdprod=produtoQtd[i][k];
                baseLoja=i;
                baseProd=k;
            }
        }
    }
    //O nome do produto e o nome da loja que possui a maior quantidade de itens estocados deste produto(considere a situação de empate);
    printf("\nA loja %s Tem %d de %s",nomeLoja[baseLoja],produtoQtd[baseLoja][baseProd],nomeProdVet[baseProd]);
    
    valorTotal=0;
    qtdProd=0;
    for (i = 0; i < PRODUTO; i++)//O nome e o valor estocado de cada produto(soma das lojas)
    {
        for (k = 0; k < LOJA; k++)
        {
            qtdProd=qtdProd+produtoQtd[k][i];
        }
        valorTotal=qtdProd*valorProd[i];
        printf("\nO produto %s tem %d em estoque com o valor total de %.2f",nomeProdVet[i],qtdProd,valorTotal);
        qtdProd=0;
        valorTotal=0;
    }
    return 0;
}