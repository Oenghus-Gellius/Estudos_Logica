/*
4) Faça um programa que mostre o menu:
1 – Cadastro de Departamento
2 - Cadastro de Funcionários
3 – Consulta de Funcionários
4 – Funcionários de um Departamento
5 – Excluir Funcionário
6 – Excluir Departamento
7 – Fim
Caso a opção selecionada seja;
Cadastro de Departamento; cadastrar o código, nome e sigla de no máximo 20 departamentos. O
código é único e o nome não pode ser vazio.
Cadastro de Funcionários; cadastrar a matrícula, nome, data de nascimento, cpf, salário e código de
departammento de no máximo 1000 funcionários.
Obs.;
a) A matrícula é única;
b) O nome não pode ser vazio;
c) Validar a data de nascimento e cpf;
d) O salário deve ser maior que zero;
e) Aceitar para o campo código do departamento apenas departamentos já cadastrados.
Consulta de Funcionários: mostrar a matrícula, nome e nome do departamentos dos funcionários que
tenham o nome com um determinado prefixo.
Funcionários de um Departamento: mostrar os dados dos funcionários pertencentes a um
determinado departamento.
Excluir Funcionário: excluir um funcionário a partir de sua matrícula.
Excluir Departamento: excluir um departamento a partir de seu código bem como todos os
funcionários pertencentes ao departamento excluído.
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
#define MAX_FUNC 100 
#define MAX_DEP 10

typedef struct 
{
    int sCodDep;
    char sNomeDep[100];
}TStructControleDep;//sContDep

typedef struct 
{
    int sMatFunc;
    char sNomeFunc[100];
    float sSalFunc;
}TStructControleFunc;//sContFunc

int pesquisaRepDep(TStructControleDep sContDep[], int cod, int ultCadDep)
{
    int i;
    for (i = 0; i <= ultCadDep; i++)
    {
        if (cod==sContDep[i].sCodDep)
        {
            return i;
        }
    }
    return -1;    
}

int pesquisaRepFunc(TStructControleFunc sContFunc[],int mat, int ultCadFunc)
{
    int i;
    for (i = 0; i <= ultCadFunc; i++)
    {
        if (mat==sContFunc[i].sMatFunc)
        {
            return i;
        }
    }
    return -1;    
}

void cadastroDep (TStructControleDep sContDep[],int tamanho, int *ultCadDep)
{
    int cod,pesquisa,sair;

    if (*ultCadDep<tamanho-1)
    {
        do
        {
            printf("\nInsira o codigo do departamento.:");
            scanf("%d",&cod);
            pesquisa=pesquisaRepDep(sContDep,cod,*ultCadDep);
            if (pesquisa==-1)
            {
                (*ultCadDep)++;
                sContDep[*ultCadDep].sCodDep=cod;
                setbuf(stdin,NULL);
                printf("\nInsira o Nome do Departamento.:");
                fgets(sContDep[*ultCadDep].sNomeDep,100,stdin);
                setbuf(stdin,NULL);
            }
            else
            {
                printf("Codigo de Departamento já existente!!!");
            }
            printf("\nDeseja Cadastrar um novo Departamento? 1-SIM | 2-Não");
            scanf("%d",&sair);
        } while (sair!=2);
    }
    else
    {
        printf("Todos os Departamentos Cadastrados!!!");
    }
}

void cadastroFunc (TStructControleFunc sContFunc[],int tamanho, int *ultCadFunc, TStructControleDep sContDep[], int ultCadDep)
{
    int mat,pesquisa,sair;
    /*
    if (ultCadDep==-1)
    {
        printf("\nNão tem departamento cadastrado!!");//Resolver isso depois
        return;
    }
    if (*ultCadFunc==tamanho-1)
    {
        printf("\nTodos os Fucionarios cadstrados");//Resolver isso depois
        return;
    }
    */
    do
    {
        printf("\nInsira o codigo do funcionario.:");
        scanf("%d",&mat);
        pesquisa=pesquisaRepFunc(sContFunc,mat,*ultCadFunc);
        
        printf("\nValor de pesquisa %d",pesquisa);//teste

        if (pesquisa==-1)
        {
            (*ultCadFunc)++;
            sContFunc[*ultCadFunc].sMatFunc=mat;
            printf("\nInsira o nome do Funcionario.:");
            setbuf(stdin,NULL);
            fgets(sContFunc[*ultCadFunc].sNomeFunc,100,stdin);
            setbuf(stdin,NULL);
            printf("\nInsira o Valor do Salario.:");
            scanf("%f",&sContFunc[*ultCadFunc].sSalFunc);
        }
        else
        {
            printf("\nMatricula de Funcionario repetida!!!");
        }    

        printf("\nnome do Funcionario %s",sContFunc[*ultCadFunc].sNomeFunc);//teste

        printf("\nDeseja Cadastrar um novo Funcionario? 1-SIM | 2-Não");
        scanf("%d",&sair);
    } while (sair!=2);
    
  
}

