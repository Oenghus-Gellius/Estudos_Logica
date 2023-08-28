/*
Bolivar Augusto Dias Jr
TSI - Logica.:2023
https://github.com/Oenghus-Gellius/Estudos_Logica


Considerando os arquivos
Departamento
codigo Nome
10 TI
5 RH
20 ADM
Funcionario
Matricula Nome Salário CodDep
100 Malu 10000,00 5
50 Amanda 3000,00 5
200 Pedro 30000,00 10
4 Lara 2000,00 10
230 Le 120000,00 10
Mostrar um Relatóri0 com o layout abaixo
Departamento: RH
Matrícula Nome Salário
100 Malu 10000,00
50 Amanda 3000,00
Total de Funcionários: 2
Departamento: TI
Matrícula Nome Salário
200 Pedro 30000,00
4 Lara 2000,00
230 Le 120000,00
Total de Funcionários: 3
Para ferar tal relátorio, considere que o arquivode funcionário está ordenado pelo campo codDep.
Você deve leroarquivo de funcionáriouma única vez.

Data de entrega: 07/07/2023

*/
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

typedef struct
{
    int codDep;
    char nomeDep[100]; 
}TDepartamento;//sDep

typedef struct 
{
    int matFun;
    char nomeFun[100];
    float salarioFun;
    int codDepFun;
}TFuncionario;//sFun

void retiraEnter(char *s)
{
    int t = strlen(s);
    if(s[t-1]=='\n')
       s[t-1]='\0';
}

int checkRepetCod (FILE *arqDepartamento,int cod)
{
    TDepartamento sDep;
    int posicao=0;

    rewind(arqDepartamento);
    while (fread(&sDep,sizeof(TDepartamento),1,arqDepartamento)==1)
    {
        if (cod==sDep.codDep)
        {
            return posicao;
        }
    }
    return -1;
}

int checkRepetMat (FILE *arqFuncionario,int mat)
{
    TFuncionario sFun;
    int posicao=0;

    rewind(arqFuncionario);
    while (fread(&sFun,sizeof(TFuncionario),1,arqFuncionario)==1)
    {
        if (mat==sFun.matFun)
        {
            return posicao;
        }
    }
    return -1;
}

void cadDepartamento(FILE *arqDepartamento)
{
    int cod,posicao,sair;
    TDepartamento sDep;

    fseek(arqDepartamento,0,SEEK_END);
    do
    {
        printf("\nInsira o codigo do Departamento.:");
        scanf("%d",&cod);
        posicao=checkRepetCod(arqDepartamento,cod);
        if (posicao==-1)
        {
            sDep.codDep=cod;
            printf("\nInsira o Nome Do Departamento.:");
            setbuf(stdin,NULL);
            fgets(sDep.nomeDep,100,stdin);
            retiraEnter(sDep.nomeDep);
            setbuf(stdin,NULL);

            fseek(arqDepartamento,0,SEEK_END);
            fwrite(&sDep,sizeof(TDepartamento),1,arqDepartamento);

            printf("\nDepartamento Cadastrado com sucesso!!!");
        }
        else
        {
            printf("\nCodigo de Departamento já cadastrado!!!\n");
        }
        printf("\nEncerrar do cadastro de Departamento.: 1-Não | 2-SIM");
        scanf("%d",&sair);
    } while (sair!=2);
}

void cadFuncionario(FILE *arqFuncionario, FILE *arqDepartamento)
{
    TFuncionario sFun;
    TDepartamento sDep;
    int mat,posicao,cod,sair;

    fseek(arqDepartamento,0,SEEK_END);

    if (ftell(arqDepartamento)/sizeof(TDepartamento)==0)
    {
        printf("\nNenhum Departamento Cadastrado\n");
        return;
    }
    
    do
    {
        printf("\nInsira a Matricula do Funcionario.:");
        scanf("%d",&mat);
        posicao=checkRepetMat(arqFuncionario,mat);
        if (posicao==-1)
        {
            sFun.matFun=mat;
            printf("\nInsira o Nome do Funcionario.:");
            setbuf(stdin,NULL);
            fgets(sFun.nomeFun,100,stdin);
            retiraEnter(sFun.nomeFun);
            setbuf(stdin,NULL);
            printf("\nSalario Funcionario.:");
            scanf("%f",&sFun.salarioFun);

            do
            {
                rewind(arqDepartamento);
                printf("Codigo\t\tNome Departamento");
                while (fread(&sDep,sizeof(TDepartamento),1,arqDepartamento)==1)
                {
                    printf("\n%d\t\t%s",sDep.codDep,sDep.nomeDep);
                }
                printf("\nEscolha o codigo do departamento do Funcionario.:");
                scanf("%d",&cod);

                posicao=checkRepetCod(arqDepartamento,cod);

                if (posicao==-1)
                {
                    printf("\nDepartamento Inexistente!!!\n");
                }   
            } while (posicao==-1);
            sFun.codDepFun=cod;
            fseek(arqFuncionario,0,SEEK_END);
            fwrite(&sFun,sizeof(TFuncionario),1,arqFuncionario);

            printf("\nFuncionario Cadastrado com sucesso!!!");
        }
        else
        {
            printf("\nFuncionario já Cadastrado!!!\n");
        }
        printf("\nEncerrar do cadastro de Funcionarios.: 1-Não | 2-SIM");
        scanf("%d",&sair);
    } while (sair!=2);
}

