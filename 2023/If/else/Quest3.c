/*
3. Escreva	 um	 programa	 que	 verifique	 a	 validade	 de	 uma	 senha	 fornecida	
pelo	 usuário.	 A	 senha	 válida	 é	 o	 número	 1234.	Devem	 ser	impressas	 as	
seguintes	mensagens:	
ACESSO	PERMITIDO	caso	a	senha	seja	válida.	
ACESSO	NEGADO	caso	a	senha	seja	inválida.
*/
#include <stdio.h>

int main(){
    int mat, senha;
    int const confSenha=1234;

    printf("Insira a senha.:");
    scanf("%d",&senha);
    if (senha==confSenha)
    {
        printf("ACESSO	PERMITIDO!!!");
    }
    else
    {
        printf("ACESSO	NEGADO!!!");
    }
    return 0;
}