void consultaFunc (TStructControleFunc sContFunc[], int tamanho, int ultCadFunc)
{
    int mat,pesquisa,sair;

    if (ultCadFunc>=0)
    {
        do
        {
            printf("Insira a Matricula a ser pesquisada.:");
            scanf("%d",&mat);
            pesquisa=pesquisaRepFunc(sContFunc,mat,ultCadFunc);

            if (pesquisa!=-1)
            {
                printf("\nFuncionario.:");
                printf("\nNome.: %s",sContFunc[pesquisa].sNomeFunc);
                printf("Salario.: %.2f",sContFunc[pesquisa].sSalFunc);
            }
            else
            {
                printf("\nMatricula Inesistente!!!");
            }
            printf("\nDeseja Continuara Pesquisa? 1-SIM | 2-Não");
            scanf("%d",&sair);
        } while (sair!=2);
        
    }
    else
    {
        printf("\nNenhum funcionario cadstrado!!!");
    }
}

void alteracao (TStructControleFunc sContFunc[],  int tamanho, int ultCadFunc, TStructControleDep sContDep[], int ultCadDep)
{
    int mat,pesquisa,sair;
    
    if (ultCadDep<0)
    {
        printf("\nSem Departamento cadastrado");
        return;
    }
    if (ultCadFunc<0)
    {
        printf("\nSem Funcionario cadastrado");
        return;
    }
       do
   {
        printf("\nInsira a matricula do funcionario para alteração de dados.:");
        scanf("%d",&mat);
        pesquisa=pesquisaRepFunc(sContFunc,mat,ultCadFunc);
        if (pesquisa!=-1)
        {
            printf("Insira o Nome.:");
            setbuf(stdin,NULL);
            fgets(sContFunc[pesquisa].sNomeFunc,100,stdin);
            setbuf(stdin,NULL);
            printf("\nInsira o Valor do Salario.:");
            scanf("%f",&sContFunc[pesquisa].sSalFunc);
        }
        else
        {
            printf("\nMatricula de Funcionario inexistente!!!");
        }
        printf("\nDeseja sair da Alteração? 1-Não | 2-SIM");
        scanf("%d",&sair);
   } while (sair!=2);
}

void exclusao (TStructControleFunc sContFunc[],  int tamanho, int *ultCadFunc, TStructControleDep sContDep[], int ultCadDep)
{
    int mat,pesquisa,confirm,aux,sair;

    if (ultCadDep<0)
    {
        printf("\nSem Departamento cadastrado");
        return;
    }
    if (ultCadFunc<0)
    {
        printf("\nSem Funcionario cadastrado");
        return;
    }

    do
    {
        printf("\nInsira a matricula do Funcionario a ser excluida.:");
        scanf("%d",&mat);
        pesquisa=pesquisaRepFunc(sContFunc,mat,*ultCadFunc);
        confirm=-1;
        if (pesquisa!=-1)
        {
            printf("Tem Certeza que deseja excluir a Matricula %d Funcionario %s ",sContFunc[pesquisa].sMatFunc,sContFunc[pesquisa].sNomeFunc);
            printf("\n1-SIM | 2-NÃO");
            scanf("%d",&confirm);
            if (confirm=1)
            {
                sContFunc[pesquisa]=sContFunc[*ultCadFunc];
                (*ultCadFunc)--;
            }
        }
        else
        {
            printf("\nMatricula Inexistente");
        }
        
        printf("\nDeseja sair da Exclusão? 1-Não | 2-SIM");
        scanf("%d",&sair);
    } while (sair!=2);
    
}

int main (){
    int menu, sair;
    int ultimoCadastroDep;
    int ultimoCadastroFun;
    TStructControleDep sContDep [MAX_DEP];
    TStructControleFunc sContFunc [MAX_FUNC];
    
    ultimoCadastroDep=-1;
    ultimoCadastroFun=-1;
    do
    {
        printf("\n1-Cadastro Departamento | 2-Cadastro Funcionario | 3-Consulta de Funcionários");
        printf("\n4-Alteração funcionario | 5-Exclusão funcionario");
        printf("\nEscolha uma das opções acima.:");
        scanf("%d",&menu);
        switch (menu)
        {
        case 1://cadastro Departamento
            cadastroDep (sContDep,MAX_DEP, &ultimoCadastroDep);
            break;
        case 2://cadastro Funcionarrios
            cadastroFunc (sContFunc,MAX_FUNC,&ultimoCadastroFun,sContDep,ultimoCadastroDep);
            break;
        case 3://consulta funcionarios
            consultaFunc (sContFunc,MAX_FUNC,ultimoCadastroFun);
            break;        
        case 4://Alteração funcionario
            alteracao (sContFunc,MAX_FUNC,ultimoCadastroFun,sContDep,ultimoCadastroDep);
            break;  
        case 5://Exclusão funcionario
            exclusao(sContFunc,MAX_FUNC,&ultimoCadastroFun,sContDep,ultimoCadastroDep);
            break;    
        default:
            printf("\nCodigo invalido");
            break;
        }
        printf("\nDeseja sair do programa? 1-Não | 2-SIM");
        scanf("%d",&sair);

    //saida de dados
    
    } while (sair!=2);
    
    return 0;
}