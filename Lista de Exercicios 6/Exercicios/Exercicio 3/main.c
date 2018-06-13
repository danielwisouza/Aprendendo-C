#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

char *dia_semana(int j)
{
     char *d[] = {"erro","domingo","segunda-feira","terça-feira","quarta-feira","quinta-feira","sexta-feira","sábado"};
    return d[1<=j && j<=7 ? j : 0];
}

int main()
{
    printf("\nDigite a data separado por espaco: dd mm aa: Exemplo 24 10 1997\n");
    int a,b,c,d,e,f,g,h,i,j,dia,mes,ano;
    printf("---  Semana? ---\n");
    printf("\nDigite um dia:");
    scanf("%i",&dia);
    printf("\Digite um mes:");
    scanf("%i",&mes);
    printf("\Digite um ano:");
    scanf("%i",&ano);
    a = ((12-mes)/10);
    b = (ano-a);
    c = (mes+(12*a));
    d = (b/100);
    e = (d / 4);
    f = (2 - d + e);
    g = (365.25 * b);
    h = (30.6001 * (c + 1));
    i = (f + g + h + dia + 5);
    j = (i % 7);
    printf("%s\n",dia_semana(j));

    system("pause");
    return 0;
}
