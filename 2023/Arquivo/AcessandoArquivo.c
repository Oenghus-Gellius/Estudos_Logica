#include<stdio.h>
int main(){
    FILE*a;
    int matricula;
    float salario;
    char nome[100];
    a=fopen("dados.txt","r");
    if(!a){//if(a=NULL)
    printf("\n Matricula\t\tNome\t\t\tSalário\n");
    while(fscanf(a,"%d %s %f",&matricula,nome,&salario)==3){
        printf("%d\t\t%s\t\tR$ %.2f\n",matricula,nome,salario);
    }
    
    fclose(a);    
    }
    else
    printf("\nErro na abertura do arquivo!!!\n");
    return 0;
}