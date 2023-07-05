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
#include <stdlib.h>
#include <string.h>
#define DEPARTAMENTO 10
#define FUNCIONARIOS 1000

typedef struct 
{
    int sCodDep;
    char sNomeDep[100];
    char sSiglaDep[100];
}TDepartamento; //sDep

typedef struct  
{
    int sMatFun;
    char sNomeFun;
    int sNascDiaFun, sNascMesFun, sNascAnoFun;
    int sCpfFun;
    float sSalarioFun;
    int sCodDepF;
}TFuncionario;//sFun

int codCheckRepet(TDepartamento sDep[], int cod, int ultimaPosCadDep)
{
    int i;
    for (i = 0; i <= ultimaPosCadDep; i++)
    {
        if (cod==sDep[i].sCodDep)
        {
            return i;
        }
    }
    return -1;
}

void cadDepartamento (TDepartamento sDep[], int tamanho, int *ultimaPosCadDep)
{
    int cod,posicao,sair;
    if (*ultimaPosCadDep<tamanho)
    {
        do
        {
            printf("\nInsira o codigo do Departamento.:");
            scanf("%d",&cod);
            posicao=codCheckRepet(sDep,cod,*ultimaPosCadDep);
            if (posicao==-1)
            {
                (*ultimaPosCadDep)++;
                sDep[*ultimaPosCadDep].sCodDep=cod;
                printf("Insira o Nome do Departamente.:");
                setbuf(stdin,NULL);
                fgets(sDep[*ultimaPosCadDep].sNomeDep,100,stdin);
                setbuf(stdin,NULL);
                printf("Insira A Sigla do Departamente.:");
                fgets(sDep[*ultimaPosCadDep].sSiglaDep,100,stdin);
                setbuf(stdin,NULL);
            }
            else
            {
                printf("\nCodigo já existente!!!");
            }
            printf("\nEncerrar o Cadastro de Departamente? 1-Não | 2-Sim: ");
            scanf("%d", &sair);
        } while (sair!=2);
    }
}

void CadFuncionario (TFuncionario sFun[],int *ultimaPosCadFun,TDepartamento sDep[], int ultimaPosCadDep)
{
    int mat,posicao,i,depCod,sair;
    if (ultimaPosCadDep>=0)
    {
        do
        {
            printf("\nInsira a Matricula do Funcionario.:");
            scanf("%d",&mat);
            posicao=codCheckRepet(sFun,mat,ultimaPosCadFun);
            if (posicao==-1)
            {
                (*ultimaPosCadFun)++;
                sFun[*ultimaPosCadFun].sMatFun=mat;
                printf("\nInsira o Nome do Funcionario.:");
                setbuf(stdin,NULL);
                fgets(sFun[*ultimaPosCadFun].sNomeFun,100,stdin);
                setbuf(stdin,NULL);
                printf("\nData nascimento.:");
                printf("\nDia");
                scanf("%d",&sFun[*ultimaPosCadFun].sNascDiaFun);
                printf("\nMes");
                scanf("%d",&sFun[*ultimaPosCadFun].sNascMesFun);
                printf("\nAno");
                scanf("%d",&sFun[*ultimaPosCadFun].sNascAnoFun);
                //falta cadastro CPF
                printf("\nSalario Funcionario.:");
                scanf("%f",&sFun[*ultimaPosCadFun].sSalarioFun);
                printf("\nDepartamento.:");
                printf("\nCodigo\tSigla\t\tNome Departamento");
                for (i = 0; i <= ultimaPosCadDep; i++)
                {
                    printf("\n%d\t%s\t\t%s",sDep[i].sCodDep,sDep[i].sSiglaDep,sDep[i].sNomeDep);
                }
                printf("\nInsira o codigo do Departamento vinculado.:");
                scanf("%d",&depCod);
                posicao=codCheckRepet(sDep,depCod,ultimaPosCadDep);
                while (posicao==-1)
                {
                    printf("\nDepartamento Inexistente!!!");
                    printf("\nInsira o codigo do Departamento vinculado.:");
                    scanf("%d",&depCod);
                    posicao=codCheckRepet(sDep,depCod,ultimaPosCadDep);
                }
                sFun[*ultimaPosCadFun].sCodDepF=depCod;                
            }
            else
            {
                printf("\nMatricula existente!!!");
            }
            
            
            printf("\nEncerrar o Cadastro de Funcionarios? 1-Não | 2-Sim:");
            scanf("%d", &sair);
        } while (sair!=2);
    }
    else
    {
        printf("Nenhum departamento cadastrado");
    }
    
    
}

int main(){
    int menu,sair;
    int ultimaPosCadDep=-1;
    int ultimaPosCadFun=-1;
    TDepartamento sDep[DEPARTAMENTO];
    TFuncionario sFun[FUNCIONARIOS];

    do
    {
        printf("\n1-Cadastro de Departamento");
        printf("\n2-Cadastro de Funcionários");
        printf("\n3-Consulta de Funcionários");
        printf("\n4-Funcionários de um Departamento");
        printf("\n5-Excluir Funcionário");
        printf("\n6-Excluir Departamento");
        printf("\nEscolha uma das opções.:");
        scanf("%d",&menu);

        switch (menu)
        {
        case 1:
            cadDepartamento (sDep, DEPARTAMENTO,&ultimaPosCadDep);
            break;
        case 2:
            CadFuncionario (sFun,&ultimaPosCadFun,sDep,ultimaPosCadDep);
            break;
        case 3:
            /* code */
            break;
        case 4:
            /* code */
            break;
        case 5:
            /* code */
            break;
        case 6:
            /* code */
            break;        
        default:
            printf("Codigo invalido!!!");
            break;
        }

        printf("\nEncerrar o programa? 1-Não | 2-Sim: ");
        scanf("%d", &sair);
    } while (sair!=2);
    

    return 0;
}
