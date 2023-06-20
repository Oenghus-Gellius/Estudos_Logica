#include <stdio.h>
#include <string.h>
#include <locale.h>

typedef struct{
    int codigo;
    char nome[50],sigla[10];
}TDepartamento;

typedef struct{
    int matricula;
    char nome[100];
    float salario;
    int codDep;
}TFuncionario;



#define MAX_F 100 //nÃºmero mÃ¡ximo de funcionÃ¡rios
#define MAX_D 10
void retiraEnter(char *s){
    int t=strlen(s);

    if(s[t-1]=='\n' )
       s[t-1]='\0';
}

int pesquisaFunc(TFuncionario v[],int ultimaPosicao,int mat){
    int i;
    for(i=0;i<=ultimaPosicao;i++){
        if(v[i].matricula==mat)
           return i;
    }
    return -1;
}

int pesquisaDep(TDepartamento v[],int ultimaPosicao,int cod){
    int i;
    for(i=0;i<=ultimaPosicao;i++){
        if(v[i].codigo==cod)
           return i;
    }
    return -1;
}


void cadastroDep(TDepartamento v[] ,int tamanho, int *ultimaPosicaoD){
    int cod,sair;
    if(*ultimaPosicaoD<tamanho-1){
        do{
            printf("ForneÃ§a a codigo:");
            scanf("%d",&cod);
            if(pesquisaDep(v,*ultimaPosicaoD,cod)==-1){
                (*ultimaPosicaoD)++;
                v[*ultimaPosicaoD].codigo=cod;
                setbuf(stdin,NULL);
                printf("ForneÃ§a o nome:");
                fgets(v[*ultimaPosicaoD].nome,50,stdin);
                retiraEnter(v[*ultimaPosicaoD].nome);
                setbuf(stdin,NULL);
                printf("ForneÃ§a a Sigla:");
                fgets(v[*ultimaPosicaoD].sigla,10,stdin);
                retiraEnter(v[*ultimaPosicaoD].sigla);
                setbuf(stdin,NULL);
                
            }
            else
               printf("\nCÃ³digo Repetido!!!\n");

            if(*ultimaPosicaoD<tamanho-1){
                printf("Desja sair do Cadastro de Departamento? 1-Sim  2-NÃ£o:");
                scanf("%d",&sair);
            }

        }while((*ultimaPosicaoD<tamanho-1) && (sair !=1));
    }
    else
       printf("\nTodos os Departamentos jÃ¡ Cadastrados!!!!\n");

}

void cadastroFunc(TFuncionario vf[],int tamanho,int *ultimaPosF,TDepartamento vd[],
                  int ultimaPosD){
    int mat,sair,i,achou;                  
    //verificando se hÃ¡ pelo um departamento Cadastrad
    if(ultimaPosD==-1){
        printf("\nNenhum Departamento Cadastrado!!!\n");
        return;
    }
    
    //verificndo se a tabela de funcionÃ¡rios estÃ¡ cheia
    if(*ultimaPosF==tamanho-1){
        printf("\nTodos os funcionÃ¡rios jÃ¡ Cadastrados!!!!\n");
        return;
    }
    
    do{
        printf("ForneÃ§a a MatrÃ­cula:");
        scanf("%d",&mat);
        
        //verificando se a matrÃ­cula Ã© repetida
        if(pesquisaFunc(vf,*ultimaPosF,mat)==-1){
            (*ultimaPosF)++;
            vf[*ultimaPosF].matricula=mat;
            setbuf(stdin,NULL);
            printf("ForneÃ§a o nome:");
            fgets(vf[*ultimaPosF].nome,100,stdin);
            retiraEnter(vf[*ultimaPosF].nome);
            setbuf(stdin,NULL);
            printf("ForneÃ§a o salÃ¡rio:");
            scanf("%f",&vf[*ultimaPosF].salario);
            //
            do{
                printf("\nDepartamentos Cadastrados\n");
                printf("CÃ³digo\t\tNome");
                for(i=0;i<=ultimaPosD;i++){
                    printf("\n%d\t\t%s",vd[i].codigo,vd[i].nome);
                }
                printf("\nForneÃ§a o cÃ³digo do Departamento:");
                scanf("%d",&vf[*ultimaPosF].codDep);
                achou=pesquisaDep(vd,ultimaPosD,vf[*ultimaPosF].codDep);
                
                if(achou==-1)
                   printf("\nCÃ³digo de Departamento Inexistente!!!\n");
                
            }while(achou==-1);
        }
        else
            printf("MatrÃ­cula Repetida!!!");
        if(*ultimaPosF <tamanho-1){
            printf("Deseja sair do cadastro de funcionÃ¡rios: 1-Sim 2-NÃ£o");
            scanf("%d",&sair);
        }
        
    }while(*ultimaPosF<tamanho-1 && sair!=1);
}


void excluirDep(TDepartamento vd[],int *ultimaPosicaoD,TFuncionario vf[],int *ultimaPosF){
    
}

int main(){
    int opcao,ultimaPosD=-1,ultimaPosF=-1;
    TFuncionario vf[MAX_F];
    TDepartamento vd[MAX_D];
    setlocale(LC_ALL,"");
    do{
        printf("Controle de FucionÃ¡rios\n");
        printf("1-Cadastro Departamento\n2-Cadastro de FuncionÃ¡rio\nExcluir Departamento\n10-Sair");
        printf("\nForneÃ§a sua OpÃ§Ã£o:");
        scanf("%d",&opcao);
        switch(opcao){
            case 1:
               cadastroDep(vd,MAX_D,&ultimaPosD);
               break;
            case 2:
               cadastroFunc(vf,MAX_F,&ultimaPosF,vd,ultimaPosD);
               break;
            case 3:
               excluirDep(vd,&ultimaPosD,vf,&ultimaPosF);
               break;
        }
    }while(opcao!=10);

    return 0;
}
