#include <math.h>
#include <stdio.h>

int main(){

/*nome:gabriel jose da silva roque
  exercicio: atividade avaliativa 2
  data:08/04/2023
*/

printf("EXERCICIO 1\n");

/*
 joao pedro e maria sao as variaveis de incremento.
 direcao,barulho,bebedeira e hero sao as variaveis.
 que caracterizam os possiveis crimes a serem cometidos.
 grave e a variavel que permite decidir a gravidade do crime.
 baixo medio e alto sao os niveis de gravidade do crime.
 1,2 e 3 apos as variaveis distingue o tipo de crime ocorrido,
 permitindo uma contagem sem misturar nivel alto de barulho
 com de hero por exemplo.
 escolha permite que se escolha quem vai receber a denuncia de crime.
*/

  int joao,pedro,maria,crime,direcao,grave,barulho,bebedeira,hero,escolha;
int baixo1,baixo2,baixo3,medio1,medio2,medio3,alto1,alto2,alto3,alto4;

do{

printf("escolha o tipo de crime que deseja denunciar:\n");
printf("1 para direçao perigosa:\n");
printf("2 para barulho:\n");
printf("3 para bebedeira:\n");
printf("4 para hero:\n");
scanf("%d",&crime);

if(crime>=1 && crime<=4){

 switch(crime){

 case 1:
     direcao++;
     printf("direçao perigosa\n");
     printf("gravidade:\n");
     printf("1 para baixo:\n");
     printf("2 para medio:\n");
     printf("3 para alto:\n");
     scanf("%d",&grave);


   if(grave==1){
        baixo1++;
        printf("gravidade baixa.\n");
        break;
     }else
          if(grave==2){
            medio1++;
            printf("gravidade media.\n");
            break;
          }else
               if(grave==3){
                alto1++;
                printf("gravidade alta.\n");
                break;
               }else
                    if(grave < 1 && grave > 3){
                        printf("valor fora do escopo de possibilidades.\n");
                        break;
                    }

 case 2:
     barulho++;
     printf("barulho\n");
     printf("gravidade:\n");
     printf("1 para baixo:\n");
     printf("2 para medio:\n");
     printf("3 para alto:\n");
     scanf("%d",&grave);
     if(grave==1){
        baixo2++;
        printf("gravidade baixa.\n");
        break;
     }else
          if(grave==2){
            medio2++;
            printf("gravidade media.\n");
            break;
          }else
               if(grave==3){
                alto2++;
                printf("gravidade alta.\n");
                break;
               }else
                    if(grave < 1 && grave > 3){
                        printf("valor fora do escopo de possibilidades.\n");
                        break;
                    }
    break;

 case 3:
     bebedeira++;
     printf("bebedeira\n");
     printf("gravidade:\n");
     printf("1 para baixo:\n");
     printf("2 para medio:\n");
     printf("3 para alto:\n");
     scanf("%d",&grave);
     if(grave==1){
        baixo3++;
        printf("gravidade baixa.\n");
        break;
     }else
          if(grave==2){
            medio3++;
            printf("gravidade media.\n");
            break;
          }else
               if(grave==3){
                alto3++;
                printf("gravidade alta.\n");
                break;
               }else
                    if(grave < 1 && grave > 3){
                        printf("valor fora do escopo de possibilidades.\n");
                        break;
                    }
    break;

 case 4:
    hero++;
    joao++;
    printf("infraçao de alto nivel\n");
    alto4++;
    break;
 }

if(joao == pedro && pedro == maria && crime!=4){

maria++;

}else
     if(joao > pedro && joao > maria && pedro == maria && crime!=4){
           maria++;
         }
else
     if(pedro > maria && pedro > joao && maria == joao && crime!=4){
            joao++;
         }
     else
          if(maria > pedro && maria > joao && pedro == joao && crime!=4){
                pedro++;
             }
          else


if(joao > pedro && pedro > maria && crime!=4){
    maria++;
}else
     if(joao > maria && maria > pedro && crime!=4){
         pedro++;
     }else
          if(pedro > maria && maria > joao && crime!=4){
             joao++;
          }else
               if(pedro > joao && joao > maria && crime!=4){
                   maria++;
               }else
                    if(maria > joao && joao > pedro && crime!=4){
                       pedro++;
                    }else
                         if(maria > pedro && pedro > maria && crime!=4){
                             maria++;
                         }else
                              if(joao == pedro && pedro > maria && crime!=4){
                                 maria++;
                              }else
                                   if(joao == maria && maria > pedro && crime!=4){
                                      pedro++;
                                   }else
                                        if(pedro == maria && maria > joao && crime!=4){
                                           joao++;
                                        }

printf("ocorrencia do policial joao: %d\n",joao);
printf("ocorrencia do policial pedro: %d\n",pedro);
printf("ocorrencia da policial maria: %d\n",maria);
printf("\n\n\n");

}else{
     printf("fim do programa!\n");
    printf("ocorrencia do policial joao: %d\n",joao);
printf("ocorrencia do policial pedro: %d\n",pedro);
printf("ocorrencia da policial maria: %d\n",maria);
printf("incidencia dos tipos de ocorrencia:\n");
printf("incidencia de direçao perigosa: %d\n",direcao);
printf("baixo: %d\n",baixo1);
printf("medio1: %d\n",medio1);
printf("alto1: %d\n",alto1);
printf("incidencia de barulho: %d\n",barulho);
printf("baixo: %d\n",baixo2);
printf("medio: %d\n",medio2);
printf("alto: %d\n",alto2);
printf("incidencia de bebedeira: %d\n",bebedeira);
printf("baixo: %d\n",baixo3);
printf("medio: %d\n",medio3);
printf("alto: %d\n",alto3);
printf("incidencia hero: %d\n",hero);
printf("alto: %d\n",alto4);
}
}while(crime!=0);



printf("EXERCICIO 2\n");

/*
variaveis dias,mes e ano 1 se referem a primeira data a ser informada.
variaveis dias,mes e ano 2 se referem a segunda data a ser informada.
totaldias1 todos os dias da primeira data.
totaldias2 todos os dias da segunda data.
diferenca menor que zero caso o primeiro ano seja maior que o segundo.
diferenca igual a zero caso se trate do mesmo ano.
diferenca igual a um caso seja o caso de ser um ano e o seu seguinte.
diferenca igual ou maior que dois:nesse caso havera o primeiro ano,o segundo
e mais algum entre eles,entao o mesmo sera considerado apenas pelos seus
dias,podendo ser 365 ou 366.
*/

int dias1,mes1,ano1,dias2,mes2,ano2,diferenca,dias_extras,anoMenosUm;
float totaldias2,todosdias,totaldias1;

printf("informe o dia da primeira data:\n");
scanf("%d",&dias1);
printf("informe o mes da primeira data:\n");
scanf("%d",&mes1);
printf("informe o ano da primeira data:\n");
scanf("%d",&ano1);
printf("informe o dia da segunda data:\n");
scanf("%d",&dias2);
printf("informe o mes da segunda data:\n");
scanf("%d",&mes2);
printf("informe o mes da segunda data:\n");
scanf("%d",&ano2);

/*diferenca se refere a distancia do primeiro ano ao segundo para que assim se poça pegar os anos entre os dois valores e substituir por 365 ou 366. caso a diferenca seja de mais de dois anos*/

diferenca = ano2 - ano1;

/*
resul seria o valor do segundo ano menos um,ja que o ultimo ano nao deve ser considerado ja que eu nao quero o ano inteiro,apenas ate a data presente/atual do ultimo ano.
*/

anoMenosUm = ano2 - 1;

if(diferenca<0){
    printf("a operaçao so sera realizada caso o segundo ano seja decorrido do primeiro\n");
}

/*
essa possibilidade considera a hipotese das duas datas serem o mesmo ano.
*/

if(diferenca==0){
   totaldias1 = dias1 + (mes1*30);
   totaldias2 = dias2 + (mes2*30);
   todosdias = totaldias2 - totaldias1;
   printf("o total de dias decorridos foram %.2f\n",todosdias);

}

/*
essa possibilidade considera o caso onde o segundo ano seja o seguinte apos o primeiro.
*/

if(diferenca==1){
    if((ano1%4==0 && ano1%100!=0) || ano1%400==0){
   totaldias1 = 366 - (dias1 + (mes1*30));
   totaldias2 = dias2 + (mes2*30);
   todosdias = totaldias2 + totaldias1;
   printf("o total de dias decorridos foram %.2f\n",todosdias);

}else{
   totaldias1 = 365 - (dias1 + (mes1*30));
   totaldias2 = dias2 + (mes2*30);
   todosdias = totaldias2 + totaldias1;
   printf("o total de dias decorridos foram %.2f\n",todosdias);

}
}

/*
resul permitira que o ultimo ano nao tenha adicionado 365 ou 366
sendo que o ultimo ano se refere ao atual,e o mesmo pode nao ter
terminado por completo.
nesse caso mais de dois anos de distancia deve se considerar
ao menos um ano que estara entre o primeiro e o segundo portanto
devera ser substituido pela sua quantidade
de dias,sendo 365 ou 366.
ano++ adiciona anos ate a primeira data alcançar  penultimo ano.
*/

if(diferenca>=2){
   while(ano1<anoMenosUm){
        ano1++;

   if((ano1%4==0 && ano1%100!=0) || ano1%400==0){
    dias_extras+=366;

       }else{
       dias_extras+=365;

       }
   }

/*
aqui o total de dias do primeiro ano sera calculado.
a subtracao do 365 ou 366 retira os dias ja decorridos do ano.
*/

if((ano1%4==0 && ano1%100!=0) || ano1%400==0){
   totaldias1 = 366 - (dias1 + (mes1*30));

   }else{
     totaldias1 = 365 - (dias1 + (mes1*30));

}

/*
total de dias do segundo ano.
ultimo ano apenas conta os dias decorridos,nao sendo necessario
subtraçao por 365 ou 366.
*/
totaldias2 = dias2 + (mes2*30);

/*
dias totais,todos os dias que foram do primeiro ano,todos os dias
dos anos entre a primeira data e a segunda,e por fim os dias
decorridos da segunda data.
*/

todosdias = totaldias2 + totaldias1 + dias_extras;

printf("o total de dias decorrido da data inicial ate a final foi de:%.2f\n",todosdias);
}




printf("EXERCICIO 3\n");

/*
democracia se refere a variavel do voto,mary,pedru,lara,leticia
branco e nulo as opçoes de voto,vototal seria todos os votos
computados.
++ apos os nomes indica a adiçao dos votos apos a votaçao.
*/

int democracia,mary,vototal,pedru,lara,leticia,branco,nulo;

do{
printf("para votar em maria luiza digite 1\n");
printf("para votar em pedro henrique digite 2\n");
printf("para votar em lara cota digite 3\n");
printf("para votar em leticia cota digite 4\n");
printf("para votar nulo digite 5\n");
printf("para votar branco digite 6\n");
printf("digite 0 para encerrar o programa\n");
scanf("%d",&democracia);

if(democracia==0){
    printf("fim da votaçao\n");
}else
     if(democracia==1){
        printf("voto computado para maria luiza\n");
        mary++;
        vototal++;
     }else
          if(democracia==2){
            printf("voto computado para pedro henrique\n");
            pedru++;
            vototal++;
          }else
               if(democracia==3){
                printf("voto computado para lara cota\n");
                lara++;
                vototal++;
               }else
                    if(democracia==4){
                        printf("voto computado para leticia cota\n");
                        leticia++;
                        vototal++;
                    }else
                         if(democracia==5){
                            printf("voto nulo\n");
                            nulo++;
                            vototal++;
                         }else
                              if(democracia==6){
                                printf("voto branco\n");
                                branco++;
                                vototal++;
                              }else{
                              printf("voto fora do escopo de possibilidades\n");
                              }


}while(democracia!=0);
printf("resultados:\n");
printf("votos totais:%d\n",vototal);
printf("votos bracos:%d\n",branco);
printf("votos nulos:%d\n",nulo);
printf("votos do candidato pedro:%d\n",pedru);
printf("votos do candidata maria:%d\n",mary);
printf("votos da candidata lara:%d\n",lara);
printf("votos da candidata leticia:%d\n",leticia);

if(mary > pedru && mary > lara && mary > leticia){
    printf("maria venceu a eleiçao\n");
}else
     if(pedru > mary && pedru > lara && pedru > leticia){
        printf("pedro venceu a eleiçao\n");
     }else
          if(lara > pedru && lara > mary && lara > leticia){
            printf("lara ganhou a eleiçao\n");
          }else
               if(leticia > pedru && leticia > mary && leticia > lara){
                printf("leticia ganhou a eleiçao\n");
               }

printf("EXERCICIO 4 ainda nao terminado\n");

int n,m,dia,mes,ano,consumo,consumo_total,soma_dias,mais_dias;
float todos_dias;

printf("informe o numero de medidas realizadas:\n");
scanf("%d",&n);

do{

printf("informe o dia,mes,ano do consumo lido e valor consumido:\n");
scanf("%d",&dia);
scanf("%d",&mes);
scanf("%d",&ano);
scanf("%d",&consumo);
consumo_total+=consumo;

m++;

if(m==0){
    printf("nenhuma medida foi realizada.\n");
    break;
}

if(m==1){
  if(ano%4==0 && ano%100!=0 || ano%400==0){
   todos_dias = 366 - (dia + (mes*30));
   soma_dias+=todos_dias;
  }else{
   todos_dias = 365 - (dia + (mes*30));
   soma_dias+=todos_dias;
}
}

if(m>1 && m<n){
  if(ano%4==0 && ano%100!=0 || ano%400==0){
     mais_dias+=366;
     soma_dias+=mais_dias;
   }else{
         mais_dias+=365;
         soma_dias+=mais_dias;
   }
}

if(m==n){
    todos_dias = dia + (mes*30);
    soma_dias+=todos_dias;
}

printf("data:%d/%d/%d",dia,mes,ano);
printf("consumo desta data:%d",consumo);
printf("total de dias acumulados:%d",soma_dias);
printf("consumo acumulado:%d",consumo_total);
printf("%d de %d medidas realizadas no total.",m,n);




}while(m<=n);

  return 0;
}


