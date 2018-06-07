#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void verificaTUDO(int dia, int mes, int ano)
{
    int Valida=0;
    if ((mes>=1) && (mes<=12)){
        if ((mes==1)||(mes==3)||(mes==5)||(mes==7)||(mes==8)||(mes==10)||(mes==12)){
            if ((dia>=1) && (dia<=31)){Valida=1;}
            }
        if ((mes==4)||(mes==6)||(mes==9)||(mes==11)){
            if ((dia>=1) && (dia<=31)){Valida=1;}
            }
        if (mes==2){
            if (verificaANO(ano)==1){
                if ((dia>=1)||(dia<=29)){(Valida=1);}
            }
            else{
                if ((dia>=1)||(dia<=28)){(Valida=1);}
            }
        }
    }
    if (Valida!=1){
        system("pause");
    }
}

int verificaANO(int ano)
{
    int verificaANO;
    if (((ano%400)==0) && (((ano%4)==0))){
    return 1;
    }
    else{
    return 0;
    }
}

char *dia_semana(int dia, int mes, int ano)
{
     char *d[] = {"erro","domingo","segunda-feira","terça-feira","quarta-feira","quinta-feira","sexta-feira","sábado"};
     //_strdate(dateStr);//chamada de uma função da biblioteca time.h
     //printf( "\nData atual %s \n", dateStr);
     //ANO=2000+((dateStr[6]-48)*10)+((dateStr[7]-48));//ajuste do ano atual

    //return d[1<=n && n<=7 ? n : 0];
}

int main()
{
    int dia,mes,ano;
    printf("\nDigite a data separado por espaco: dd mm aa: Exemplo 24 10 1997\n");
    scanf("%i %i %i",&dia,&mes, &ano);
    verificaTUDO(dia,mes,ano);
    return 0;
}