void relatorioDep(FILE *arqDepartamento,FILE *arqFuncionario)
{
    TDepartamento sDep;
    TFuncionario sFun;
    int posicao;
    int soma;

    rewind(arqDepartamento);
    while (fread(&sDep,sizeof(TDepartamento),1,arqDepartamento)==1)
    {
        printf("\n--------------------------");
        printf("\nCod.Dep\tNome.:");
        printf("\n%d\t%s.:",sDep.codDep,sDep.nomeDep);
        printf("\nMat.Fum\tNome\t\t\t\tSalario.:");
        soma=0;
        rewind(arqFuncionario);
        while (fread(&sFun,sizeof(TFuncionario),1,arqFuncionario)==1)
        {
            if (sDep.codDep==sFun.codDepFun)
            {
                printf("\n%d\t%s\t\t\t%.2f.:",sFun.matFun,sFun.nomeFun,sFun.salarioFun);
                soma++;
            }
        }
        printf("\n\nNúmero de Funcionários do departamento = %d",soma);
    }
}

void listaDepartamentos (FILE *arqDepartamento)
{
    TDepartamento sDep;

    rewind(arqDepartamento);
    printf("\nDepartamentos.:");
    printf("\nCod.\t\tNome");
    while (fread(&sDep,sizeof(TDepartamento),1,arqDepartamento)==1)
    {
        printf("\n%d\t\t%s",sDep.codDep,sDep.nomeDep);
    }
}

void listaFuncionarios (FILE *arqFuncionario)
{
    TFuncionario sFun;

    rewind(arqFuncionario);
    printf("\nFuncionario.:");
    printf("\nMat.\t\tNome\t\t\t\t\tSalario");
    while (fread(&sFun,sizeof(TFuncionario),1,arqFuncionario)==1)
    {
        printf("\n%d\t\t%s\t\t\t\t%.2f",sFun.matFun,sFun.nomeFun,sFun.salarioFun);
    }  
}

int main(){
    FILE *arqDepartamento;
    FILE *arqFuncionario;
    int menu,sair;

    setlocale(LC_ALL,"");

    arqDepartamento=fopen("departamento.dat","rb+");
    if (arqDepartamento==NULL)
    {
        arqDepartamento=fopen("departamento.dat","wb+");
    }
    arqFuncionario=fopen("funcionario.dat","rb+");
    if (arqFuncionario==NULL)
    {
        arqFuncionario=fopen("funcionario.dat","wb+");
    }
    do
    {
        printf("\n---GESTÃO FACULDADE---");
        printf("\n1-Cadastro Departamento | 2-Cadastro Funcionario | 3-Relatório Departamentos");
        printf("\n4-Listagem de Departamentos | 5-Listagem de Funcionarios | 6-Fim");
        printf("\nEscolha umas das opões no menu.:");
        scanf("%d",&menu);
        switch (menu)
        {
        case 1://Cadastro Departamento
            cadDepartamento(arqDepartamento);
            break;
        case 2://Cadastro Funcionario
            cadFuncionario(arqFuncionario,arqDepartamento);
            break;
        case 3://Relatório Departamentos
            relatorioDep(arqDepartamento,arqFuncionario);
            break;
        case 4://Listagem de Departamentos
            listaDepartamentos (arqDepartamento);
            break;
        case 5://Listagem de Funcionarios
            listaFuncionarios (arqFuncionario);
            break;
        case 6://4-Fim
            printf("Obrigado!!!");
            return 0;
            break;      
        default:
            printf("\nOpção invalida!!!");
            break;
        }
        printf("\nEncerrar o programa 1-Não | 2-SIM");
        scanf("%d",&sair);
    } while (sair!=2);
    printf("Obrigado!!!");
    
    return 0;
}