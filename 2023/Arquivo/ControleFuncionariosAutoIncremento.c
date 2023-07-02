#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
typedef struct{
    int codigo;
    char nome[50];
}TDepartamento;

typedef struct{
   int matricula;
   char nome[100];
   float salario;
   int codDep;
}TFuncionario;

void retiraEnter(char *s){
    int t = strlen(s);
    if(s[t-1]=='\n')
       s[t-1]='\0';
}

int pesquisaDep(FILE *a,int cod){
    TDepartamento rd;
    int posicao=0;

    rewind(a);
    while(fread(&rd,sizeof(TDepartamento),1,a)==1){
        if(rd.codigo==cod)
           return posicao;
        else
           posicao++;
    }
    return -1;
}

int pesquisaFun(FILE *a,int mat){
    TFuncionario rf;
    int posicao=0;

    rewind(a);
    while(fread(&rf,sizeof(TFuncionario),1,a)==1){
        if(rf.matricula==mat)
           return posicao;
        else
           posicao++;
    }
    return -1;
}

void cadDep(FILE *arqD){
    TDepartamento rd;
    int sair;
    fseek(arqD,0,SEEK_END);
    rd.codigo=ftell(arqD)/sizeof(TDepartamento);
    do{
        rd.codigo++;
        printf("Forneça o nome do departamento:");
        setbuf(stdin,NULL);
        fgets(rd.nome,50,stdin);
        retiraEnter(rd.nome);
        setbuf(stdin,NULL);
            //posicionando no final do arquivo
        fseek(arqD,0,SEEK_END);
        fwrite(&rd,sizeof(TDepartamento),1,arqD);

        printf("Deseja sair do cadastro? 1-Sim  2-Não");
        scanf("%d",&sair);
    }while(sair!=1);
}

void cadFun(FILE *arqF,FILE *arqD){
    TFuncionario rf;
    TDepartamento rd;
    int sair,posicao;
    fseek(arqF,0,SEEK_END);
    rf.matricula=ftell(arqF)/sizeof(TFuncionario);
    //verificando se existe pelo menos um departamento cadastrado
    fseek(arqD,0,SEEK_END);
    if(ftell(arqD)/sizeof(TDepartamento)==0){
        printf("\nNenhum Departamento Cadastrado\n");
        return;
    }

    do{
        rf.matricula++;
        printf("Forneça o nome do funcionário:");
        setbuf(stdin,NULL);
        fgets(rf.nome,100,stdin);
        retiraEnter(rf.nome);
        setbuf(stdin,NULL);
        printf("Forneça o salário do funcionário:");
        scanf("%f",&rf.salario);

        do{
           printf("\nDepartamentos Cadastrados\n");
           printf("Código\t\tNome\n");
           rewind(arqD);
           while(fread(&rd,sizeof(TDepartamento),1,arqD)==1)
               printf("%d\t\t%s\n",rd.codigo,rd.nome);

           printf("Forneça o código do departamento:");
           scanf("%d",&rf.codDep);

           posicao = pesquisaDep(arqD,rf.codDep);

           if(posicao==-1)
              printf("\nDepartamento Inexistente!!!\n");
        }while(posicao==-1);
        fseek(arqF,0,SEEK_END);
        fwrite(&rf,sizeof(TFuncionario),1,arqF);

        printf("Deseja sair do cadastro de funcionários? 1-Sim  2-Não:");
        scanf("%d",&sair);
    }while(sair!=1);
}

void listagemDep(FILE *arqD){
    TDepartamento rd;
    printf("\nCodigo\t\tNome\n");
    rewind(arqD);
    while(fread(&rd,sizeof(TDepartamento),1,arqD)==1)
        printf("%d\t\t%s\n",rd.codigo,rd.nome);

}

void listagemFun(FILE *arqF,FILE *arqD){
    TFuncionario rf;
    TDepartamento rd;
    int posicao;
    printf("\nListagem de Funcionários\n");
    printf("Matrícula\t\tNome\t\t\tSalário\t\tDepartamernto\n");
    rewind(arqF);
    while(fread(&rf,sizeof(TFuncionario),1,arqF)==1){
        printf("%d\t\t%s\t\t\t\t%.2f\t\t",rf.matricula,rf.nome,rf.salario);
        posicao=pesquisaDep(arqD,rf.codDep);
        fseek(arqD,posicao*sizeof(TDepartamento),SEEK_SET);
        fread(&rd,sizeof(TDepartamento),1,arqD);
        printf("%s\n",rd.nome);
    }
}

void listagemFunPorDep(FILE *arqF,FILE *arqD){
    TFuncionario rf;
    TDepartamento rd;
    int soma,posicao;
    rewind(arqD);
    while(fread(&rd,sizeof(TDepartamento),1,arqD)==1){
        printf("\nDepartamento: %s\n",rd.nome);
        printf("Matrícula\t\tNome\t\t\t\tSalário\n");
        soma=0;
        rewind(arqF);
        while(fread(&rf,sizeof(TFuncionario),1,arqF)==1){
            if(rf.codDep==rd.codigo){
                printf("%d\t\t%s\t\t\t\t%.1f\n",rf.matricula,rf.nome,rf.salario);
                soma++;
            }
        }
        printf("Número de Funcionários do departamento = %d\n\n",soma);
    }
}
int comparacao(void *a,void *b){
    if(((TFuncionario*)a)->codDep>((TFuncionario*)b)->codDep)
        return 1;
    else
        if(((TFuncionario*)a)->codDep<((TFuncionario*)b)->codDep)
            return -1;
        else
            return 0;
}
void listagem(FILE *arqF,FILE *arqD){
    TFuncionario *v,rf;
    int tamanho,i;

    fseek(arqF,0,SEEK_END);
    tamanho = ftell(arqF)/sizeof(TFuncionario);
    v=(TFuncionario*)malloc(sizeof(TFuncionario)*tamanho);
    if(v!=NULL){
        rewind(arqF);
        fread(v,sizeof(TFuncionario),tamanho,arqF);
        qsort(v,tamanho,sizeof(TFuncionario),comparacao);
        printf("\nMatícula\t\tNome\t\t\t\tDepartamento\n");
        for(i=0;i<tamanho;i++)
            printf("%d\t\t%s\t\t\t\t%d\n",v[i].matricula,v[i].nome,v[i].codDep);
        free(v);
    }
    else
        printf("\nGame Over!!!\n");
}
int main(){
    FILE *arqDep,*arqFun;
    int opcao;
    setlocale(LC_ALL,"");
    arqFun=fopen("funcionarios.dat","rb+");
    if(!arqFun)//if(arqFun===NULL)
       arqFun=fopen("funcionarios.dat","wb+");

    arqDep=fopen("departamentos.dat","rb+");
    if(!arqDep)//if(arqDep===NULL)
       arqDep=fopen("departamentos.dat","wb+");

    do{
        printf("1-Cadastro de departamentos\n2-Cadastro de Funcionarios");
        printf("\n3-Listagem de Funcionarios\n4-Listagem de Departamentos");
        printf("\n5-Funcionários por Departemento\n6-Fim");
        printf("\nForneça sua opção:");
        scanf("%d",&opcao);

        switch(opcao){
            case 1:
                cadDep(arqDep);
                break;
            case 2:
                cadFun(arqFun,arqDep);
                break;
            case 3:
                listagemFun(arqFun,arqDep);
                break;
            case 4:
                listagemDep(arqDep);
                break;
            case 5:
                listagem(arqFun,arqDep);
                break;
        }
    }while(opcao!=6)   ;
    return 0;
}
